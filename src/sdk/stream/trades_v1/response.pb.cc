// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/trades_v1/response.proto

#include "sdk/stream/trades_v1/response.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace kaikosdk {
constexpr StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal {
  constexpr StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal() {}
  union {
    StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal _StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse_default_instance_;
constexpr StreamTradesResponseV1::StreamTradesResponseV1(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : additional_properties_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{})
  , class__(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , exchange_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sequence_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , ts_exchange_(nullptr)
  , ts_collection_(nullptr)
  , ts_event_(nullptr)
  , amount_(0)
  , price_(0)
  , side_(0)
{}
struct StreamTradesResponseV1DefaultTypeInternal {
  constexpr StreamTradesResponseV1DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamTradesResponseV1DefaultTypeInternal() {}
  union {
    StreamTradesResponseV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamTradesResponseV1DefaultTypeInternal _StreamTradesResponseV1_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, additional_properties_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, amount_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, class__),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, sequence_id_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, id_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, price_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, side_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, ts_exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, ts_collection_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamTradesResponseV1, ts_event_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse)},
  { 9, -1, sizeof(::kaikosdk::StreamTradesResponseV1)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamTradesResponseV1_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#sdk/stream/trades_v1/response.proto\022\010k"
  "aikosdk\032\037google/protobuf/timestamp.proto"
  "\032\027sdk/core/wrappers.proto\"\224\004\n\026StreamTrad"
  "esResponseV1\022Y\n\025additional_properties\030\001 "
  "\003(\0132:.kaikosdk.StreamTradesResponseV1.Ad"
  "ditionalPropertiesEntry\022\016\n\006amount\030\002 \001(\001\022"
  "\r\n\005class\030\003 \001(\t\022\014\n\004code\030\004 \001(\t\022\020\n\010exchange"
  "\030\005 \001(\t\022\023\n\013sequence_id\030\006 \001(\t\022\n\n\002id\030\007 \001(\t\022"
  "\r\n\005price\030\010 \001(\001\0228\n\004side\030\t \001(\0162*.kaikosdk."
  "StreamTradesResponseV1.TradeSide\022-\n\013ts_e"
  "xchange\030\n \001(\0132\030.kaikosdk.TimestampValue\022"
  "/\n\rts_collection\030\013 \001(\0132\030.kaikosdk.Timest"
  "ampValue\022,\n\010ts_event\030\014 \001(\0132\032.google.prot"
  "obuf.Timestamp\032;\n\031AdditionalPropertiesEn"
  "try\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001\"+\n\tT"
  "radeSide\022\013\n\007UNKNOWN\020\000\022\007\n\003BUY\020\001\022\010\n\004SELL\020\002"
  "B\200\001\n\036com.kaiko.sdk.stream.trades_v1P\001ZAg"
  "ithub.com/challengerdeep/kaiko-go-sdk/st"
  "ream/trades_v1;trades_v1\252\002\030KaikoSdk.Stre"
  "am.TradesV1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
  &::descriptor_table_sdk_2fcore_2fwrappers_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto = {
  false, false, 779, descriptor_table_protodef_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto, "sdk/stream/trades_v1/response.proto", 
  &descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_once, descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto, file_level_enum_descriptors_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto, file_level_service_descriptors_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto(&descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto);
namespace kaikosdk {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StreamTradesResponseV1_TradeSide_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto);
  return file_level_enum_descriptors_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto[0];
}
bool StreamTradesResponseV1_TradeSide_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr StreamTradesResponseV1_TradeSide StreamTradesResponseV1::UNKNOWN;
constexpr StreamTradesResponseV1_TradeSide StreamTradesResponseV1::BUY;
constexpr StreamTradesResponseV1_TradeSide StreamTradesResponseV1::SELL;
constexpr StreamTradesResponseV1_TradeSide StreamTradesResponseV1::TradeSide_MIN;
constexpr StreamTradesResponseV1_TradeSide StreamTradesResponseV1::TradeSide_MAX;
constexpr int StreamTradesResponseV1::TradeSide_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse() {}
StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::MergeFrom(const StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto[0]);
}

// ===================================================================

class StreamTradesResponseV1::_Internal {
 public:
  static const ::kaikosdk::TimestampValue& ts_exchange(const StreamTradesResponseV1* msg);
  static const ::kaikosdk::TimestampValue& ts_collection(const StreamTradesResponseV1* msg);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& ts_event(const StreamTradesResponseV1* msg);
};

const ::kaikosdk::TimestampValue&
StreamTradesResponseV1::_Internal::ts_exchange(const StreamTradesResponseV1* msg) {
  return *msg->ts_exchange_;
}
const ::kaikosdk::TimestampValue&
StreamTradesResponseV1::_Internal::ts_collection(const StreamTradesResponseV1* msg) {
  return *msg->ts_collection_;
}
const PROTOBUF_NAMESPACE_ID::Timestamp&
StreamTradesResponseV1::_Internal::ts_event(const StreamTradesResponseV1* msg) {
  return *msg->ts_event_;
}
void StreamTradesResponseV1::clear_ts_exchange() {
  if (GetArenaForAllocation() == nullptr && ts_exchange_ != nullptr) {
    delete ts_exchange_;
  }
  ts_exchange_ = nullptr;
}
void StreamTradesResponseV1::clear_ts_collection() {
  if (GetArenaForAllocation() == nullptr && ts_collection_ != nullptr) {
    delete ts_collection_;
  }
  ts_collection_ = nullptr;
}
void StreamTradesResponseV1::clear_ts_event() {
  if (GetArenaForAllocation() == nullptr && ts_event_ != nullptr) {
    delete ts_event_;
  }
  ts_event_ = nullptr;
}
StreamTradesResponseV1::StreamTradesResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  additional_properties_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamTradesResponseV1)
}
StreamTradesResponseV1::StreamTradesResponseV1(const StreamTradesResponseV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  additional_properties_.MergeFrom(from.additional_properties_);
  class__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_class_().empty()) {
    class__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_class_(), 
      GetArenaForAllocation());
  }
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_code().empty()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_exchange().empty()) {
    exchange_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_exchange(), 
      GetArenaForAllocation());
  }
  sequence_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sequence_id().empty()) {
    sequence_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sequence_id(), 
      GetArenaForAllocation());
  }
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_id(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_ts_exchange()) {
    ts_exchange_ = new ::kaikosdk::TimestampValue(*from.ts_exchange_);
  } else {
    ts_exchange_ = nullptr;
  }
  if (from._internal_has_ts_collection()) {
    ts_collection_ = new ::kaikosdk::TimestampValue(*from.ts_collection_);
  } else {
    ts_collection_ = nullptr;
  }
  if (from._internal_has_ts_event()) {
    ts_event_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.ts_event_);
  } else {
    ts_event_ = nullptr;
  }
  ::memcpy(&amount_, &from.amount_,
    static_cast<size_t>(reinterpret_cast<char*>(&side_) -
    reinterpret_cast<char*>(&amount_)) + sizeof(side_));
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamTradesResponseV1)
}

