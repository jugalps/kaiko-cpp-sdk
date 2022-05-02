// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/index_v1/request.proto

#include "sdk/stream/index_v1/request.pb.h"

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
constexpr StreamIndexServiceRequestV1::StreamIndexServiceRequestV1(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : commodities_()
  , _commodities_cached_byte_size_(0)
  , index_code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct StreamIndexServiceRequestV1DefaultTypeInternal {
  constexpr StreamIndexServiceRequestV1DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamIndexServiceRequestV1DefaultTypeInternal() {}
  union {
    StreamIndexServiceRequestV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamIndexServiceRequestV1DefaultTypeInternal _StreamIndexServiceRequestV1_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2findex_5fv1_2frequest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2findex_5fv1_2frequest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2findex_5fv1_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2findex_5fv1_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexServiceRequestV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexServiceRequestV1, index_code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexServiceRequestV1, commodities_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamIndexServiceRequestV1)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamIndexServiceRequestV1_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2findex_5fv1_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!sdk/stream/index_v1/request.proto\022\010kai"
  "kosdk\032#sdk/stream/index_v1/commodity.pro"
  "to\"f\n\033StreamIndexServiceRequestV1\022\022\n\nind"
  "ex_code\030\001 \001(\t\0223\n\013commodities\030\002 \003(\0162\036.kai"
  "kosdk.StreamIndexCommodityBw\n\035com.kaiko."
  "sdk.stream.index_v1P\001Z:github.com/kaikod"
  "ata/kaiko-go-sdk/stream/index_v1;index_v"
  "1\252\002\027KaikoSdk.Stream.IndexV1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_deps[1] = {
  &::descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto = {
  false, false, 315, descriptor_table_protodef_sdk_2fstream_2findex_5fv1_2frequest_2eproto, "sdk/stream/index_v1/request.proto", 
  &descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2findex_5fv1_2frequest_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2findex_5fv1_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2findex_5fv1_2frequest_2eproto, file_level_service_descriptors_sdk_2fstream_2findex_5fv1_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2findex_5fv1_2frequest_2eproto(&descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamIndexServiceRequestV1::_Internal {
 public:
};

StreamIndexServiceRequestV1::StreamIndexServiceRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  commodities_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamIndexServiceRequestV1)
}
StreamIndexServiceRequestV1::StreamIndexServiceRequestV1(const StreamIndexServiceRequestV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      commodities_(from.commodities_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  index_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    index_code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_index_code().empty()) {
    index_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_index_code(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamIndexServiceRequestV1)
}

inline void StreamIndexServiceRequestV1::SharedCtor() {
index_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  index_code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StreamIndexServiceRequestV1::~StreamIndexServiceRequestV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamIndexServiceRequestV1)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StreamIndexServiceRequestV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  index_code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void StreamIndexServiceRequestV1::ArenaDtor(void* object) {
  StreamIndexServiceRequestV1* _this = reinterpret_cast< StreamIndexServiceRequestV1* >(object);
  (void)_this;
}
void StreamIndexServiceRequestV1::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StreamIndexServiceRequestV1::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamIndexServiceRequestV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamIndexServiceRequestV1)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  commodities_.Clear();
  index_code_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamIndexServiceRequestV1::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string index_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_index_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamIndexServiceRequestV1.index_code"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .kaikosdk.StreamIndexCommodity commodities = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_commodities(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_commodities(static_cast<::kaikosdk::StreamIndexCommodity>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StreamIndexServiceRequestV1::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamIndexServiceRequestV1)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string index_code = 1;
  if (!this->_internal_index_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_index_code().data(), static_cast<int>(this->_internal_index_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamIndexServiceRequestV1.index_code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_index_code(), target);
  }

  // repeated .kaikosdk.StreamIndexCommodity commodities = 2;
  {
    int byte_size = _commodities_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          2, commodities_, byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamIndexServiceRequestV1)
  return target;
}

size_t StreamIndexServiceRequestV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamIndexServiceRequestV1)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .kaikosdk.StreamIndexCommodity commodities = 2;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_commodities_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_commodities(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<int32_t>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _commodities_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string index_code = 1;
  if (!this->_internal_index_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_index_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamIndexServiceRequestV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StreamIndexServiceRequestV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamIndexServiceRequestV1::GetClassData() const { return &_class_data_; }

void StreamIndexServiceRequestV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<StreamIndexServiceRequestV1 *>(to)->MergeFrom(
      static_cast<const StreamIndexServiceRequestV1 &>(from));
}


void StreamIndexServiceRequestV1::MergeFrom(const StreamIndexServiceRequestV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamIndexServiceRequestV1)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  commodities_.MergeFrom(from.commodities_);
  if (!from._internal_index_code().empty()) {
    _internal_set_index_code(from._internal_index_code());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamIndexServiceRequestV1::CopyFrom(const StreamIndexServiceRequestV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamIndexServiceRequestV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamIndexServiceRequestV1::IsInitialized() const {
  return true;
}

void StreamIndexServiceRequestV1::InternalSwap(StreamIndexServiceRequestV1* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  commodities_.InternalSwap(&other->commodities_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &index_code_, lhs_arena,
      &other->index_code_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamIndexServiceRequestV1::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2findex_5fv1_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamIndexServiceRequestV1* Arena::CreateMaybeMessage< ::kaikosdk::StreamIndexServiceRequestV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamIndexServiceRequestV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
