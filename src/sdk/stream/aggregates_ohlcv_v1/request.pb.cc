// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_ohlcv_v1/request.proto

#include "sdk/stream/aggregates_ohlcv_v1/request.pb.h"

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
constexpr StreamAggregatesOHLCVRequestV1::StreamAggregatesOHLCVRequestV1(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : aggregate_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , instrument_criteria_(nullptr){}
struct StreamAggregatesOHLCVRequestV1DefaultTypeInternal {
  constexpr StreamAggregatesOHLCVRequestV1DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamAggregatesOHLCVRequestV1DefaultTypeInternal() {}
  union {
    StreamAggregatesOHLCVRequestV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamAggregatesOHLCVRequestV1DefaultTypeInternal _StreamAggregatesOHLCVRequestV1_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVRequestV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVRequestV1, instrument_criteria_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVRequestV1, aggregate_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::kaikosdk::StreamAggregatesOHLCVRequestV1)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamAggregatesOHLCVRequestV1_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,sdk/stream/aggregates_ohlcv_v1/request"
  ".proto\022\010kaikosdk\032\"sdk/core/instrument_cr"
  "iteria.proto\"n\n\036StreamAggregatesOHLCVReq"
  "uestV1\0229\n\023instrument_criteria\030\001 \001(\0132\034.ka"
  "ikosdk.InstrumentCriteria\022\021\n\taggregate\030\002"
  " \001(\tB\247\001\n(com.kaiko.sdk.stream.aggregates"
  "_ohlcv_v1P\001ZUgithub.com/challengerdeep/k"
  "aiko-go-sdk/stream/aggregates_ohlcv_v1;a"
  "ggregates_ohlcv_v1\252\002!KaikoSdk.Stream.Agg"
  "regatesOHLCVV1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_deps[1] = {
  &::descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto = {
  false, false, 382, descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto, "sdk/stream/aggregates_ohlcv_v1/request.proto", 
  &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto, file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesOHLCVRequestV1::_Internal {
 public:
  static const ::kaikosdk::InstrumentCriteria& instrument_criteria(const StreamAggregatesOHLCVRequestV1* msg);
};

const ::kaikosdk::InstrumentCriteria&
StreamAggregatesOHLCVRequestV1::_Internal::instrument_criteria(const StreamAggregatesOHLCVRequestV1* msg) {
  return *msg->instrument_criteria_;
}
void StreamAggregatesOHLCVRequestV1::clear_instrument_criteria() {
  if (GetArenaForAllocation() == nullptr && instrument_criteria_ != nullptr) {
    delete instrument_criteria_;
  }
  instrument_criteria_ = nullptr;
}
StreamAggregatesOHLCVRequestV1::StreamAggregatesOHLCVRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesOHLCVRequestV1)
}
StreamAggregatesOHLCVRequestV1::StreamAggregatesOHLCVRequestV1(const StreamAggregatesOHLCVRequestV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  aggregate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_aggregate().empty()) {
    aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_aggregate(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_instrument_criteria()) {
    instrument_criteria_ = new ::kaikosdk::InstrumentCriteria(*from.instrument_criteria_);
  } else {
    instrument_criteria_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesOHLCVRequestV1)
}

inline void StreamAggregatesOHLCVRequestV1::SharedCtor() {
aggregate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
instrument_criteria_ = nullptr;
}

StreamAggregatesOHLCVRequestV1::~StreamAggregatesOHLCVRequestV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesOHLCVRequestV1)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StreamAggregatesOHLCVRequestV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  aggregate_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete instrument_criteria_;
}

void StreamAggregatesOHLCVRequestV1::ArenaDtor(void* object) {
  StreamAggregatesOHLCVRequestV1* _this = reinterpret_cast< StreamAggregatesOHLCVRequestV1* >(object);
  (void)_this;
}
void StreamAggregatesOHLCVRequestV1::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StreamAggregatesOHLCVRequestV1::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamAggregatesOHLCVRequestV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  aggregate_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && instrument_criteria_ != nullptr) {
    delete instrument_criteria_;
  }
  instrument_criteria_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesOHLCVRequestV1::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_instrument_criteria(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string aggregate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_aggregate();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate"));
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

::PROTOBUF_NAMESPACE_ID::uint8* StreamAggregatesOHLCVRequestV1::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  if (this->_internal_has_instrument_criteria()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::instrument_criteria(this), target, stream);
  }

  // string aggregate = 2;
  if (!this->_internal_aggregate().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_aggregate().data(), static_cast<int>(this->_internal_aggregate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_aggregate(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesOHLCVRequestV1)
  return target;
}

size_t StreamAggregatesOHLCVRequestV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string aggregate = 2;
  if (!this->_internal_aggregate().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_aggregate());
  }

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  if (this->_internal_has_instrument_criteria()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *instrument_criteria_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesOHLCVRequestV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StreamAggregatesOHLCVRequestV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesOHLCVRequestV1::GetClassData() const { return &_class_data_; }

void StreamAggregatesOHLCVRequestV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<StreamAggregatesOHLCVRequestV1 *>(to)->MergeFrom(
      static_cast<const StreamAggregatesOHLCVRequestV1 &>(from));
}


void StreamAggregatesOHLCVRequestV1::MergeFrom(const StreamAggregatesOHLCVRequestV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_aggregate().empty()) {
    _internal_set_aggregate(from._internal_aggregate());
  }
  if (from._internal_has_instrument_criteria()) {
    _internal_mutable_instrument_criteria()->::kaikosdk::InstrumentCriteria::MergeFrom(from._internal_instrument_criteria());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesOHLCVRequestV1::CopyFrom(const StreamAggregatesOHLCVRequestV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesOHLCVRequestV1::IsInitialized() const {
  return true;
}

void StreamAggregatesOHLCVRequestV1::InternalSwap(StreamAggregatesOHLCVRequestV1* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &aggregate_, GetArenaForAllocation(),
      &other->aggregate_, other->GetArenaForAllocation()
  );
  swap(instrument_criteria_, other->instrument_criteria_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesOHLCVRequestV1::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesOHLCVRequestV1* Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesOHLCVRequestV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesOHLCVRequestV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
