// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_direct_exchange_rate_v1/response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
#include "sdk/core/source_data.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto;
namespace kaikosdk {
class StreamAggregatesDirectExchangeRateResponseV1;
struct StreamAggregatesDirectExchangeRateResponseV1DefaultTypeInternal;
extern StreamAggregatesDirectExchangeRateResponseV1DefaultTypeInternal _StreamAggregatesDirectExchangeRateResponseV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatesDirectExchangeRateResponseV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1) */ {
 public:
  inline StreamAggregatesDirectExchangeRateResponseV1() : StreamAggregatesDirectExchangeRateResponseV1(nullptr) {}
  ~StreamAggregatesDirectExchangeRateResponseV1() override;
  explicit constexpr StreamAggregatesDirectExchangeRateResponseV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatesDirectExchangeRateResponseV1(const StreamAggregatesDirectExchangeRateResponseV1& from);
  StreamAggregatesDirectExchangeRateResponseV1(StreamAggregatesDirectExchangeRateResponseV1&& from) noexcept
    : StreamAggregatesDirectExchangeRateResponseV1() {
    *this = ::std::move(from);
  }

  inline StreamAggregatesDirectExchangeRateResponseV1& operator=(const StreamAggregatesDirectExchangeRateResponseV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatesDirectExchangeRateResponseV1& operator=(StreamAggregatesDirectExchangeRateResponseV1&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StreamAggregatesDirectExchangeRateResponseV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatesDirectExchangeRateResponseV1* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatesDirectExchangeRateResponseV1*>(
               &_StreamAggregatesDirectExchangeRateResponseV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatesDirectExchangeRateResponseV1& a, StreamAggregatesDirectExchangeRateResponseV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatesDirectExchangeRateResponseV1* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StreamAggregatesDirectExchangeRateResponseV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StreamAggregatesDirectExchangeRateResponseV1* New() const final {
    return new StreamAggregatesDirectExchangeRateResponseV1();
  }

  StreamAggregatesDirectExchangeRateResponseV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StreamAggregatesDirectExchangeRateResponseV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamAggregatesDirectExchangeRateResponseV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const StreamAggregatesDirectExchangeRateResponseV1& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StreamAggregatesDirectExchangeRateResponseV1* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1";
  }
  protected:
  explicit StreamAggregatesDirectExchangeRateResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSourcesFieldNumber = 5,
    kAggregateFieldNumber = 1,
    kCodeFieldNumber = 2,
    kPriceFieldNumber = 3,
    kSequenceIdFieldNumber = 4,
    kUidFieldNumber = 7,
    kTimestampFieldNumber = 6,
  };
  // repeated .kaikosdk.SourceData sources = 5;
  int sources_size() const;
  private:
  int _internal_sources_size() const;
  public:
  void clear_sources();
  ::kaikosdk::SourceData* mutable_sources(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >*
      mutable_sources();
  private:
  const ::kaikosdk::SourceData& _internal_sources(int index) const;
  ::kaikosdk::SourceData* _internal_add_sources();
  public:
  const ::kaikosdk::SourceData& sources(int index) const;
  ::kaikosdk::SourceData* add_sources();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >&
      sources() const;

  // string aggregate = 1;
  void clear_aggregate();
  const std::string& aggregate() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_aggregate(ArgT0&& arg0, ArgT... args);
  std::string* mutable_aggregate();
  PROTOBUF_MUST_USE_RESULT std::string* release_aggregate();
  void set_allocated_aggregate(std::string* aggregate);
  private:
  const std::string& _internal_aggregate() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_aggregate(const std::string& value);
  std::string* _internal_mutable_aggregate();
  public:

  // string code = 2;
  void clear_code();
  const std::string& code() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_code(ArgT0&& arg0, ArgT... args);
  std::string* mutable_code();
  PROTOBUF_MUST_USE_RESULT std::string* release_code();
  void set_allocated_code(std::string* code);
  private:
  const std::string& _internal_code() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_code(const std::string& value);
  std::string* _internal_mutable_code();
  public:

  // string price = 3;
  void clear_price();
  const std::string& price() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_price(ArgT0&& arg0, ArgT... args);
  std::string* mutable_price();
  PROTOBUF_MUST_USE_RESULT std::string* release_price();
  void set_allocated_price(std::string* price);
  private:
  const std::string& _internal_price() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_price(const std::string& value);
  std::string* _internal_mutable_price();
  public:

  // string sequence_id = 4;
  void clear_sequence_id();
  const std::string& sequence_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sequence_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sequence_id();
  PROTOBUF_MUST_USE_RESULT std::string* release_sequence_id();
  void set_allocated_sequence_id(std::string* sequence_id);
  private:
  const std::string& _internal_sequence_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sequence_id(const std::string& value);
  std::string* _internal_mutable_sequence_id();
  public:

  // string uid = 7;
  void clear_uid();
  const std::string& uid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uid();
  PROTOBUF_MUST_USE_RESULT std::string* release_uid();
  void set_allocated_uid(std::string* uid);
  private:
  const std::string& _internal_uid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uid(const std::string& value);
  std::string* _internal_mutable_uid();
  public:

  // .google.protobuf.Timestamp timestamp = 6;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_MUST_USE_RESULT PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData > sources_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aggregate_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr price_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sequence_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uid_;
  PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatesDirectExchangeRateResponseV1

// string aggregate = 1;
inline void StreamAggregatesDirectExchangeRateResponseV1::clear_aggregate() {
  aggregate_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::aggregate() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate)
  return _internal_aggregate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateResponseV1::set_aggregate(ArgT0&& arg0, ArgT... args) {
 
 aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate)
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::mutable_aggregate() {
  std::string* _s = _internal_mutable_aggregate();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::_internal_aggregate() const {
  return aggregate_.Get();
}
inline void StreamAggregatesDirectExchangeRateResponseV1::_internal_set_aggregate(const std::string& value) {
  
  aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::_internal_mutable_aggregate() {
  
  return aggregate_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::release_aggregate() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate)
  return aggregate_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void StreamAggregatesDirectExchangeRateResponseV1::set_allocated_aggregate(std::string* aggregate) {
  if (aggregate != nullptr) {
    
  } else {
    
  }
  aggregate_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), aggregate,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate)
}

// string code = 2;
inline void StreamAggregatesDirectExchangeRateResponseV1::clear_code() {
  code_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::code() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code)
  return _internal_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateResponseV1::set_code(ArgT0&& arg0, ArgT... args) {
 
 code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code)
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::mutable_code() {
  std::string* _s = _internal_mutable_code();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::_internal_code() const {
  return code_.Get();
}
inline void StreamAggregatesDirectExchangeRateResponseV1::_internal_set_code(const std::string& value) {
  
  code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::_internal_mutable_code() {
  
  return code_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::release_code() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code)
  return code_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void StreamAggregatesDirectExchangeRateResponseV1::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    
  } else {
    
  }
  code_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), code,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code)
}

// string price = 3;
inline void StreamAggregatesDirectExchangeRateResponseV1::clear_price() {
  price_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::price() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price)
  return _internal_price();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateResponseV1::set_price(ArgT0&& arg0, ArgT... args) {
 
 price_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price)
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::mutable_price() {
  std::string* _s = _internal_mutable_price();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::_internal_price() const {
  return price_.Get();
}
inline void StreamAggregatesDirectExchangeRateResponseV1::_internal_set_price(const std::string& value) {
  
  price_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::_internal_mutable_price() {
  
  return price_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::release_price() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price)
  return price_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void StreamAggregatesDirectExchangeRateResponseV1::set_allocated_price(std::string* price) {
  if (price != nullptr) {
    
  } else {
    
  }
  price_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), price,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price)
}

// string sequence_id = 4;
inline void StreamAggregatesDirectExchangeRateResponseV1::clear_sequence_id() {
  sequence_id_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::sequence_id() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id)
  return _internal_sequence_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateResponseV1::set_sequence_id(ArgT0&& arg0, ArgT... args) {
 
 sequence_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id)
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::mutable_sequence_id() {
  std::string* _s = _internal_mutable_sequence_id();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::_internal_sequence_id() const {
  return sequence_id_.Get();
}
inline void StreamAggregatesDirectExchangeRateResponseV1::_internal_set_sequence_id(const std::string& value) {
  
  sequence_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::_internal_mutable_sequence_id() {
  
  return sequence_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::release_sequence_id() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id)
  return sequence_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void StreamAggregatesDirectExchangeRateResponseV1::set_allocated_sequence_id(std::string* sequence_id) {
  if (sequence_id != nullptr) {
    
  } else {
    
  }
  sequence_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sequence_id,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id)
}

// repeated .kaikosdk.SourceData sources = 5;
inline int StreamAggregatesDirectExchangeRateResponseV1::_internal_sources_size() const {
  return sources_.size();
}
inline int StreamAggregatesDirectExchangeRateResponseV1::sources_size() const {
  return _internal_sources_size();
}
inline ::kaikosdk::SourceData* StreamAggregatesDirectExchangeRateResponseV1::mutable_sources(int index) {
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sources)
  return sources_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >*
StreamAggregatesDirectExchangeRateResponseV1::mutable_sources() {
  // @@protoc_insertion_point(field_mutable_list:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sources)
  return &sources_;
}
inline const ::kaikosdk::SourceData& StreamAggregatesDirectExchangeRateResponseV1::_internal_sources(int index) const {
  return sources_.Get(index);
}
inline const ::kaikosdk::SourceData& StreamAggregatesDirectExchangeRateResponseV1::sources(int index) const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sources)
  return _internal_sources(index);
}
inline ::kaikosdk::SourceData* StreamAggregatesDirectExchangeRateResponseV1::_internal_add_sources() {
  return sources_.Add();
}
inline ::kaikosdk::SourceData* StreamAggregatesDirectExchangeRateResponseV1::add_sources() {
  ::kaikosdk::SourceData* _add = _internal_add_sources();
  // @@protoc_insertion_point(field_add:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sources)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >&
StreamAggregatesDirectExchangeRateResponseV1::sources() const {
  // @@protoc_insertion_point(field_list:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sources)
  return sources_;
}

// .google.protobuf.Timestamp timestamp = 6;
inline bool StreamAggregatesDirectExchangeRateResponseV1::_internal_has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != nullptr;
}
inline bool StreamAggregatesDirectExchangeRateResponseV1::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatesDirectExchangeRateResponseV1::_internal_timestamp() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp&>(
      PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatesDirectExchangeRateResponseV1::timestamp() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.timestamp)
  return _internal_timestamp();
}
inline void StreamAggregatesDirectExchangeRateResponseV1::unsafe_arena_set_allocated_timestamp(
    PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.timestamp)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesDirectExchangeRateResponseV1::release_timestamp() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesDirectExchangeRateResponseV1::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.timestamp)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesDirectExchangeRateResponseV1::_internal_mutable_timestamp() {
  
  if (timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    timestamp_ = p;
  }
  return timestamp_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesDirectExchangeRateResponseV1::mutable_timestamp() {
  PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_timestamp();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.timestamp)
  return _msg;
}
inline void StreamAggregatesDirectExchangeRateResponseV1::set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp));
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.timestamp)
}

// string uid = 7;
inline void StreamAggregatesDirectExchangeRateResponseV1::clear_uid() {
  uid_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::uid() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid)
  return _internal_uid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateResponseV1::set_uid(ArgT0&& arg0, ArgT... args) {
 
 uid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid)
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::mutable_uid() {
  std::string* _s = _internal_mutable_uid();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateResponseV1::_internal_uid() const {
  return uid_.Get();
}
inline void StreamAggregatesDirectExchangeRateResponseV1::_internal_set_uid(const std::string& value) {
  
  uid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::_internal_mutable_uid() {
  
  return uid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateResponseV1::release_uid() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid)
  return uid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void StreamAggregatesDirectExchangeRateResponseV1::set_allocated_uid(std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  uid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uid,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto
