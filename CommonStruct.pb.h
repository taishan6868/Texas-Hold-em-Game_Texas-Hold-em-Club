// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStruct.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStruct_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStruct_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStruct_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStruct_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStruct_2eproto;
namespace XGameProto {
class CommonReqHead;
class CommonReqHeadDefaultTypeInternal;
extern CommonReqHeadDefaultTypeInternal _CommonReqHead_default_instance_;
class CommonRespHead;
class CommonRespHeadDefaultTypeInternal;
extern CommonRespHeadDefaultTypeInternal _CommonRespHead_default_instance_;
}  // namespace XGameProto
PROTOBUF_NAMESPACE_OPEN
template<> ::XGameProto::CommonReqHead* Arena::CreateMaybeMessage<::XGameProto::CommonReqHead>(Arena*);
template<> ::XGameProto::CommonRespHead* Arena::CreateMaybeMessage<::XGameProto::CommonRespHead>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace XGameProto {

enum ActionName : int {
  ACTION_NAME_DEFAULT = 0,
  CONF_LIST_GAME_ROOM_CLIENT = 4,
  CONF_LSIT_MATCH_ROOM = 5,
  CONF_LSIT_MATCH_BLIND = 6,
  CONF_LSIT_MATCH_ENTRYFEE = 7,
  CONF_LSIT_MATCH_REWARD = 8,
  CONF_LIST_PROPS = 9,
  CONF_LIST_SIGNIN = 10,
  CONF_LIST_BASE_SERVICE_CONFIG = 11,
  CONF_LIST_BASE_SERVICE_CONFIG_BY_TYPE = 12,
  CONF_LIST_CLUB_LEVEL = 15,
  CONF_LIST_HALL_PROPS_INFO = 16,
  CONF_LIST_ROOM_FILTER = 17,
  DYN_GET_TABLE_LIST = 52,
  MATCH_SIGN_UP = 100,
  MATCH_QUIT = 101,
  MATCH_REPURCHASE = 102,
  MATCH_ADDITIONAL = 103,
  MATCH_JACKPOT = 104,
  MATCH_PLAYER_COUNT = 105,
  MATCH_PLAYER_INFO = 106,
  MATCH_GAME_INFO = 107,
  MATCH_USER_SIGN_UP_INFO = 108,
  MATCH_USER_SIGN_UP_FLAG = 109,
  MATCH_LIST_MATCH_REWARD = 110,
  E_SNG_INFO_LIST_REQ = 111,
  E_SNG_INFO_LIST_RESP = 112,
  E_SNG_CONFIG_REQ = 113,
  E_SNG_CONFIG_RESP = 114,
  E_SNG_PROCESS_RANKING_LIST_REQ = 115,
  E_SNG_PROCESS_RANKING_LIST_RESP = 116,
  E_SNG_PROCESS_REFRESH_RANKING_LIST_REQ = 117,
  E_SNG_PROCESS_REFRESH_RANKING_LIST_RESP = 118,
  E_AI_PROCESS_ROOM_LIST_REQ = 119,
  E_AI_PROCESS_ROOM_LIST_RESP = 120,
  LOGIN_LOGOUT = 153,
  LOGIN_DEVICE = 154,
  USER_LOGIN = 155,
  USER_REGISTER = 156,
  LOGIN_PHONE_ACCOUNT = 157,
  LOGIN_GOOGLE = 161,
  LOGIN_FACEBOOK = 162,
  LOGIN_QUICK = 163,
  USER_ROUNTER = 164,
  LOGIN_APPLE = 165,
  USER_GET_USER_DETAIL = 200,
  USER_GET_USER_BASIC = 201,
  USER_GET_USERACCOUNT = 202,
  USER_UPDATE_USER_REAL_NAME = 203,
  USER_TRANSFER_ACCOUNT = 206,
  USER_LIST_USER_BASIC = 207,
  USER_UPDATE_USER_SIGNATURE = 208,
  USER_SEND_PHONE_CODE = 209,
  USER_BIND_PHONE_ACCOUNT = 212,
  USER_UPDATE_USER_INFO = 213,
  USER_FRIEND_BASIC = 215,
  USER_GET_USER_REWARD = 217,
  USER_MODIFY_USER_SETTING = 218,
  USER_GET_SEASON_INFO = 219,
  USER_LIST_USER_ACCOUNT = 220,
  USER_MODIFY_EXCHANGE_PWD = 221,
  USER_BIND_THIRDPARTY_ACCOUNT = 222,
  USER_ID_BY_SHOW = 223,
  USER_STATE_GET_GAME_STATE = 400,
  USER_STATE_BATCH_ONLINE_STATE = 401,
  USER_STATE_COUNT_STATISTICS = 402,
  USER_STATE_BATCH_GAME_STATE = 403,
  USER_STATE_ZERO_ONLINE_UPDATE = 404,
  USER_ACTION_REPORT_STATISTICS = 450,
  CLUB_INFO_CREATE_CLUB = 500,
  CLUB_INFO_DISSOLVE_CLUB = 501,
  CLUB_INFO_UPDATE_CLUB = 502,
  CLUB_INFO_LIST_CLUB = 503,
  CLUB_INFO_JOIN_CLUB = 504,
  CLUB_INFO_LIST_USER_APPLY = 505,
  CLUB_INFO_LIST_ALL_USER = 506,
  CLUB_AUDIT_APPLY = 507,
  CLUB_INFO_EXIT_CLUB = 508,
  CLUB_INFO_KICKOUT_USER = 509,
  CLUB_INFO_GET_INFO = 510,
  FRIENDS_ADD = 800,
  FRIENDS_DELETE = 801,
  FRIENDS_QUERY = 802,
  FRIENDS_QUERYAPPLICANT = 803,
  FRIENDS_AGREETOADD = 804,
  FRIENDS_AGREETOADD_NOTICE = 805,
  FRIENDS_ONLINE_NOTFRIEND_QUERY = 806,
  FRIENDS_QUERY_GIVE_INFO = 807,
  FRIENDS_CHAT_QUERY = 808,
  FRIENDS_CHAT_DELETE = 809,
  CHAT_PRIVATE = 850,
  QUERY_CHAT_RECORDS = 851,
  CHAT_UPDATE_RECORDS = 852,
  QUERY_USERLIST_CHAT_RECORDS = 853,
  QUERY_RANK_BOARD = 900,
  QUERY_FRIENDS_RANK_BOARD = 901,
  QUERY_FRIENDS_AIRANK_BOARD = 902,
  MAIL_RECEIVE = 1000,
  MAIL_FETCH_AWARD = 1001,
  MAIL_DELETE = 1002,
  MAIL_PUSH_ONLINE = 1003,
  MAIL_READ = 1004,
  SYS_MSG_RECEIVE = 1010,
  SYS_MSG_PUSH_ONLIEN = 1011,
  MALL_GET_MENU = 1050,
  MALL_BUY_GOODS = 1051,
  SIGNIN_QUERY = 1060,
  SIGNIN_HELLO = 1061,
  SIGNIN_RECEIVE_AWARD = 1062,
  SIGNIN_REWARDS_QUERY = 1063,
  SIGNIN_REWARDS_GET = 1064,
  LOTTERY_QUERY = 1070,
  LOTTERY_GO = 1071,
  GOLD_PIG_QUERY = 1100,
  GOLD_PIG_PURCHASE = 1101,
  GOLD_PIG_KNOCK = 1102,
  TASK_LIST_QUERY = 1200,
  TASK_AWARD_AQUIRE = 1201,
  TASK_SEASON_REWARDS_QUERY = 1202,
  TASK_SEASON_REWARDS_GET = 1203,
  ACTIVITY_LIST_QUERY = 1250,
  BANKRUPT_REWARDS_QUERY = 1251,
  BANKRUPT_REWARDS_GET = 1252,
  RECHARGE_REWARDS_QUERY = 1253,
  RECHARGE_REWARDS_GET = 1254,
  GAME_RECORD_QS_USER_ACT_INFO_QUERY = 1301,
  GAME_RECORD_KO_USER_ACT_INFO_QUERY = 1321,
  GAME_RECORD_PR_GAME_INFO_QUERY = 1322,
  GAME_RECORD_PR_GAME_INFO_DELETE = 1323,
  GAME_RECORD_AI_USER_ACT_INFO_QUERY = 1331,
  GAME_RECORD_AI_USER_BASE_INFO_QUERY = 1332,
  GAME_RECORD_AI_BASE_INFO_QUERY = 1333,
  GAME_RECORD_AI_USER_CARD_INFO_QUERY = 1334,
  GAME_RECORD_AI_USER_INFO_DELETE = 1335,
  GAME_RECORD_AI_USER_ADVANCE_INFO_QUERY = 1336,
  GAME_RECORD_AI_USER_UNLOCK_ADVANCE_INFO = 1337,
  ORDER_YIELD = 1400,
  ORDER_VERRITY = 1401,
  ORDER_CONSUME = 1402,
  REDDOT_LIST_DATA = 1500,
  PUSH_MATCH_BEGIN = 1600,
  PUSH_MULTIPLE_LOGIN = 1601,
  PUSH_COIN_CHANGE = 1602,
  PUSH_CHAT_UPDATE = 1603,
  PUSH_TICKET_STATUS = 1604,
  PUSH_INVITE_PLAYER = 1605,
  PUSH_ADD_FRIEND = 1606,
  PUSH_GAME_UPDATE = 1607,
  PUSH_TASK_FINISH = 1608,
  PUSH_GIVE_PROPS = 1609,
  PUSH_RECHARGE_REWARDS = 1610,
  PUSH_NEW_MAIL_NOTIFY = 1611,
  PUSH_SERVER_UPDATE_NOTIFY = 1612,
  PUSH_SERVER_CHANGE_NOTIFY = 1613,
  PUSH_AI_REPORT_DATA = 1614,
  PUSH_PROPS_CHANGE_NOTIFY = 1615,
  PUSH_REWARD_NOTIFY = 1616,
  PUSH_MSG_TYPE_GET_BOX_NOTIFY = 1617,
  HALL_LIST_CARDS_INFO = 1700,
  HALL_ADD_CARDS = 1701,
  HALL_EXCHANGE_CARDS = 1702,
  HALL_EXCHANGE_CARDS_INFO = 1703,
  HALL_LIST_TICKET_DETAIL_INFO = 1704,
  HALL_TICKET_GIFT = 1705,
  HALL_OFFLINE_TICKET_INFO = 1706,
  HALL_OFFLINE_SIGNUP = 1707,
  HALL_TICKET_GIFT_COLLECT = 1708,
  HALL_TICKET_GIFT_EXT = 1709,
  HALL_TICKET_GIFT_COLLECT_EXT = 1710,
  HALL_EXCHANGE_CODE = 1711,
  HALL_PROPS_INFO_QUERY = 1800,
  HALL_PROPS_GIVE = 1801,
  HALL_PROPS_GET = 1802,
  HALL_PROPS_GIVE_INFO = 1803,
  HALL_ROOM_LIST = 1804,
  HALL_GET_INIT_WEALTH = 1805,
  HALL_INVITED_CODE_QUERY = 1806,
  HALL_INVITED_AWARD_GET = 1807,
  HALL_INVITED_BIND = 1808,
  HALL_INVITED_AWARD_QUERY = 1809,
  HALL_NEWHAND_REWARD_LIST = 1810,
  HALL_NEWHAND_OPTION = 1811,
  HALL_SAFES_LOGIN = 1812,
  HALL_SAFES_REGISTER = 1813,
  HALL_SAFES_DEPOSIT = 1814,
  HALL_SAFES_TAKE_OUT = 1815,
  HALL_SAFES_MODIFY_PASSWD = 1816,
  HALL_SAFES_MODIFY_MAIL = 1817,
  HALL_SAFES_RESET_PASSWD = 1819,
  HALL_SAFES_GET_ACCOUNT = 1820,
  HALL_TASK_COMPLETE_TUTORIAL = 1821,
  HALL_TASK_WATCH_AD_REWARDS = 1822,
  HALL_TASK_WATCH_AD_INFO = 1823,
  SCRATCH_DETAIL_QUERY = 1830,
  SCRATCH_REWARD = 1831,
  SCRATCH_OBTAIN = 1832,
  SCRATCH_BOARD = 1833,
  ACHIEVEMENT_DETAIL_QUERY = 1840,
  ACHIEVEMENT_TOUCH = 1841,
  ACHIEVEMENT_STATUS = 1842,
  ACHIEVEMENT_BOARD = 1843,
  LEAGUE_BOARD = 1844,
  LEAGUE_REWARD = 1845,
  LEAGUE_REWARD_REVICE = 1846,
  ACTIVITY_BOX_QUERY = 1847,
  ACTIVITY_BOX_GET_REWARDS = 1848,
  ACTIVITY_LUCKY_WHEEL_QUERY = 1849,
  ACTIVITY_LUCKY_WHEEL_LOTTERY = 1850,
  ACTIVITY_LUCKY_WHEEL_REWARD = 1851,
  PUSH_RESULT_CODE = 9999,
  ActionName_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ActionName_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ActionName_IsValid(int value);
constexpr ActionName ActionName_MIN = ACTION_NAME_DEFAULT;
constexpr ActionName ActionName_MAX = PUSH_RESULT_CODE;
constexpr int ActionName_ARRAYSIZE = ActionName_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ActionName_descriptor();
template<typename T>
inline const std::string& ActionName_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ActionName>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ActionName_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ActionName_descriptor(), enum_t_value);
}
inline bool ActionName_Parse(
    const std::string& name, ActionName* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ActionName>(
    ActionName_descriptor(), name, value);
}
enum GOLDFLOW : int {
  GOLDFLOW_ID_ERROR = 0,
  GOLDFLOW_ID_TAX = 9,
  GOLDFLOW_ID_COMPENSAT = 9999,
  GOLDFLOW_ID_VISITOR_REGIST = 10000,
  GOLDFLOW_ID_INROOM = 10001,
  GOLDFLOW_ID_RESULT = 10002,
  GOLDFLOW_ID_CREAT_PRIVATE = 10003,
  GOLDFLOW_ID_FACEBOOK_REGIST = 10004,
  GOLDFLOW_ID_APPLE_REGIST = 10005,
  GOLDFLOW_ID_CHANGE_NAME = 10008,
  GOLDFLOW_ID_PRIVATE_TAKEN = 10009,
  GOLDFLOW_ID_PRIVATE_CAL = 10010,
  GOLDFLOW_ID_PRIVATE_RECORD = 10011,
  GOLDFLOW_ID_PRIVATE_SERVICE = 10012,
  GOLDFLOW_ID_SNG_SIGN = 20001,
  GOLDFLOW_ID_DELAY_SIGN = 20002,
  GOLDFLOW_ID_SERVICE_CHARGE = 20003,
  GOLDFLOW_ID_REPURCHASE = 20004,
  GOLDFLOW_ID_ADD_PURCHASE = 20005,
  GOLDFLOW_ID_SNG_RANK_REWARD = 20006,
  GOLDFLOW_ID_AIDELETE_CHARGE = 20007,
  GOLDFLOW_ID_AIADVANCE_CHARGE = 20008,
  GOLDFLOW_ID_MTT_SIGN = 20009,
  GOLDFLOW_ID_LEVEL_TASK = 30001,
  GOLDFLOW_ID_SIGN_REWARD = 30002,
  GOLDFLOW_ID_TOTAL_SIGN = 30003,
  GOLDFLOW_ID_TICKET_CHANGE = 30004,
  GOLDFLOW_ID_NOVICE_ONLINE = 30005,
  GOLDFLOW_ID_NOVICE_INGAME = 30006,
  GOLDFLOW_ID_NOVICE_SIGN = 30007,
  GOLDFLOW_ID_NOVICE_PLAY = 30008,
  GOLDFLOW_ID_LUCKEY_ROTATE = 30009,
  GOLDFLOW_ID_DAILY_TASK = 30010,
  GOLDFLOW_ID_WEEKLY_TASK = 30011,
  GOLDFLOW_ID_BANKRUPT_TASK = 30012,
  GOLDFLOW_ID_GRADE_REWARD = 30013,
  GOLDFLOW_ID_RANK_REWARD = 30014,
  GOLDFLOW_ID_SUPER_ROTATE = 30015,
  GOLDFLOW_ID_SHARE_REWARD = 30016,
  GOLDFLOW_ID_BIND_REWARD = 30017,
  GOLDFLOW_ID_NEWHAND = 30018,
  GOLDFLOW_ID_MALL_RECHARGE = 40101,
  GOLDFLOW_ID_LUCKEY_GIFT = 40102,
  GOLDFLOW_ID_SPECIAL_GIFT = 40103,
  GOLDFLOW_ID_NEW_RECHARGE = 40104,
  GOLDFLOW_ID_LIMITED_SPECIAL = 50000,
  GOLDFLOW_ID_SUPER_SPECIAL = 50001,
  GOLDFLOW_ID_DAILY_SPECIAL = 50002,
  GOLDFLOW_ID_ADMIN_CHANGE = 50003,
  GOLDFLOW_ID_EXCHANGE_CODE = 50004,
  GOLDFLOW_ID_FRIENDS_GIVE = 50005,
  GOLDFLOW_ID_MAIL_REWARD = 50006,
  GOLDFLOW_ID_VISITOR_BANDFB = 50009,
  GOLDFLOW_ID_AI_CHALLENGE_ENTER = 60001,
  GOLDFLOW_ID_AI_CHALLENGE_EXIT = 60002,
  GOLDFLOW_ID_AI_CHALLENGE_ROUND_CAL = 60003,
  GOLDFLOW_ID_AOF_ENTER = 60004,
  GOLDFLOW_ID_AOF_EXIT = 60005,
  GOLDFLOW_ID_AOF_CAL = 60006,
  GOLDFLOW_ID_AI1V1_ENTER = 60007,
  GOLDFLOW_ID_AI1V1_EXIT = 60008,
  GOLDFLOW_ID_AI1V1_CAL = 60009,
  GOLDFLOW_ID_SH_WIN = 60010,
  GOLDFLOW_ID_SH_PUMP = 60011,
  GOLDFLOW_ID_DDZ_WIN = 60012,
  GOLDFLOW_ID_DDZ_PUMP = 60013,
  GOLDFLOW_ID_MJ_WIN = 60014,
  GOLDFLOW_ID_MJ_PUMP = 60015,
  GOLDFLOW_ID_PUMP = 60016,
  GOLDFLOW_ID_AOF_PUMP = 60017,
  GOLDFLOW_ID_AI1V1_PUMP = 60018,
  GOLDFLOW_ID_ROBOT_ADD = 60019,
  GOLDFLOW_ID_ROBOT_AOF_ADD = 60020,
  GOLDFLOW_ID_ROBOT_AI1V1_ADD = 60021,
  GOLDFLOW_ID_ROBOT_SH_ADD = 60022,
  GOLDFLOW_ID_SERVICE_FEE = 60023,
  GOLDFLOW_ID_SD_ENTER = 60024,
  GOLDFLOW_ID_SD_EXIT = 60025,
  GOLDFLOW_ID_SD_CAL = 60026,
  GOLDFLOW_ID_SD_PUMP = 60027,
  GOLDFLOW_ID_ROBOT_SD_ADD = 60028,
  GOLDFLOW_ID_PROPS = 60100,
  GOLDFLOW_ID_EMOT = 60101,
  GOLDFLOW_ID_GIFT = 60102,
  GOLDFOLW_ID_REWARD_PROPS = 60103,
  GOLDFOLW_ID_REWARD_GOLD = 60104,
  GOLDFLOW_ID_SCRATCH_REWARD = 60105,
  GOLDFLOW_ID_SAFES_TAKE_OUT = 60106,
  GOLDFLOW_ID_SAFES_DIPOSIT = 60107,
  GOLDFLOW_ID_WATCH_AD = 60110,
  GOLDFLOW_ID_LEAGUE_REWARD = 60111,
  GOLDFLOW_ID_BOX_REWARD = 60112,
  GOLDFLOW_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  GOLDFLOW_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool GOLDFLOW_IsValid(int value);
constexpr GOLDFLOW GOLDFLOW_MIN = GOLDFLOW_ID_ERROR;
constexpr GOLDFLOW GOLDFLOW_MAX = GOLDFLOW_ID_BOX_REWARD;
constexpr int GOLDFLOW_ARRAYSIZE = GOLDFLOW_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GOLDFLOW_descriptor();
template<typename T>
inline const std::string& GOLDFLOW_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GOLDFLOW>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GOLDFLOW_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GOLDFLOW_descriptor(), enum_t_value);
}
inline bool GOLDFLOW_Parse(
    const std::string& name, GOLDFLOW* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GOLDFLOW>(
    GOLDFLOW_descriptor(), name, value);
}
enum PushMessageType : int {
  MESSAGE_TYPE_DEFAULT = 0,
  USER_ACCOUNT_CHANGE = 10000,
  USER_EXIT_ROOM = 10001,
  USER_EXIT_MATCH = 10002,
  CLUB_USER_STATUS_CHANGE = 10100,
  CLUB_USER_JOIN = 10101,
  CLUB_USER_KICKOUT = 10102,
  CLUB_CONFIG_CHANGE = 10103,
  CLUB_INFO_CHANGE = 10104,
  CLUB_DISMISS = 10105,
  CLUB_USER_EXIT = 10106,
  PushMessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  PushMessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool PushMessageType_IsValid(int value);
constexpr PushMessageType PushMessageType_MIN = MESSAGE_TYPE_DEFAULT;
constexpr PushMessageType PushMessageType_MAX = CLUB_USER_EXIT;
constexpr int PushMessageType_ARRAYSIZE = PushMessageType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PushMessageType_descriptor();
template<typename T>
inline const std::string& PushMessageType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PushMessageType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PushMessageType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PushMessageType_descriptor(), enum_t_value);
}
inline bool PushMessageType_Parse(
    const std::string& name, PushMessageType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PushMessageType>(
    PushMessageType_descriptor(), name, value);
}
// ===================================================================

