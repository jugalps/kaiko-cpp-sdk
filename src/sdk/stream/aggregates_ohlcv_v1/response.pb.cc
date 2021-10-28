// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_ohlcv_v1/response.proto

#include "sdk/stream/aggregates_ohlcv_v1/response.pb.h"

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
constexpr StreamAggregatesOHLCVResponseV1::StreamAggregatesOHLCVResponseV1(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : aggregate_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , class__(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , close_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , exchange_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , high_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , low_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , open_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sequence_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , uid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , volume_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , timestamp_(nullptr){}
struct StreamAggregatesOHLCVResponseV1DefaultTypeInternal {
  constexpr StreamAggregatesOHLCVResponseV1DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamAggregatesOHLCVResponseV1DefaultTypeInternal() {}
  union {
    StreamAggregatesOHLCVResponseV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamAggregatesOHLCVResponseV1DefaultTypeInternal _StreamAggregatesOHLCVResponseV1_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, aggregate_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, class__),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, close_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, high_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, low_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, open_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, sequence_id_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, timestamp_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, uid_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, volume_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::kaikosdk::StreamAggregatesOHLCVResponseV1)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamAggregatesOHLCVResponseV1_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n-sdk/stream/aggregates_ohlcv_v1/respons"
  "e.proto\022\010kaikosdk\032\037google/protobuf/times"
  "tamp.proto\"\374\001\n\037StreamAggregatesOHLCVResp"
  "onseV1\022\021\n\taggregate\030\001 \001(\t\022\r\n\005class\030\002 \001(\t"
  "\022\r\n\005close\030\003 \001(\t\022\020\n\010exchange\030\004 \001(\t\022\014\n\004hig"
  "h\030\005 \001(\t\022\013\n\003low\030\006 \001(\t\022\014\n\004open\030\007 \001(\t\022\023\n\013se"
  "quence_id\030\010 \001(\t\022\014\n\004code\030\t \001(\t\022-\n\ttimesta"
  "mp\030\n \001(\0132\032.google.protobuf.Timestamp\022\013\n\003"
  "uid\030\013 \001(\t\022\016\n\006volume\030\014 \001(\tB\247\001\n(com.kaiko."
  "sdk.stream.aggregates_ohlcv_v1P\001ZUgithub"
  ".com/challengerdeep/kaiko-go-sdk/stream/"
  "aggregates_ohlcv_v1;aggregates_ohlcv_v1\252"
  "\002!KaikoSdk.Stream.AggregatesOHLCVV1b\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto = {
  false, false, 523, descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto, "sdk/stream/aggregates_ohlcv_v1/response.proto", 
  &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto, file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesOHLCVResponseV1::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const StreamAggregatesOHLCVResponseV1* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
StreamAggregatesOHLCVResponseV1::_Internal::timestamp(const StreamAggregatesOHLCVResponseV1* msg) {
  return *msg->timestamp_;
}
void StreamAggregatesOHLCVResponseV1::clear_timestamp() {
  if (GetArenaForAllocation() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
}
StreamAggregatesOHLCVResponseV1::StreamAggregatesOHLCVResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesOHLCVResponseV1)
}
StreamAggregatesOHLCVResponseV1::StreamAggregatesOHLCVResponseV1(const StreamAggregatesOHLCVResponseV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  aggregate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_aggregate().empty()) {
    aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_aggregate(), 
      GetArenaForAllocation());
  }
  class__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_class_().empty()) {
    class__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_class_(), 
      GetArenaForAllocation());
  }
  close_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_close().empty()) {
    close_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_close(), 
      GetArenaForAllocation());
  }
  exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_exchange().empty()) {
    exchange_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_exchange(), 
      GetArenaForAllocation());
  }
  high_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_high().empty()) {
    high_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_high(), 
      GetArenaForAllocation());
  }
  low_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_low().empty()) {
    low_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_low(), 
      GetArenaForAllocation());
  }
  open_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_open().empty()) {
    open_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_open(), 
      GetArenaForAllocation());
  }
  sequence_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sequence_id().empty()) {
    sequence_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sequence_id(), 
      GetArenaForAllocation());
  }
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_code().empty()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  uid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_uid().empty()) {
    uid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_uid(), 
      GetArenaForAllocation());
  }
  volume_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_volume().empty()) {
    volume_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_volume(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesOHLCVResponseV1)
}

