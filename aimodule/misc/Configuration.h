#pragma once
#include <string>
#include <stdint.h>

#define GAME_DE
#define DEBUG_MODE

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
	static const int64_t ADDR_FUNC_EVALUATE_REL_OP = 0x7FF7C7CBE740;
	static const int64_t ADDR_FUNC_FIND_SYMBOL = 0x7FF7C83661E0;
#ifdef DEBUG_MODE
	static const int64_t ADDR_FUNC_DEF_ACTION = 0x7FF7C7CB1260;
	static const int64_t ADDR_FUNC_DEF_FACT = 0x7FF7C7CB1730;
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
	static const int64_t ADDR_FUNC_CC_ADD_RESOURCE = 0x7FF7C7CF3E60;
	static const int64_t ADDR_FUNC_CHAT_DEBUG = 0x7FF7C7CF3E80;
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
	static const int64_t ADDR_FUNC_FE_BREAK_POINT = 0x7FF7C7CF2400;
	static const int64_t ADDR_FUNC_GENERATE_RANDOM_NUMBER = 0x7FF7C7CF4F60;
	static const int64_t ADDR_FUNC_LOG = 0x7FF7C7CF4FB0;
	static const int64_t ADDR_FUNC_LOG_TRACE = 0x7FF7C7CF5040;
	static const int64_t ADDR_FUNC_RELEASE_ESCROW = 0x7FF7C7CF50C0;
	static const int64_t ADDR_FUNC_RESEARCH = 0x7FF7C7CF50D0;
	static const int64_t ADDR_FUNC_RESIGN = 0x7FF7C7CF5160;
	static const int64_t ADDR_FUNC_SELL_COMMODITY = 0x7FF7C7CF51D0;
	static const int64_t ADDR_FUNC_SET_AUTHOR_NAME = 0x7FF7C7CF5240;
	static const int64_t ADDR_FUNC_SET_AUTHOR_EMAIL = 0x7FF7C7CF5230;
	static const int64_t ADDR_FUNC_SET_AUTHOR_VERSION = 0x7FF7C7CF5250;
	static const int64_t ADDR_FUNC_SET_DIFFICULTY_PARAMETER = 0x7FF7C7CF5260;
	static const int64_t ADDR_FUNC_SET_DOCTRINE = 0x7FF7C7CF52B0;
	static const int64_t ADDR_FUNC_SET_ESCROW_PERCENTAGE = 0x7FF7C7CF52C0;
	static const int64_t ADDR_FUNC_SET_GOAL = 0x7FF7C7CC35E0;
	static const int64_t ADDR_FUNC_SET_SHARED_GOAL = 0x7FF7C7CC3710;
	static const int64_t ADDR_FUNC_SET_SIGNAL = 0x7FF7C7CF52E0;
	static const int64_t ADDR_FUNC_SET_STANCE = 0x7FF7C7CF5300;
	static const int64_t ADDR_FUNC_SET_STRATEGIC_NUMBER = 0x7FF7C7CC3740;
	static const int64_t ADDR_FUNC_SKYBOX_CLEAR_SIGNAL = 0x7FF7C7CF3A80;
	static const int64_t ADDR_FUNC_SKYBOX_SET_NAME_MODE = 0x7FF7C7CF3B30;
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
	static const int64_t ADDR_FUNC_UP_CC_ADD_RESOURCE = 0x7FF7C7CF9A40;
	static const int64_t ADDR_FUNC_UP_CC_SEND_CHEAT = 0x7FF7C7CF9AD0;
	static const int64_t ADDR_FUNC_UP_CHANGE_NAME = 0x7FF7C7CF9710;
	static const int64_t ADDR_FUNC_UP_CHAT_DATA_TO_ALL = 0x7FF7C7CF74B0;
	static const int64_t ADDR_FUNC_UP_CHAT_DATA_TO_ALL_USING_ID = 0x7FF7C7CF9760;
	static const int64_t ADDR_FUNC_UP_CHAT_DATA_TO_PLAYER_USING_ID = 0x7FF7C7CF98A0;
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
	static const int64_t ADDR_FUNC_UP_GET_TREATY_DATA = 0x7FF7C7CF8370;
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
	static const int64_t ADDR_FUNC_UP_TESTHARNESS_REPORT = 0x7FF7C7CF8C50;
	static const int64_t ADDR_FUNC_UP_TESTHARNESS_TEST = 0x7FF7C7CF8DC0;
	static const int64_t ADDR_FUNC_UP_TRAIN = 0x7FF7C7D01550;
	static const int64_t ADDR_FUNC_UP_TRIBUTE_TO_PLAYER = 0x7FF7C7D016F0;
	static const int64_t ADDR_FUNC_UP_UNGARRISON = 0x7FF7C7D01720;
	static const int64_t ADDR_FUNC_UP_UPDATE_TARGETS = 0x7FF7C7CFAF60;

	// funcs related to facts
	static const int64_t ADDR_FUNC_ATTACK_SOLDIER_COUNT = 0x7FF7C7D0A570;
	static const int64_t ADDR_FUNC_ATTACK_WARBOAT_COUNT = 0x7FF7C7D0A5B0;
	static const int64_t ADDR_FUNC_BUILDING_AVAILABLE = 0x7FF7C7D0A5F0;
	static const int64_t ADDR_FUNC_BUILDING_COUNT = 0x7FF7C7D0A640;
	static const int64_t ADDR_FUNC_BUILDING_COUNT_TOTAL = 0x7FF7C7D0A670;
	static const int64_t ADDR_FUNC_BUILDING_TYPE_COUNT = 0x7FF7C7D0A6C0;
	static const int64_t ADDR_FUNC_BUILDING_TYPE_COUNT_TOTAL = 0x7FF7C7D0A710;
	static const int64_t ADDR_FUNC_CAN_AFFORD_BUILDING = 0x7FF7C7D0A8F0;
	static const int64_t ADDR_FUNC_CAN_AFFORD_COMPLETE_WALL = 0x7FF7C7D0A960;
	static const int64_t ADDR_FUNC_CAN_AFFORD_RESEARCH = 0x7FF7C7D0AA30;
	static const int64_t ADDR_FUNC_CAN_AFFORD_UNIT = 0x7FF7C7D0AA70;
	static const int64_t ADDR_FUNC_CAN_BUILD = 0x7FF7C7D0AAE0;
	static const int64_t ADDR_FUNC_CAN_BUILD_GATE = 0x7FF7C7D0ABE0;
	static const int64_t ADDR_FUNC_CAN_BUILD_GATE_WITH_ESCROW = 0x7FF7C7D0ABF0;
	static const int64_t ADDR_FUNC_CAN_BUILD_WALL = 0x7FF7C7D0AC00;
	static const int64_t ADDR_FUNC_CAN_BUILD_WALL_WITH_ESCROW = 0x7FF7C7D0AC10;
	static const int64_t ADDR_FUNC_CAN_BUILD_WITH_ESCROW = 0x7FF7C7D0AC20;
	static const int64_t ADDR_FUNC_CAN_BUY_COMMODITY = 0x7FF7C7D0AD20;
	static const int64_t ADDR_FUNC_CAN_RESEARCH = 0x7FF7C7D0ADC0;
	static const int64_t ADDR_FUNC_CAN_RESEARCH_WITH_ESCROW = 0x7FF7C7D0AE40;
	static const int64_t ADDR_FUNC_CAN_SELL_COMMODITY = 0x7FF7C7D0AEC0;
	static const int64_t ADDR_FUNC_CAN_SPY = 0x7FF7C7D0AF20;
	static const int64_t ADDR_FUNC_CAN_SPY_WITH_ESCROW = 0x7FF7C7D0AF70;
	static const int64_t ADDR_FUNC_CAN_TRAIN = 0x7FF7C7D0AFC0;
	static const int64_t ADDR_FUNC_CAN_TRAIN_WITH_ESCROW = 0x7FF7C7D0B060;
	static const int64_t ADDR_FUNC_CC_PLAYERS_BUILDING_COUNT = 0x7FF7C7D0A750;
	static const int64_t ADDR_FUNC_CC_PLAYERS_BUILDING_TYPE_COUNT = 0x7FF7C7D0A7D0;
	static const int64_t ADDR_FUNC_CC_PLAYERS_UNIT_COUNT = 0x7FF7C7D0A810;
	static const int64_t ADDR_FUNC_CC_PLAYERS_UNIT_TYPE_COUNT = 0x7FF7C7D0A890;
	static const int64_t ADDR_FUNC_CHEATS_ENABLED = 0x7FF7C7D0B0F0;
	static const int64_t ADDR_FUNC_CIV_SELECTED = 0x7FF7C7D0B100;
	static const int64_t ADDR_FUNC_CIVILIAN_POPULATION = 0x7FF7C7D0B120;
	static const int64_t ADDR_FUNC_COMMODITY_BUYING_PRICE = 0x7FF7C7D0B170;
	static const int64_t ADDR_FUNC_COMMODITY_SELLING_PRICE = 0x7FF7C7D0B1B0;
	static const int64_t ADDR_FUNC_CURRENT_AGE = 0x7FF7C7D0B1F0;
	static const int64_t ADDR_FUNC_CURRENT_AGE_TIME = 0x7FF7C7D0B2B0;
	static const int64_t ADDR_FUNC_CURRENT_SCORE = 0x7FF7C7D0B2F0;
	static const int64_t ADDR_FUNC_DEATH_MATCH_GAME = 0x7FF7C7D0B330;
	static const int64_t ADDR_FUNC_DEFEND_SOLDIER_COUNT = 0x7FF7C7D0B340;
	static const int64_t ADDR_FUNC_DEFEND_WARBOAT_COUNT = 0x7FF7C7D0B3A0;
	static const int64_t ADDR_FUNC_DIFFICULTY = 0x7FF7C7D0B400;
	static const int64_t ADDR_FUNC_DOCTRINE = 0x7FF7C7D0B420;
	static const int64_t ADDR_FUNC_DROPSITE_MIN_DISTANCE = 0x7FF7C7D0B440;
	static const int64_t ADDR_FUNC_ENDING_AGE = 0x7FF7C7D0B560;
	static const int64_t ADDR_FUNC_ENEMY_BUILDINGS_IN_TOWN = 0x7FF7C7D0B610;
	static const int64_t ADDR_FUNC_ENEMY_CAPTURED_RELICS = 0x7FF7C7D0B630;
	static const int64_t ADDR_FUNC_ESCROW_AMOUNT = 0x7FF7C7D0B6D0;
	static const int64_t ADDR_FUNC_EVENT_DETECTED = 0x7FF7C7D0B710;
	static const int64_t ADDR_FUNC_FALSE = 0x7FF7C7D0B750;
	static const int64_t ADDR_FUNC_FE_CAN_BUILD_AT_POINT = 0x7FF7C7D19F40;
	static const int64_t ADDR_FUNC_FOOD_AMOUNT = 0x7FF7C7D0B760;
	static const int64_t ADDR_FUNC_GAME_TIME = 0x7FF7C7D0B7B0;
	static const int64_t ADDR_FUNC_GAME_TYPE = 0x7FF7C7D0B800;
	static const int64_t ADDR_FUNC_GATE_COUNT = 0x7FF7C7D0B880;
	static const int64_t ADDR_FUNC_GOAL = 0x7FF7C7D0B8D0;
	static const int64_t ADDR_FUNC_GOLD_AMOUNT = 0x7FF7C7D0B900;
	static const int64_t ADDR_FUNC_HOLD_KOH_RUIN = 0x7FF7C7D0B950;
	static const int64_t ADDR_FUNC_HOLD_RELICS = 0x7FF7C7D0B960;
	static const int64_t ADDR_FUNC_HOUSING_HEADROOM = 0x7FF7C7D0B970;
	static const int64_t ADDR_FUNC_IDLE_FARM_COUNT = 0x7FF7C7D0B9C0;
	static const int64_t ADDR_FUNC_MAP_SIZE = 0x7FF7C7D0BA10;
	static const int64_t ADDR_FUNC_MAP_TYPE = 0x7FF7C7D0BA20;
	static const int64_t ADDR_FUNC_MILITARY_POPULATION = 0x7FF7C7D0BA30;
	static const int64_t ADDR_FUNC_PLAYER_COMPUTER = 0x7FF7C7D0BA80;
	static const int64_t ADDR_FUNC_PLAYER_HUMAN = 0x7FF7C7D0BAD0;
	static const int64_t ADDR_FUNC_PLAYER_IN_GAME = 0x7FF7C7D0BB20;
	static const int64_t ADDR_FUNC_PLAYER_NUMBER = 0x7FF7C7D0BB70;
	static const int64_t ADDR_FUNC_PLAYER_RESIGNED = 0x7FF7C7D0BB90;
	static const int64_t ADDR_FUNC_PLAYER_VALID = 0x7FF7C7D0BBE0;
	static const int64_t ADDR_FUNC_PLAYERS_ACHIEVEMENTS = 0x7FF7C7D0BC20;
	static const int64_t ADDR_FUNC_PLAYERS_BUILDING_COUNT = 0x7FF7C7D0BC30;
	static const int64_t ADDR_FUNC_PLAYERS_BUILDING_TYPE_COUNT = 0x7FF7C7D0BCD0;
	static const int64_t ADDR_FUNC_PLAYERS_CIV = 0x7FF7C7D0BD10;
	static const int64_t ADDR_FUNC_PLAYERS_CIVILIAN_POPULATION = 0x7FF7C7D0BD70;
	static const int64_t ADDR_FUNC_PLAYERS_CURRENT_AGE = 0x7FF7C7D0BE60;
	static const int64_t ADDR_FUNC_PLAYERS_CURRENT_AGE_TIME = 0x7FF7C7D0BFD0;
	static const int64_t ADDR_FUNC_PLAYERS_MILITARY_POPULATION = 0x7FF7C7D0C050;
	static const int64_t ADDR_FUNC_PLAYERS_POPULATION = 0x7FF7C7D0C140;
	static const int64_t ADDR_FUNC_PLAYERS_SCORE = 0x7FF7C7D0C230;
	static const int64_t ADDR_FUNC_PLAYERS_STANCE = 0x7FF7C7D0C2B0;
	static const int64_t ADDR_FUNC_PLAYERS_TRIBUTE = 0x7FF7C7D0C330;
	static const int64_t ADDR_FUNC_PLAYERS_TRIBUTE_MEMORY = 0x7FF7C7D0C440;
	static const int64_t ADDR_FUNC_PLAYERS_UNIT_COUNT = 0x7FF7C7D0C550;
	static const int64_t ADDR_FUNC_PLAYERS_UNIT_TYPE_COUNT = 0x7FF7C7D0C5F0;
	static const int64_t ADDR_FUNC_POPULATION = 0x7FF7C7D0C680;
	static const int64_t ADDR_FUNC_POPULATION_CAP = 0x7FF7C7D0C6D0;
	static const int64_t ADDR_FUNC_POPULATION_HEADROOM = 0x7FF7C7D0C720;
	static const int64_t ADDR_FUNC_RANDOM_NUMBER = 0x7FF7C7D0C770;
	static const int64_t ADDR_FUNC_REGICIDE_GAME = 0x7FF7C7D0C7C0;
	static const int64_t ADDR_FUNC_RESEARCH_AVAILABLE = 0x7FF7C7D0C7D0;
	static const int64_t ADDR_FUNC_RESEARCH_COMPLETED = 0x7FF7C7D0C840;
	static const int64_t ADDR_FUNC_RESOURCE_FOUND = 0x7FF7C7D0C8B0;
	static const int64_t ADDR_FUNC_SHARED_GOAL = 0x7FF7C7D0C930;
	static const int64_t ADDR_FUNC_SHEEP_AND_FORAGE_TOO_FAR = 0x7FF7C7D0C950;
	static const int64_t ADDR_FUNC_SOLDIER_COUNT = 0x7FF7C7D0C960;
	static const int64_t ADDR_FUNC_STANCE_TOWARD = 0x7FF7C7D0C9A0;
	static const int64_t ADDR_FUNC_STARTING_AGE = 0x7FF7C7D0CA40;
	static const int64_t ADDR_FUNC_STARTING_RESOURCES = 0x7FF7C7D0CAF0;
	static const int64_t ADDR_FUNC_STONE_AMOUNT = 0x7FF7C7D0CB10;
	static const int64_t ADDR_FUNC_STRATEGIC_NUMBER = 0x7FF7C7D0CB60;
	static const int64_t ADDR_FUNC_TAUNT_DETECTED = 0x7FF7C7D0CBA0;
	static const int64_t ADDR_FUNC_TIMER_TRIGGERED = 0x7FF7C7D0CC60;
	static const int64_t ADDR_FUNC_TOWN_UNDER_ATTACK = 0x7FF7C7D0CCB0;
	static const int64_t ADDR_FUNC_TRACE_FACT = 0x7FF7C7D0CCC0;
	static const int64_t ADDR_FUNC_TRUE = 0x7FF7C7D0CCD0;
	static const int64_t ADDR_FUNC_UNIT_AVAILABLE = 0x7FF7C7D0CCE0;
	static const int64_t ADDR_FUNC_UNIT_COUNT = 0x7FF7C7D0CD30;
	static const int64_t ADDR_FUNC_UNIT_COUNT_TOTAL = 0x7FF7C7D0CD60;
	static const int64_t ADDR_FUNC_UNIT_TYPE_COUNT = 0x7FF7C7D0CD90;
	static const int64_t ADDR_FUNC_UNIT_TYPE_COUNT_TOTAL = 0x7FF7C7D0CDE0;
	static const int64_t ADDR_FUNC_UP_ALLIED_GOAL = 0x7FF7C7D196A0;
	static const int64_t ADDR_FUNC_UP_ALLIED_RESOURCE_AMOUNT = 0x7FF7C7D197A0;
	static const int64_t ADDR_FUNC_UP_ALLIED_RESOURCE_PERCENT = 0x7FF7C7D19910;
	static const int64_t ADDR_FUNC_UP_ALLIED_SN = 0x7FF7C7D19A80;
	static const int64_t ADDR_FUNC_UP_ATTACKER_CLASS = 0x7FF7C7D19D60;
	static const int64_t ADDR_FUNC_UP_BUILDING_TYPE_IN_TOWN = 0x7FF7C7D1A720;
	static const int64_t ADDR_FUNC_UP_CAN_BUILD = 0x7FF7C7D19E50;
	static const int64_t ADDR_FUNC_UP_CAN_BUILD_LINE = 0x7FF7C7D19F40;
	static const int64_t ADDR_FUNC_UP_CAN_RESEARCH = 0x7FF7C7D1A1B0;
	static const int64_t ADDR_FUNC_UP_CAN_SEARCH = 0x7FF7C7D1A260;
	static const int64_t ADDR_FUNC_UP_CAN_TRAIN = 0x7FF7C7D1A2C0;
	static const int64_t ADDR_FUNC_UP_COMPARE_GOAL = 0x7FF7C7D19BA0;
	static const int64_t ADDR_FUNC_UP_DEFENDER_COUNT = 0x7FF7C7D1A630;
	static const int64_t ADDR_FUNC_UP_ENEMY_BUILDINGS_IN_TOWN = 0x7FF7C7D1A6F0;
	static const int64_t ADDR_FUNC_UP_ENEMY_UNITS_IN_TOWN = 0x7FF7C7D1A670;
	static const int64_t ADDR_FUNC_UP_ENEMY_VILLAGERS_IN_TOWN = 0x7FF7C7D1A7B0;
	static const int64_t ADDR_FUNC_UP_GAIA_TYPE_COUNT = 0x7FF7C7D1A8F0;
	static const int64_t ADDR_FUNC_UP_GAIA_TYPE_COUNT_TOTAL = 0x7FF7C7D1A930;
	static const int64_t ADDR_FUNC_UP_GROUP_SIZE = 0x7FF7C7D1A970;
	static const int64_t ADDR_FUNC_UP_IDLE_UNIT_COUNT = 0x7FF7C7D1AA60;
	static const int64_t ADDR_FUNC_UP_OBJECT_DATA = 0x7FF7C7D1A370;
	static const int64_t ADDR_FUNC_UP_OBJECT_TARGET_DATA = 0x7FF7C7D1A450;
	static const int64_t ADDR_FUNC_UP_OBJECT_TYPE_COUNT = 0x7FF7C7D1AD30;
	static const int64_t ADDR_FUNC_UP_OBJECT_TYPE_COUNT_TOTAL = 0x7FF7C7D1AE70;
	static const int64_t ADDR_FUNC_UP_PATH_DISTANCE = 0x7FF7C7D1B1A0;
	static const int64_t ADDR_FUNC_UP_PENDING_OBJECTS = 0x7FF7C7D1B1E0;
	static const int64_t ADDR_FUNC_UP_PENDING_PLACEMENT = 0x7FF7C7D1B3E0;
	static const int64_t ADDR_FUNC_UP_PLAYER_DISTANCE = 0x7FF7C7D1B430;
	static const int64_t ADDR_FUNC_UP_PLAYERS_IN_GAME = 0x7FF7C7D1B4F0;
	static const int64_t ADDR_FUNC_UP_POINT_CONTAINS = 0x7FF7C7D1BCD0;
	static const int64_t ADDR_FUNC_UP_POINT_DISTANCE = 0x7FF7C7D1B6F0;
	static const int64_t ADDR_FUNC_UP_POINT_ELEVATION = 0x7FF7C7D1B990;
	static const int64_t ADDR_FUNC_UP_POINT_EXPLORED = 0x7FF7C7D1BA50;
	static const int64_t ADDR_FUNC_UP_POINT_TERRAIN = 0x7FF7C7D1BB00;
	static const int64_t ADDR_FUNC_UP_POINT_ZONE = 0x7FF7C7D1BBC0;
	static const int64_t ADDR_FUNC_UP_PROJECTILE_DETECTED = 0x7FF7C7D1AC10;
	static const int64_t ADDR_FUNC_UP_PROJECTILE_TARGET = 0x7FF7C7D1ACB0;
	static const int64_t ADDR_FUNC_UP_REMAINING_BOAR_AMOUNT = 0x7FF7C7D19BE0;
	static const int64_t ADDR_FUNC_UP_RESEARCH_STATUS = 0x7FF7C7D19C40;
	static const int64_t ADDR_FUNC_UP_RESOURCE_AMOUNT = 0x7FF7C7D1B7A0;
	static const int64_t ADDR_FUNC_UP_RESOURCE_PERCENT = 0x7FF7C7D1B890;
	static const int64_t ADDR_FUNC_UP_TIMER_STATUS = 0x7FF7C7D19CD0;
	static const int64_t ADDR_FUNC_UP_TRAIN_SITE_READY = 0x7FF7C7D1BCA0;
	static const int64_t ADDR_FUNC_UP_UNIT_TYPE_IN_TOWN = 0x7FF7C7D1A6A0;
	static const int64_t ADDR_FUNC_UP_VILLAGER_TYPE_IN_TOWN = 0x7FF7C7D1A7E0;
	static const int64_t ADDR_FUNC_VICTORY_CONDITION = 0x7FF7C7D0CE20;
	static const int64_t ADDR_FUNC_WALL_COMPLETED_PERCENTAGE = 0x7FF7C7D0CE40;
	static const int64_t ADDR_FUNC_WALL_INVISIBLE_PERCENTAGE = 0x7FF7C7D0CE90;
	static const int64_t ADDR_FUNC_WARBOAT_COUNT = 0x7FF7C7D0CEE0;
	static const int64_t ADDR_FUNC_WOOD_AMOUNT = 0x7FF7C7D0CF20;
#endif
}