inline void StreamTradesResponseV1::SharedCtor() {
class__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
sequence_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ts_exchange_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&side_) -
    reinterpret_cast<char*>(&ts_exchange_)) + sizeof(side_));
}

StreamTradesResponseV1::~StreamTradesResponseV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamTradesResponseV1)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StreamTradesResponseV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  class__.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exchange_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sequence_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete ts_exchange_;
  if (this != internal_default_instance()) delete ts_collection_;
  if (this != internal_default_instance()) delete ts_event_;
}

void StreamTradesResponseV1::ArenaDtor(void* object) {
  StreamTradesResponseV1* _this = reinterpret_cast< StreamTradesResponseV1* >(object);
  (void)_this;
  _this->additional_properties_. ~MapField();
}
inline void StreamTradesResponseV1::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena) {
  if (arena != nullptr) {
    arena->OwnCustomDestructor(this, &StreamTradesResponseV1::ArenaDtor);
  }
}
void StreamTradesResponseV1::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamTradesResponseV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamTradesResponseV1)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  additional_properties_.Clear();
  class__.ClearToEmpty();
  code_.ClearToEmpty();
  exchange_.ClearToEmpty();
  sequence_id_.ClearToEmpty();
  id_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && ts_exchange_ != nullptr) {
    delete ts_exchange_;
  }
  ts_exchange_ = nullptr;
  if (GetArenaForAllocation() == nullptr && ts_collection_ != nullptr) {
    delete ts_collection_;
  }
  ts_collection_ = nullptr;
  if (GetArenaForAllocation() == nullptr && ts_event_ != nullptr) {
    delete ts_event_;
  }
  ts_event_ = nullptr;
  ::memset(&amount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&side_) -
      reinterpret_cast<char*>(&amount_)) + sizeof(side_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamTradesResponseV1::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // map<string, string> additional_properties = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&additional_properties_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // double amount = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          amount_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // string class = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_class_();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamTradesResponseV1.class"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string code = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamTradesResponseV1.code"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string exchange = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_exchange();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamTradesResponseV1.exchange"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sequence_id = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_sequence_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamTradesResponseV1.sequence_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string id = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamTradesResponseV1.id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double price = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // .kaikosdk.StreamTradesResponseV1.TradeSide side = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_side(static_cast<::kaikosdk::StreamTradesResponseV1_TradeSide>(val));
        } else goto handle_unusual;
        continue;
      // .kaikosdk.TimestampValue ts_exchange = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts_exchange(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .kaikosdk.TimestampValue ts_collection = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts_collection(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp ts_event = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts_event(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* StreamTradesResponseV1::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamTradesResponseV1)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, string> additional_properties = 1;
  if (!this->_internal_additional_properties().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        (void)p;
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "kaikosdk.StreamTradesResponseV1.AdditionalPropertiesEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "kaikosdk.StreamTradesResponseV1.AdditionalPropertiesEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_additional_properties().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_additional_properties().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_additional_properties().begin();
          it != this->_internal_additional_properties().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::Funcs::InternalSerialize(1, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_additional_properties().begin();
          it != this->_internal_additional_properties().end(); ++it) {
        target = StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::Funcs::InternalSerialize(1, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // double amount = 2;
  if (!(this->_internal_amount() <= 0 && this->_internal_amount() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_amount(), target);
  }

  // string class = 3;
  if (!this->_internal_class_().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_class_().data(), static_cast<int>(this->_internal_class_().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamTradesResponseV1.class");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_class_(), target);
  }

  // string code = 4;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamTradesResponseV1.code");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_code(), target);
  }

  // string exchange = 5;
  if (!this->_internal_exchange().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exchange().data(), static_cast<int>(this->_internal_exchange().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamTradesResponseV1.exchange");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_exchange(), target);
  }

  // string sequence_id = 6;
  if (!this->_internal_sequence_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sequence_id().data(), static_cast<int>(this->_internal_sequence_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamTradesResponseV1.sequence_id");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_sequence_id(), target);
  }

  // string id = 7;
  if (!this->_internal_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamTradesResponseV1.id");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_id(), target);
  }

  // double price = 8;
  if (!(this->_internal_price() <= 0 && this->_internal_price() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->_internal_price(), target);
  }

  // .kaikosdk.StreamTradesResponseV1.TradeSide side = 9;
  if (this->_internal_side() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      9, this->_internal_side(), target);
  }

  // .kaikosdk.TimestampValue ts_exchange = 10;
  if (this->_internal_has_ts_exchange()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        10, _Internal::ts_exchange(this), target, stream);
  }

  // .kaikosdk.TimestampValue ts_collection = 11;
  if (this->_internal_has_ts_collection()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        11, _Internal::ts_collection(this), target, stream);
  }

  // .google.protobuf.Timestamp ts_event = 12;
  if (this->_internal_has_ts_event()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        12, _Internal::ts_event(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamTradesResponseV1)
  return target;
}

size_t StreamTradesResponseV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamTradesResponseV1)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> additional_properties = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_additional_properties_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_additional_properties().begin();
      it != this->_internal_additional_properties().end(); ++it) {
    total_size += StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string class = 3;
  if (!this->_internal_class_().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_class_());
  }

  // string code = 4;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string exchange = 5;
  if (!this->_internal_exchange().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exchange());
  }

  // string sequence_id = 6;
  if (!this->_internal_sequence_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sequence_id());
  }

  // string id = 7;
  if (!this->_internal_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // .kaikosdk.TimestampValue ts_exchange = 10;
  if (this->_internal_has_ts_exchange()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ts_exchange_);
  }

  // .kaikosdk.TimestampValue ts_collection = 11;
  if (this->_internal_has_ts_collection()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ts_collection_);
  }

  // .google.protobuf.Timestamp ts_event = 12;
  if (this->_internal_has_ts_event()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ts_event_);
  }

  // double amount = 2;
  if (!(this->_internal_amount() <= 0 && this->_internal_amount() >= 0)) {
    total_size += 1 + 8;
  }

  // double price = 8;
  if (!(this->_internal_price() <= 0 && this->_internal_price() >= 0)) {
    total_size += 1 + 8;
  }

  // .kaikosdk.StreamTradesResponseV1.TradeSide side = 9;
  if (this->_internal_side() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_side());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamTradesResponseV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StreamTradesResponseV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamTradesResponseV1::GetClassData() const { return &_class_data_; }