inline void StreamAggregatesOHLCVResponseV1::SharedCtor() {
aggregate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
class__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
close_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
high_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
low_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
open_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
sequence_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
uid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
volume_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
timestamp_ = nullptr;
}

StreamAggregatesOHLCVResponseV1::~StreamAggregatesOHLCVResponseV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesOHLCVResponseV1)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StreamAggregatesOHLCVResponseV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  aggregate_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  class__.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  close_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exchange_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  high_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  low_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  open_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sequence_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  uid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  volume_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
}

void StreamAggregatesOHLCVResponseV1::ArenaDtor(void* object) {
  StreamAggregatesOHLCVResponseV1* _this = reinterpret_cast< StreamAggregatesOHLCVResponseV1* >(object);
  (void)_this;
}
void StreamAggregatesOHLCVResponseV1::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StreamAggregatesOHLCVResponseV1::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamAggregatesOHLCVResponseV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  aggregate_.ClearToEmpty();
  class__.ClearToEmpty();
  close_.ClearToEmpty();
  exchange_.ClearToEmpty();
  high_.ClearToEmpty();
  low_.ClearToEmpty();
  open_.ClearToEmpty();
  sequence_id_.ClearToEmpty();
  code_.ClearToEmpty();
  uid_.ClearToEmpty();
  volume_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesOHLCVResponseV1::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string aggregate = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_aggregate();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.aggregate"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string class = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_class_();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.class"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string close = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_close();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.close"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string exchange = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_exchange();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.exchange"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string high = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_high();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.high"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string low = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_low();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.low"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string open = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_open();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.open"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sequence_id = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_sequence_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.sequence_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string code = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.code"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string uid = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_uid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.uid"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string volume = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          auto str = _internal_mutable_volume();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.volume"));
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

::PROTOBUF_NAMESPACE_ID::uint8* StreamAggregatesOHLCVResponseV1::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string aggregate = 1;
  if (!this->_internal_aggregate().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_aggregate().data(), static_cast<int>(this->_internal_aggregate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.aggregate");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_aggregate(), target);
  }

  // string class = 2;
  if (!this->_internal_class_().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_class_().data(), static_cast<int>(this->_internal_class_().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.class");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_class_(), target);
  }

  // string close = 3;
  if (!this->_internal_close().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_close().data(), static_cast<int>(this->_internal_close().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.close");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_close(), target);
  }

  // string exchange = 4;
  if (!this->_internal_exchange().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exchange().data(), static_cast<int>(this->_internal_exchange().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.exchange");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_exchange(), target);
  }

  // string high = 5;
  if (!this->_internal_high().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_high().data(), static_cast<int>(this->_internal_high().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.high");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_high(), target);
  }

  // string low = 6;
  if (!this->_internal_low().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_low().data(), static_cast<int>(this->_internal_low().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.low");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_low(), target);
  }

  // string open = 7;
  if (!this->_internal_open().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_open().data(), static_cast<int>(this->_internal_open().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.open");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_open(), target);
  }

  // string sequence_id = 8;
  if (!this->_internal_sequence_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sequence_id().data(), static_cast<int>(this->_internal_sequence_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.sequence_id");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_sequence_id(), target);
  }

  // string code = 9;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.code");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_code(), target);
  }

  // .google.protobuf.Timestamp timestamp = 10;
  if (this->_internal_has_timestamp()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        10, _Internal::timestamp(this), target, stream);
  }

  // string uid = 11;
  if (!this->_internal_uid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uid().data(), static_cast<int>(this->_internal_uid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.uid");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_uid(), target);
  }

  // string volume = 12;
  if (!this->_internal_volume().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_volume().data(), static_cast<int>(this->_internal_volume().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.volume");
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_volume(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesOHLCVResponseV1)
  return target;
}

size_t StreamAggregatesOHLCVResponseV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string aggregate = 1;
  if (!this->_internal_aggregate().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_aggregate());
  }

  // string class = 2;
  if (!this->_internal_class_().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_class_());
  }

  // string close = 3;
  if (!this->_internal_close().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_close());
  }

  // string exchange = 4;
  if (!this->_internal_exchange().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exchange());
  }

  // string high = 5;
  if (!this->_internal_high().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_high());
  }

  // string low = 6;
  if (!this->_internal_low().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_low());
  }

  // string open = 7;
  if (!this->_internal_open().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_open());
  }

  // string sequence_id = 8;
  if (!this->_internal_sequence_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sequence_id());
  }

  // string code = 9;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string uid = 11;
  if (!this->_internal_uid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uid());
  }

  // string volume = 12;
  if (!this->_internal_volume().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_volume());
  }

  // .google.protobuf.Timestamp timestamp = 10;
  if (this->_internal_has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesOHLCVResponseV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StreamAggregatesOHLCVResponseV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesOHLCVResponseV1::GetClassData() const { return &_class_data_; }

void StreamAggregatesOHLCVResponseV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<StreamAggregatesOHLCVResponseV1 *>(to)->MergeFrom(
      static_cast<const StreamAggregatesOHLCVResponseV1 &>(from));
}


