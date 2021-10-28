// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/source.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fsource_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fsource_2eproto

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
#include "sdk/core/source_data.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fcore_2fsource_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fcore_2fsource_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fsource_2eproto;
namespace kaikosdk {
class Source;
struct SourceDefaultTypeInternal;
extern SourceDefaultTypeInternal _Source_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::Source* Arena::CreateMaybeMessage<::kaikosdk::Source>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class Source final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.Source) */ {
 public:
  inline Source() : Source(nullptr) {}
  ~Source() override;
  explicit constexpr Source(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Source(const Source& from);
  Source(Source&& from) noexcept
    : Source() {
    *this = ::std::move(from);
  }

  inline Source& operator=(const Source& from) {
    CopyFrom(from);
    return *this;
  }
  inline Source& operator=(Source&& from) noexcept {
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
  static const Source& default_instance() {
    return *internal_default_instance();
  }
  static inline const Source* internal_default_instance() {
    return reinterpret_cast<const Source*>(
               &_Source_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Source& a, Source& b) {
    a.Swap(&b);
  }
  inline void Swap(Source* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Source* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Source* New() const final {
    return new Source();
  }

  Source* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Source>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Source& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Source& from);
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
  void InternalSwap(Source* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.Source";
  }
  protected:
  explicit Source(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kDataFieldNumber = 1,
    kPriceFieldNumber = 2,
  };
  // repeated .kaikosdk.SourceData data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  ::kaikosdk::SourceData* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >*
      mutable_data();
  private:
  const ::kaikosdk::SourceData& _internal_data(int index) const;
  ::kaikosdk::SourceData* _internal_add_data();
  public:
  const ::kaikosdk::SourceData& data(int index) const;
  ::kaikosdk::SourceData* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >&
      data() const;

  // string price = 2;
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

  // @@protoc_insertion_point(class_scope:kaikosdk.Source)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData > data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr price_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sdk_2fcore_2fsource_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Source

// repeated .kaikosdk.SourceData data = 1;
inline int Source::_internal_data_size() const {
  return data_.size();
}
inline int Source::data_size() const {
  return _internal_data_size();
}
inline ::kaikosdk::SourceData* Source::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:kaikosdk.Source.data)
  return data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >*
Source::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:kaikosdk.Source.data)
  return &data_;
}
inline const ::kaikosdk::SourceData& Source::_internal_data(int index) const {
  return data_.Get(index);
}
inline const ::kaikosdk::SourceData& Source::data(int index) const {
  // @@protoc_insertion_point(field_get:kaikosdk.Source.data)
  return _internal_data(index);
}
inline ::kaikosdk::SourceData* Source::_internal_add_data() {
  return data_.Add();
}
inline ::kaikosdk::SourceData* Source::add_data() {
  ::kaikosdk::SourceData* _add = _internal_add_data();
  // @@protoc_insertion_point(field_add:kaikosdk.Source.data)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::kaikosdk::SourceData >&
Source::data() const {
  // @@protoc_insertion_point(field_list:kaikosdk.Source.data)
  return data_;
}

// string price = 2;
inline void Source::clear_price() {
  price_.ClearToEmpty();
}
inline const std::string& Source::price() const {
  // @@protoc_insertion_point(field_get:kaikosdk.Source.price)
  return _internal_price();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Source::set_price(ArgT0&& arg0, ArgT... args) {
 
 price_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.Source.price)
}
inline std::string* Source::mutable_price() {
  std::string* _s = _internal_mutable_price();
  // @@protoc_insertion_point(field_mutable:kaikosdk.Source.price)
  return _s;
}
inline const std::string& Source::_internal_price() const {
  return price_.Get();
}
inline void Source::_internal_set_price(const std::string& value) {
  
  price_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Source::_internal_mutable_price() {
  
  return price_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Source::release_price() {
  // @@protoc_insertion_point(field_release:kaikosdk.Source.price)
  return price_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Source::set_allocated_price(std::string* price) {
  if (price != nullptr) {
    
  } else {
    
  }
  price_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), price,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.Source.price)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fsource_2eproto