void StreamTradesResponseV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<StreamTradesResponseV1 *>(to)->MergeFrom(
      static_cast<const StreamTradesResponseV1 &>(from));
}


void StreamTradesResponseV1::MergeFrom(const StreamTradesResponseV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamTradesResponseV1)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  additional_properties_.MergeFrom(from.additional_properties_);
  if (!from._internal_class_().empty()) {
    _internal_set_class_(from._internal_class_());
  }
  if (!from._internal_code().empty()) {
    _internal_set_code(from._internal_code());
  }
  if (!from._internal_exchange().empty()) {
    _internal_set_exchange(from._internal_exchange());
  }
  if (!from._internal_sequence_id().empty()) {
    _internal_set_sequence_id(from._internal_sequence_id());
  }
  if (!from._internal_id().empty()) {
    _internal_set_id(from._internal_id());
  }
  if (from._internal_has_ts_exchange()) {
    _internal_mutable_ts_exchange()->::kaikosdk::TimestampValue::MergeFrom(from._internal_ts_exchange());
  }
  if (from._internal_has_ts_collection()) {
    _internal_mutable_ts_collection()->::kaikosdk::TimestampValue::MergeFrom(from._internal_ts_collection());
  }
  if (from._internal_has_ts_event()) {
    _internal_mutable_ts_event()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_ts_event());
  }
  if (!(from._internal_amount() <= 0 && from._internal_amount() >= 0)) {
    _internal_set_amount(from._internal_amount());
  }
  if (!(from._internal_price() <= 0 && from._internal_price() >= 0)) {
    _internal_set_price(from._internal_price());
  }
  if (from._internal_side() != 0) {
    _internal_set_side(from._internal_side());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamTradesResponseV1::CopyFrom(const StreamTradesResponseV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamTradesResponseV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamTradesResponseV1::IsInitialized() const {
  return true;
}

void StreamTradesResponseV1::InternalSwap(StreamTradesResponseV1* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  additional_properties_.InternalSwap(&other->additional_properties_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &class__, GetArenaForAllocation(),
      &other->class__, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, GetArenaForAllocation(),
      &other->code_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &exchange_, GetArenaForAllocation(),
      &other->exchange_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &sequence_id_, GetArenaForAllocation(),
      &other->sequence_id_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &id_, GetArenaForAllocation(),
      &other->id_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamTradesResponseV1, side_)
      + sizeof(StreamTradesResponseV1::side_)
      - PROTOBUF_FIELD_OFFSET(StreamTradesResponseV1, ts_exchange_)>(
          reinterpret_cast<char*>(&ts_exchange_),
          reinterpret_cast<char*>(&other->ts_exchange_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamTradesResponseV1::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse* Arena::CreateMaybeMessage< ::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamTradesResponseV1_AdditionalPropertiesEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamTradesResponseV1* Arena::CreateMaybeMessage< ::kaikosdk::StreamTradesResponseV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamTradesResponseV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