class CommonReqHead :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:XGameProto.CommonReqHead) */ {
 public:
  CommonReqHead();
  virtual ~CommonReqHead();

  CommonReqHead(const CommonReqHead& from);
  CommonReqHead(CommonReqHead&& from) noexcept
    : CommonReqHead() {
    *this = ::std::move(from);
  }

  inline CommonReqHead& operator=(const CommonReqHead& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonReqHead& operator=(CommonReqHead&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CommonReqHead& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommonReqHead* internal_default_instance() {
    return reinterpret_cast<const CommonReqHead*>(
               &_CommonReqHead_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonReqHead& a, CommonReqHead& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonReqHead* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonReqHead* New() const final {
    return CreateMaybeMessage<CommonReqHead>(nullptr);
  }

  CommonReqHead* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonReqHead>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonReqHead& from);
  void MergeFrom(const CommonReqHead& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommonReqHead* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "XGameProto.CommonReqHead";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonStruct_2eproto);
    return ::descriptor_table_CommonStruct_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReqBodyBytesFieldNumber = 2,
    kActionNameFieldNumber = 1,
  };
  // bytes reqBodyBytes = 2;
  void clear_reqbodybytes();
  const std::string& reqbodybytes() const;
  void set_reqbodybytes(const std::string& value);
  void set_reqbodybytes(std::string&& value);
  void set_reqbodybytes(const char* value);
  void set_reqbodybytes(const void* value, size_t size);
  std::string* mutable_reqbodybytes();
  std::string* release_reqbodybytes();
  void set_allocated_reqbodybytes(std::string* reqbodybytes);

  // .XGameProto.ActionName actionName = 1;
  void clear_actionname();
  ::XGameProto::ActionName actionname() const;
  void set_actionname(::XGameProto::ActionName value);

  // @@protoc_insertion_point(class_scope:XGameProto.CommonReqHead)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reqbodybytes_;
  int actionname_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonStruct_2eproto;
};
// -------------------------------------------------------------------

class CommonRespHead :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:XGameProto.CommonRespHead) */ {
 public:
  CommonRespHead();
  virtual ~CommonRespHead();

