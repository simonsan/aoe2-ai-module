#pragma once
#include <string>
#include <stdint.h>

#define GAME_DE
//#define DEBUG_MODE

namespace aimodule_conf
{
	static const std::string RPC_SERVER_ADDRESS = "0.0.0.0:37412";

#ifdef GAME_DE
	static const std::string GAME_MODULE_NAME = "AoE2DE_s.exe";
	static const int64_t REFERENCE_BASE_ADDR = 0x7FF7C7570000;
#endif
}

namespace expert_conf
{
	static const int COMMAND_TIMEOUT_SECONDS = 5;

#ifdef GAME_DE
	// addresses related to expert engine in general
	static const int64_t ADDR_FUNC_RUN_LIST = 0x7FF7C7CAD310;
#ifdef DEBUG_MODE
	static const int64_t ADDR_FUNC_DEF_ACTION = 0x7FF7C7CB1260;
#endif
	static const int64_t ADDR_VAR_INFORMATION_AI = 0x7FF7CA148270;
	static const int64_t ADDR_VAR_CURRENT_PLAYER = 0x7FF7CA144BC0;

	// funcs related to actions
	static const int64_t ADDR_FUNC_ACKNOWLEDGE_EVENT = 0x7FF7C7CF3B40;
	static const int64_t ADDR_FUNC_ACKNOWLEDGE_TAUNT = 0x7FF7C7CF3B60;
	static const int64_t ADDR_FUNC_ATTACK_NOW = 0x7FF7C7CF3BF0;
	static const int64_t ADDR_FUNC_BUILD = 0x7FF7C7CF3C00;
	static const int64_t ADDR_FUNC_BUILD_FORWARD = 0x7FF7C7CF3C10;
	static const int64_t ADDR_FUNC_BUILD_GATE = 0x7FF7C7CF3C20;
	static const int64_t ADDR_FUNC_BUILD_WALL = 0x7FF7C7CF3D20;
	static const int64_t ADDR_FUNC_BUY_COMMODITY = 0x7FF7C7CF3E00;
	static const int64_t ADDR_FUNC_CHAT_LOCAL = 0x7FF7C7CF3F10;
	static const int64_t ADDR_FUNC_CHAT_LOCAL_USING_ID = 0x7FF7C7CF4030;
	static const int64_t ADDR_FUNC_CHAT_LOCAL_USING_RANGE = 0x7FF7C7CF40C0;
	static const int64_t ADDR_FUNC_CHAT_LOCAL_TO_SELF = 0x7FF7C7CF3F90;
	static const int64_t ADDR_FUNC_CHAT_TO_ALL = 0x7FF7C7CF4180;
	static const int64_t ADDR_FUNC_CHAT_TO_ALL_USING_ID = 0x7FF7C7CF4210;
	static const int64_t ADDR_FUNC_CHAT_TO_ALL_USING_RANGE = 0x7FF7C7CF42A0;
	static const int64_t ADDR_FUNC_CHAT_TO_ALLIES = 0x7FF7C7CF42E0;
	static const int64_t ADDR_FUNC_CHAT_TO_ALLIES_USING_ID = 0x7FF7C7CF4370;
	static const int64_t ADDR_FUNC_CHAT_TO_ALLIES_USING_RANGE = 0x7FF7C7CF4410;
	static const int64_t ADDR_FUNC_CHAT_TO_ENEMIES = 0x7FF7C7CF4450;
	static const int64_t ADDR_FUNC_CHAT_TO_ENEMIES_USING_ID = 0x7FF7C7CF44E0;
	static const int64_t ADDR_FUNC_CHAT_TO_ENEMIES_USING_RANGE = 0x7FF7C7CF4580;
	static const int64_t ADDR_FUNC_CHAT_TO_PLAYER = 0x7FF7C7CF45C0;
	static const int64_t ADDR_FUNC_CHAT_TO_PLAYER_USING_ID = 0x7FF7C7CF46F0;
	static const int64_t ADDR_FUNC_CHAT_TO_PLAYER_USING_RANGE = 0x7FF7C7CF4820;
	static const int64_t ADDR_FUNC_CHAT_TRACE = 0x7FF7C7CF4870;
	static const int64_t ADDR_FUNC_CLEAR_TRIBUTE_MEMORY = 0x7FF7C7CF4920;
	static const int64_t ADDR_FUNC_DELETE_BUILDING = 0x7FF7C7CF4A20;
	static const int64_t ADDR_FUNC_DELETE_UNIT = 0x7FF7C7CF4BF0;
	static const int64_t ADDR_FUNC_DISABLE_RULE = 0x7FF7C7CF4EC0;
	static const int64_t ADDR_FUNC_DISABLE_SELF = 0x7FF7C7CF4ED0;
	static const int64_t ADDR_FUNC_DISABLE_TIMER = 0x7FF7C7CF4EE0;
	static const int64_t ADDR_FUNC_DO_NOTHING = 0x7FF7C7CF4F00;
	static const int64_t ADDR_FUNC_ENABLE_RULE = 0x7FF7C7CF4F10;
	static const int64_t ADDR_FUNC_ENABLE_TIMER = 0x7FF7C7CF4F20;
	static const int64_t ADDR_FUNC_ENABLE_WALL_PLACEMENT = 0x7FF7C7CF4F40;
	static const int64_t ADDR_FUNC_GENERATE_RANDOM_NUMBER = 0x7FF7C7CF4F60;
	static const int64_t ADDR_FUNC_LOG = 0x7FF7C7CF4FB0;
	static const int64_t ADDR_FUNC_LOG_TRACE = 0x7FF7C7CF5040;
	static const int64_t ADDR_FUNC_RELEASE_ESCROW = 0x7FF7C7CF50C0;
	static const int64_t ADDR_FUNC_RESEARCH = 0x7FF7C7CF50D0;
	static const int64_t ADDR_FUNC_RESIGN = 0x7FF7C7CF5160;
	static const int64_t ADDR_FUNC_SELL_COMMODITY = 0x7FF7C7CF51D0;
	static const int64_t ADDR_FUNC_SET_DIFFICULTY_PARAMETER = 0x7FF7C7CF5260;
	static const int64_t ADDR_FUNC_SET_DOCTRINE = 0x7FF7C7CF52B0;
	static const int64_t ADDR_FUNC_SET_ESCROW_PERCENTAGE = 0x7FF7C7CF52C0;
	static const int64_t ADDR_FUNC_SET_GOAL = 0x7FF7C7CC35E0;
	static const int64_t ADDR_FUNC_SET_SHARED_GOAL = 0x7FF7C7CC3710;
	static const int64_t ADDR_FUNC_SET_SIGNAL = 0x7FF7C7CF52E0;
	static const int64_t ADDR_FUNC_SET_STANCE = 0x7FF7C7CF5300;
	static const int64_t ADDR_FUNC_SET_STRATEGIC_NUMBER = 0x7FF7C7CC3740;
	static const int64_t ADDR_FUNC_SPY = 0x7FF7C7CF5390;
	static const int64_t ADDR_FUNC_TAUNT = 0x7FF7C7CF53E0;
	static const int64_t ADDR_FUNC_TAUNT_USING_RANGE = 0x7FF7C7CF5440;
	static const int64_t ADDR_FUNC_TRAIN = 0x7FF7C7CF54E0;
	static const int64_t ADDR_FUNC_TRIBUTE_TO_PLAYER = 0x7FF7C7CF55E0;
	static const int64_t ADDR_FUNC_UP_ADD_COST_DATA = 0x7FF7C7CF8FC0;
	static const int64_t ADDR_FUNC_UP_ADD_OBJECT_BY_ID = 0x7FF7C7CF1C50;
	static const int64_t ADDR_FUNC_UP_ADD_OBJECT_COST = 0x7FF7C7CF9090;
	static const int64_t ADDR_FUNC_UP_ADD_POINT = 0x7FF7C7CF91F0;
	static const int64_t ADDR_FUNC_UP_ADD_RESEARCH_COST = 0x7FF7C7CF9260;
	static const int64_t ADDR_FUNC_UP_ASSIGN_BUILDERS = 0x7FF7C7CF71B0;
	static const int64_t ADDR_FUNC_UP_BOUND_POINT = 0x7FF7C7CF9390;
	static const int64_t ADDR_FUNC_UP_BOUND_PRECISE_POINT = 0x7FF7C7CF9420;
	static const int64_t ADDR_FUNC_UP_BUILD = 0x7FF7C7CF7280;
	static const int64_t ADDR_FUNC_UP_BUILD_LINE = 0x7FF7C7CF94F0;
	static const int64_t ADDR_FUNC_UP_BUY_COMMODITY = 0x7FF7C7CF9640;
	static const int64_t ADDR_FUNC_UP_CHANGE_NAME = 0x7FF7C7CF9710;
	static const int64_t ADDR_FUNC_UP_CHAT_DATA_TO_ALL = 0x7FF7C7CF74B0;
	static const int64_t ADDR_FUNC_UP_CHAT_DATA_TO_PLAYER = 0x7FF7C7CF7570;
	static const int64_t ADDR_FUNC_UP_CHAT_DATA_TO_SELF = 0x7FF7C7CF7670;
	static const int64_t ADDR_FUNC_UP_CLEAN_SEARCH = 0x7FF7C7CF9B50;
	static const int64_t ADDR_FUNC_UP_COPY_POINT = 0x7FF7C7CF9EC0;
	static const int64_t ADDR_FUNC_UP_CREATE_GROUP = 0x7FF7C7CF9EF0;
	static const int64_t ADDR_FUNC_UP_CROSS_TILES = 0x7FF7C7CF9F80;
	static const int64_t ADDR_FUNC_UP_DELETE_DISTANT_FARMS = 0x7FF7C7CFA1D0;
	static const int64_t ADDR_FUNC_UP_DELETE_IDLE_UNITS = 0x7FF7C7CFA3D0;
	static const int64_t ADDR_FUNC_UP_DELETE_OBJECTS = 0x7FF7C7CFA690;
	static const int64_t ADDR_FUNC_UP_DISBAND_GROUP_TYPE = 0x7FF7C7CFA940;
	static const int64_t ADDR_FUNC_UP_DROP_RESOURCES = 0x7FF7C7CF7750;
	static const int64_t ADDR_FUNC_UP_FILTER_DISTANCE = 0x7FF7C7CFDD80;
	static const int64_t ADDR_FUNC_UP_FILTER_EXCLUDE = 0x7FF7C7CFDDF0;
	static const int64_t ADDR_FUNC_UP_FILTER_GARRISON = 0x7FF7C7CFDE70;
	static const int64_t ADDR_FUNC_UP_FILTER_INCLUDE = 0x7FF7C7CFDEE0;
	static const int64_t ADDR_FUNC_UP_FILTER_RANGE = 0x7FF7C7CFDF60;
	static const int64_t ADDR_FUNC_UP_FILTER_STATUS = 0x7FF7C7CFE870;
	static const int64_t ADDR_FUNC_UP_FIND_FLARE = 0x7FF7C7CFBD90;
	static const int64_t ADDR_FUNC_UP_FIND_LOCAL = 0x7FF7C7CF1C60;
	static const int64_t ADDR_FUNC_UP_FIND_NEXT_PLAYER = 0x7FF7C7CFA980;
	static const int64_t ADDR_FUNC_UP_FIND_PLAYER = 0x7FF7C7CF7C50;
	static const int64_t ADDR_FUNC_UP_FIND_PLAYER_FLARE = 0x7FF7C7CFC1F0;
	static const int64_t ADDR_FUNC_UP_FIND_REMOTE = 0x7FF7C7CF1C70;
	static const int64_t ADDR_FUNC_UP_FIND_RESOURCE = 0x7FF7C7CF1C80;
	static const int64_t ADDR_FUNC_UP_FIND_STATUS_LOCAL = 0x7FF7C7CF1C90;
	static const int64_t ADDR_FUNC_UP_FIND_STATUS_REMOTE = 0x7FF7C7CF1CA0;
	static const int64_t ADDR_FUNC_UP_FULL_RESET_SEARCH = 0x7FF7C7CFAF70;
	static const int64_t ADDR_FUNC_UP_GARRISON = 0x7FF7C7CFAFF0;
	static const int64_t ADDR_FUNC_UP_GATHER_INSIDE = 0x7FF7C7CFB8D0;
	static const int64_t ADDR_FUNC_UP_GET_ATTACKER_CLASS = 0x7FF7C7CFBB90;
	static const int64_t ADDR_FUNC_UP_GET_COST_DELTA = 0x7FF7C7CFBCA0;
	static const int64_t ADDR_FUNC_UP_GET_EVENT = 0x7FF7C7CFBD40;
	static const int64_t ADDR_FUNC_UP_GET_FACT = 0x7FF7C7CF1CB0;
	static const int64_t ADDR_FUNC_UP_GET_FACT_MAX = 0x7FF7C7CF1CC0;
	static const int64_t ADDR_FUNC_UP_GET_FACT_MIN = 0x7FF7C7CF1CD0;
	static const int64_t ADDR_FUNC_UP_GET_FACT_SUM = 0x7FF7C7CF1CE0;
	static const int64_t ADDR_FUNC_UP_GET_FOCUS_FACT = 0x7FF7C7CF1CF0;
	static const int64_t ADDR_FUNC_UP_GET_GROUP_SIZE = 0x7FF7C7CFBDA0;
	static const int64_t ADDR_FUNC_UP_GET_GUARD_STATE = 0x0;
	static const int64_t ADDR_FUNC_UP_GET_INDIRECT_GOAL = 0x7FF7C7CFBE80;
	static const int64_t ADDR_FUNC_UP_GET_OBJECT_DATA = 0x7FF7C7CF1D00;
	static const int64_t ADDR_FUNC_UP_GET_OBJECT_TARGET_DATA = 0x7FF7C7CF1D10;
	static const int64_t ADDR_FUNC_UP_GET_OBJECT_TYPE_DATA = 0x7FF7C7CF1D20;
	static const int64_t ADDR_FUNC_UP_GET_PATH_DISTANCE = 0x7FF7C7CFBF10;
	static const int64_t ADDR_FUNC_UP_GET_PLAYER_COLOR = 0x7FF7C7CFBF30;
	static const int64_t ADDR_FUNC_UP_GET_PLAYER_FACT = 0x7FF7C7CF1D30;
	static const int64_t ADDR_FUNC_UP_GET_POINT = 0x7FF7C7CFC410;
	static const int64_t ADDR_FUNC_UP_GET_POINT_CONTAINS = 0x7FF7C7CF1D40;
	static const int64_t ADDR_FUNC_UP_GET_POINT_DISTANCE = 0x7FF7C7CFC440;
	static const int64_t ADDR_FUNC_UP_GET_POINT_ELEVATION = 0x7FF7C7CFC660;
	static const int64_t ADDR_FUNC_UP_GET_POINT_TERRAIN = 0x7FF7C7CFC710;
	static const int64_t ADDR_FUNC_UP_GET_POINT_ZONE = 0x7FF7C7CFC7C0;
	static const int64_t ADDR_FUNC_UP_GET_PRECISE_TIME = 0x7FF7C7CFC4B0;
	static const int64_t ADDR_FUNC_UP_GET_PROJECTILE_PLAYER = 0x7FF7C7CFBEB0;
	static const int64_t ADDR_FUNC_UP_GET_RULE_ID = 0x7FF7C7CFC500;
	static const int64_t ADDR_FUNC_UP_GET_SEARCH_STATE = 0x7FF7C7CFC530;
	static const int64_t ADDR_FUNC_UP_GET_SHARED_GOAL = 0x7FF7C7CFC5E0;
	static const int64_t ADDR_FUNC_UP_GET_SIGNAL = 0x7FF7C7CFC610;
	static const int64_t ADDR_FUNC_UP_GET_TARGET_FACT = 0x7FF7C7CF1D50;
	static const int64_t ADDR_FUNC_UP_GET_THREAT_DATA = 0x7FF7C7CF81C0;
	static const int64_t ADDR_FUNC_UP_GET_TIMER = 0x7FF7C7CFC890;
	static const int64_t ADDR_FUNC_UP_GET_UPGRADE_ID = 0x0;
	static const int64_t ADDR_FUNC_UP_GET_VICTORY_DATA = 0x7FF7C7CF8440;
	static const int64_t ADDR_FUNC_UP_GET_VICTORY_LIMIT = 0x7FF7C7CFC910;
	static const int64_t ADDR_FUNC_UP_GUARD_UNIT = 0x7FF7C7CFC970;
	static const int64_t ADDR_FUNC_UP_JUMP_DIRECT = 0x7FF7C7CFCBD0;
	static const int64_t ADDR_FUNC_UP_JUMP_DYNAMIC = 0x7FF7C7CFCBB0;
	static const int64_t ADDR_FUNC_UP_JUMP_RULE = 0x7FF7C7CF88B0;
	static const int64_t ADDR_FUNC_UP_LERP_PERCENT = 0x7FF7C7CFCBF0;
	static const int64_t ADDR_FUNC_UP_LERP_TILES = 0x7FF7C7CFCD30;
	static const int64_t ADDR_FUNC_UP_LOG_DATA = 0x7FF7C7CFCF50;
	static const int64_t ADDR_FUNC_UP_MODIFY_ESCROW = 0x7FF7C7CFD050;
	static const int64_t ADDR_FUNC_UP_MODIFY_FLAG = 0x7FF7C7CFD210;
	static const int64_t ADDR_FUNC_UP_MODIFY_GOAL = 0x7FF7C7CF1D60;
	static const int64_t ADDR_FUNC_UP_MODIFY_GROUP_FLAG = 0x7FF7C7CFD2A0;
	static const int64_t ADDR_FUNC_UP_MODIFY_SN = 0x7FF7C7CF1D70;
	static const int64_t ADDR_FUNC_UP_RELEASE_ESCROW = 0x7FF7C7CFD440;
	static const int64_t ADDR_FUNC_UP_REMOVE_OBJECTS = 0x7FF7C7CFDFE0;
	static const int64_t ADDR_FUNC_UP_REQUEST_HUNTERS = 0x7FF7C7CF8950;
	static const int64_t ADDR_FUNC_UP_RESEARCH = 0x7FF7C7CFD490;
	static const int64_t ADDR_FUNC_UP_RESET_ATTACK_NOW = 0x7FF7C7CFD590;
	static const int64_t ADDR_FUNC_UP_RESET_BUILDING = 0x7FF7C7CFD5A0;
	static const int64_t ADDR_FUNC_UP_RESET_COST_DATA = 0x7FF7C7CFD8B0;
	static const int64_t ADDR_FUNC_UP_RESET_FILTERS = 0x7FF7C7CFDA90;
	static const int64_t ADDR_FUNC_UP_RESET_GROUP = 0x7FF7C7CFD8F0;
	static const int64_t ADDR_FUNC_UP_RESET_PLACEMENT = 0x7FF7C7CFD960;
	static const int64_t ADDR_FUNC_UP_RESET_SCOUTS = 0x7FF7C7CFD9E0;
	static const int64_t ADDR_FUNC_UP_RESET_SEARCH = 0x7FF7C7CFD9F0;
	static const int64_t ADDR_FUNC_UP_RESET_TARGET_PRIORITIES = 0x7FF7C7CF9CC0;
	static const int64_t ADDR_FUNC_UP_RESET_UNIT = 0x7FF7C7CFDAB0;
	static const int64_t ADDR_FUNC_UP_RETASK_GATHERERS = 0x7FF7C7CF8A10;
	static const int64_t ADDR_FUNC_UP_RETREAT_NOW = 0x7FF7C7CF8AD0;
	static const int64_t ADDR_FUNC_UP_RETREAT_TO = 0x7FF7C7CFDD00;
	static const int64_t ADDR_FUNC_UP_SELL_COMMODITY = 0x7FF7C7CFE180;
	static const int64_t ADDR_FUNC_UP_SEND_FLARE = 0x7FF7C7CFE250;
	static const int64_t ADDR_FUNC_UP_SEND_SCOUT = 0x7FF7C7CFE2F0;
	static const int64_t ADDR_FUNC_UP_SET_ATTACK_STANCE = 0x7FF7C7CFEAB0;
	static const int64_t ADDR_FUNC_UP_SET_DEFENSE_PRIORITY = 0x7FF7C7CFE480;
	static const int64_t ADDR_FUNC_UP_SET_EVENT = 0x7FF7C7CFE500;
	static const int64_t ADDR_FUNC_UP_SET_GROUP = 0x7FF7C7CFE740;
	static const int64_t ADDR_FUNC_UP_SET_INDIRECT_GOAL = 0x7FF7C7CFE580;
	static const int64_t ADDR_FUNC_UP_SET_OFFENSE_PRIORITY = 0x7FF7C7CFE5D0;
	static const int64_t ADDR_FUNC_UP_SET_PLACEMENT_DATA = 0x7FF7C7CF8B70;
	static const int64_t ADDR_FUNC_UP_SET_PRECISE_TARGET_POINT = 0x7FF7C7CFE700;
	static const int64_t ADDR_FUNC_UP_SET_SHARED_GOAL = 0x7FF7C7CFE8E0;
	static const int64_t ADDR_FUNC_UP_SET_SIGNAL = 0x7FF7C7CFE920;
	static const int64_t ADDR_FUNC_UP_SET_TARGET_BY_ID = 0x7FF7C7CF1D90;
	static const int64_t ADDR_FUNC_UP_SET_TARGET_OBJECT = 0x7FF7C7CF1D80;
	static const int64_t ADDR_FUNC_UP_SET_TARGET_POINT = 0x7FF7C7CFE9A0;
	static const int64_t ADDR_FUNC_UP_SET_TIMER = 0x7FF7C7CFEA20;
	static const int64_t ADDR_FUNC_UP_SETUP_COST_DATA = 0x7FF7C7CFEB00;
	static const int64_t ADDR_FUNC_UP_STORE_MAP_NAME = 0x7FF7C7CFEB50;
	static const int64_t ADDR_FUNC_UP_STORE_OBJECT_NAME = 0x7FF7C7CFECF0;
	static const int64_t ADDR_FUNC_UP_STORE_PLAYER_CHAT = 0x7FF7C7CFEE40;
	static const int64_t ADDR_FUNC_UP_STORE_PLAYER_NAME = 0x7FF7C7CFEF50;
	static const int64_t ADDR_FUNC_UP_STORE_TECH_NAME = 0x7FF7C7CFF070;
	static const int64_t ADDR_FUNC_UP_STORE_TEXT = 0x7FF7C7CFF180;
	static const int64_t ADDR_FUNC_UP_STORE_TYPE_NAME = 0x7FF7C7CFF1E0;
	static const int64_t ADDR_FUNC_UP_TARGET_OBJECTS = 0x7FF7C7D00130;
	static const int64_t ADDR_FUNC_UP_TARGET_POINT = 0x7FF7C7CFF2D0;
	static const int64_t ADDR_FUNC_UP_TRAIN = 0x7FF7C7D01550;
	static const int64_t ADDR_FUNC_UP_TRIBUTE_TO_PLAYER = 0x7FF7C7D016F0;
	static const int64_t ADDR_FUNC_UP_UNGARRISON = 0x7FF7C7D01720;
	static const int64_t ADDR_FUNC_UP_UPDATE_TARGETS = 0x7FF7C7CFAF60;

	// funcs related to facts
	static const int64_t ADDR_FUNC_GET_FACT_BY_ID = 0x7FF7C7CC12E0;
	static const int64_t ADDR_FUNC_GET_GOAL = 0x7FF7C7D2E150;
#endif
}
