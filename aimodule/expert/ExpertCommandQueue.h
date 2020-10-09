#pragma once
#include <mutex>
#include <deque>
#include <chrono>
#include <condition_variable>
#include <grpcpp/grpcpp.h>

#include "protos/expert/expert_api.pb.h"

class ExpertCommandQueue
{
public:
	ExpertCommandQueue();
	~ExpertCommandQueue();

	struct Item
	{
		const protos::expert::RequestList* request;
		protos::expert::ReplyList* reply;
		std::condition_variable* conditionVar;
		bool* isProcessed;
		grpc::Status* status;
	};

	grpc::Status PushAndWaitForCompletion(const protos::expert::RequestList* request, protos::expert::ReplyList* reply);
	std::mutex* GetMutex();
	Item* Pop();
	void Clear();
	bool IsEmpty();

private:
	std::mutex commandQueueMutex;
	std::deque<Item *> commandQueue;
};