  CommonRespHead(const CommonRespHead& from);
  CommonRespHead(CommonRespHead&& from) noexcept
    : CommonRespHead() {
    *this = ::std::move(from);
  }

  inline CommonRespHead& operator=(const CommonRespHead& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonRespHead& operator=(CommonRespHead&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CommonRespHead& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommonRespHead* internal_default_instance() {
    return reinterpret_cast<const CommonRespHead*>(
               &_CommonRespHead_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CommonRespHead& a, CommonRespHead& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonRespHead* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonRespHead* New() const final {
    return CreateMaybeMessage<CommonRespHead>(nullptr);
  }

  CommonRespHead* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonRespHead>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonRespHead& from);
  void MergeFrom(const CommonRespHead& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommonRespHead* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "XGameProto.CommonRespHead";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonStruct_2eproto);
    return ::descriptor_table_CommonStruct_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRespBodyBytesFieldNumber = 3,
    kResultCodeFieldNumber = 1,
    kActionNameFieldNumber = 2,
  };
  // bytes respBodyBytes = 3;
  void clear_respbodybytes();
  const std::string& respbodybytes() const;
  void set_respbodybytes(const std::string& value);
  void set_respbodybytes(std::string&& value);
  void set_respbodybytes(const char* value);
  void set_respbodybytes(const void* value, size_t size);
  std::string* mutable_respbodybytes();
  std::string* release_respbodybytes();
  void set_allocated_respbodybytes(std::string* respbodybytes);

  // sint32 resultCode = 1;
  void clear_resultcode();
  ::PROTOBUF_NAMESPACE_ID::int32 resultcode() const;
  void set_resultcode(::PROTOBUF_NAMESPACE_ID::int32 value);

  // .XGameProto.ActionName actionName = 2;
  void clear_actionname();
  ::XGameProto::ActionName actionname() const;
  void set_actionname(::XGameProto::ActionName value);

  // @@protoc_insertion_point(class_scope:XGameProto.CommonRespHead)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr respbodybytes_;
  ::PROTOBUF_NAMESPACE_ID::int32 resultcode_;
  int actionname_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonStruct_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonReqHead

// .XGameProto.ActionName actionName = 1;
inline void CommonReqHead::clear_actionname() {
  actionname_ = 0;
}
inline ::XGameProto::ActionName CommonReqHead::actionname() const {
  // @@protoc_insertion_point(field_get:XGameProto.CommonReqHead.actionName)
  return static_cast< ::XGameProto::ActionName >(actionname_);
}
inline void CommonReqHead::set_actionname(::XGameProto::ActionName value) {
  
  actionname_ = value;
  // @@protoc_insertion_point(field_set:XGameProto.CommonReqHead.actionName)
}

// bytes reqBodyBytes = 2;
inline void CommonReqHead::clear_reqbodybytes() {
  reqbodybytes_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CommonReqHead::reqbodybytes() const {
  // @@protoc_insertion_point(field_get:XGameProto.CommonReqHead.reqBodyBytes)
  return reqbodybytes_.GetNoArena();
}
inline void CommonReqHead::set_reqbodybytes(const std::string& value) {
  
  reqbodybytes_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XGameProto.CommonReqHead.reqBodyBytes)
}
inline void CommonReqHead::set_reqbodybytes(std::string&& value) {
  
  reqbodybytes_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XGameProto.CommonReqHead.reqBodyBytes)
}
inline void CommonReqHead::set_reqbodybytes(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  reqbodybytes_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XGameProto.CommonReqHead.reqBodyBytes)
}
inline void CommonReqHead::set_reqbodybytes(const void* value, size_t size) {
  
  reqbodybytes_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XGameProto.CommonReqHead.reqBodyBytes)
}
inline std::string* CommonReqHead::mutable_reqbodybytes() {
  
  // @@protoc_insertion_point(field_mutable:XGameProto.CommonReqHead.reqBodyBytes)
  return reqbodybytes_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CommonReqHead::release_reqbodybytes() {
  // @@protoc_insertion_point(field_release:XGameProto.CommonReqHead.reqBodyBytes)
  
  return reqbodybytes_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CommonReqHead::set_allocated_reqbodybytes(std::string* reqbodybytes) {
  if (reqbodybytes != nullptr) {
    
  } else {
    
  }
  reqbodybytes_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), reqbodybytes);
  // @@protoc_insertion_point(field_set_allocated:XGameProto.CommonReqHead.reqBodyBytes)
}

// -------------------------------------------------------------------

// CommonRespHead

// sint32 resultCode = 1;
inline void CommonRespHead::clear_resultcode() {
  resultcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CommonRespHead::resultcode() const {
  // @@protoc_insertion_point(field_get:XGameProto.CommonRespHead.resultCode)
  return resultcode_;
}
inline void CommonRespHead::set_resultcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  resultcode_ = value;
  // @@protoc_insertion_point(field_set:XGameProto.CommonRespHead.resultCode)
}

// .XGameProto.ActionName actionName = 2;
inline void CommonRespHead::clear_actionname() {
  actionname_ = 0;
}
inline ::XGameProto::ActionName CommonRespHead::actionname() const {
  // @@protoc_insertion_point(field_get:XGameProto.CommonRespHead.actionName)
  return static_cast< ::XGameProto::ActionName >(actionname_);
}
inline void CommonRespHead::set_actionname(::XGameProto::ActionName value) {
  
  actionname_ = value;
  // @@protoc_insertion_point(field_set:XGameProto.CommonRespHead.actionName)
}

// bytes respBodyBytes = 3;
inline void CommonRespHead::clear_respbodybytes() {
  respbodybytes_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CommonRespHead::respbodybytes() const {
  // @@protoc_insertion_point(field_get:XGameProto.CommonRespHead.respBodyBytes)
  return respbodybytes_.GetNoArena();
}
inline void CommonRespHead::set_respbodybytes(const std::string& value) {
  
  respbodybytes_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XGameProto.CommonRespHead.respBodyBytes)
}
inline void CommonRespHead::set_respbodybytes(std::string&& value) {
  
  respbodybytes_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XGameProto.CommonRespHead.respBodyBytes)
}
inline void CommonRespHead::set_respbodybytes(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  respbodybytes_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XGameProto.CommonRespHead.respBodyBytes)
}
inline void CommonRespHead::set_respbodybytes(const void* value, size_t size) {
  
  respbodybytes_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XGameProto.CommonRespHead.respBodyBytes)
}
inline std::string* CommonRespHead::mutable_respbodybytes() {
  
  // @@protoc_insertion_point(field_mutable:XGameProto.CommonRespHead.respBodyBytes)
  return respbodybytes_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CommonRespHead::release_respbodybytes() {
  // @@protoc_insertion_point(field_release:XGameProto.CommonRespHead.respBodyBytes)
  
  return respbodybytes_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CommonRespHead::set_allocated_respbodybytes(std::string* respbodybytes) {
  if (respbodybytes != nullptr) {
    
  } else {
    
  }
  respbodybytes_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), respbodybytes);
  // @@protoc_insertion_point(field_set_allocated:XGameProto.CommonRespHead.respBodyBytes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace XGameProto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::XGameProto::ActionName> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::XGameProto::ActionName>() {
  return ::XGameProto::ActionName_descriptor();
}
template <> struct is_proto_enum< ::XGameProto::GOLDFLOW> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::XGameProto::GOLDFLOW>() {
  return ::XGameProto::GOLDFLOW_descriptor();
}
template <> struct is_proto_enum< ::XGameProto::PushMessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::XGameProto::PushMessageType>() {
  return ::XGameProto::PushMessageType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStruct_2eproto