void StreamAggregatesOHLCVResponseV1::MergeFrom(const StreamAggregatesOHLCVResponseV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_aggregate().empty()) {
    _internal_set_aggregate(from._internal_aggregate());
  }
  if (!from._internal_class_().empty()) {
    _internal_set_class_(from._internal_class_());
  }
  if (!from._internal_close().empty()) {
    _internal_set_close(from._internal_close());
  }
  if (!from._internal_exchange().empty()) {
    _internal_set_exchange(from._internal_exchange());
  }
  if (!from._internal_high().empty()) {
    _internal_set_high(from._internal_high());
  }
  if (!from._internal_low().empty()) {
    _internal_set_low(from._internal_low());
  }
  if (!from._internal_open().empty()) {
    _internal_set_open(from._internal_open());
  }
  if (!from._internal_sequence_id().empty()) {
    _internal_set_sequence_id(from._internal_sequence_id());
  }
  if (!from._internal_code().empty()) {
    _internal_set_code(from._internal_code());
  }
  if (!from._internal_uid().empty()) {
    _internal_set_uid(from._internal_uid());
  }
  if (!from._internal_volume().empty()) {
    _internal_set_volume(from._internal_volume());
  }
  if (from._internal_has_timestamp()) {
    _internal_mutable_timestamp()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_timestamp());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesOHLCVResponseV1::CopyFrom(const StreamAggregatesOHLCVResponseV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesOHLCVResponseV1::IsInitialized() const {
  return true;
}

void StreamAggregatesOHLCVResponseV1::InternalSwap(StreamAggregatesOHLCVResponseV1* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &aggregate_, GetArenaForAllocation(),
      &other->aggregate_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &class__, GetArenaForAllocation(),
      &other->class__, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &close_, GetArenaForAllocation(),
      &other->close_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &exchange_, GetArenaForAllocation(),
      &other->exchange_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &high_, GetArenaForAllocation(),
      &other->high_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &low_, GetArenaForAllocation(),
      &other->low_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &open_, GetArenaForAllocation(),
      &other->open_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &sequence_id_, GetArenaForAllocation(),
      &other->sequence_id_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, GetArenaForAllocation(),
      &other->code_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &uid_, GetArenaForAllocation(),
      &other->uid_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &volume_, GetArenaForAllocation(),
      &other->volume_, other->GetArenaForAllocation()
  );
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesOHLCVResponseV1::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesOHLCVResponseV1* Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesOHLCVResponseV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesOHLCVResponseV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
