// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/window.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fwindow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fwindow_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/duration.pb.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fcore_2fwindow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fcore_2fwindow_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fwindow_2eproto;
namespace kaikosdk {
class Window;
struct WindowDefaultTypeInternal;
extern WindowDefaultTypeInternal _Window_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::Window* Arena::CreateMaybeMessage<::kaikosdk::Window>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class Window final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.Window) */ {
 public:
  inline Window() : Window(nullptr) {}
  ~Window() override;
  explicit PROTOBUF_CONSTEXPR Window(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Window(const Window& from);
  Window(Window&& from) noexcept
    : Window() {
    *this = ::std::move(from);
  }

  inline Window& operator=(const Window& from) {
    CopyFrom(from);
    return *this;
  }
  inline Window& operator=(Window&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
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
  static const Window& default_instance() {
    return *internal_default_instance();
  }
  static inline const Window* internal_default_instance() {
    return reinterpret_cast<const Window*>(
               &_Window_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Window& a, Window& b) {
    a.Swap(&b);
  }
  inline void Swap(Window* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Window* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Window* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Window>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Window& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Window& from) {
    Window::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Window* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.Window";
  }
  protected:
  explicit Window(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStartTimeFieldNumber = 1,
    kEndTimeFieldNumber = 2,
    kDurationFieldNumber = 3,
  };
  // .google.protobuf.Timestamp start_time = 1;
  bool has_start_time() const;
  private:
  bool _internal_has_start_time() const;
  public:
  void clear_start_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& start_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_start_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_start_time();
  void set_allocated_start_time(::PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_start_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_start_time();
  public:
  void unsafe_arena_set_allocated_start_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_start_time();

  // .google.protobuf.Timestamp end_time = 2;
  bool has_end_time() const;
  private:
  bool _internal_has_end_time() const;
  public:
  void clear_end_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& end_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_end_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_end_time();
  void set_allocated_end_time(::PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_end_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_end_time();
  public:
  void unsafe_arena_set_allocated_end_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_end_time();

  // .google.protobuf.Duration duration = 3;
  bool has_duration() const;
  private:
  bool _internal_has_duration() const;
  public:
  void clear_duration();
  const ::PROTOBUF_NAMESPACE_ID::Duration& duration() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Duration* release_duration();
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_duration();
  void set_allocated_duration(::PROTOBUF_NAMESPACE_ID::Duration* duration);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_duration() const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_duration();
  public:
  void unsafe_arena_set_allocated_duration(
      ::PROTOBUF_NAMESPACE_ID::Duration* duration);
  ::PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_duration();

  // @@protoc_insertion_point(class_scope:kaikosdk.Window)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time_;
    ::PROTOBUF_NAMESPACE_ID::Duration* duration_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fcore_2fwindow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Window

// .google.protobuf.Timestamp start_time = 1;
inline bool Window::_internal_has_start_time() const {
  return this != internal_default_instance() && _impl_.start_time_ != nullptr;
}
inline bool Window::has_start_time() const {
  return _internal_has_start_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Window::_internal_start_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.start_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Window::start_time() const {
  // @@protoc_insertion_point(field_get:kaikosdk.Window.start_time)
  return _internal_start_time();
}
inline void Window::unsafe_arena_set_allocated_start_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_time_);
  }
  _impl_.start_time_ = start_time;
  if (start_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.Window.start_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::release_start_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_time_;
  _impl_.start_time_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::unsafe_arena_release_start_time() {
  // @@protoc_insertion_point(field_release:kaikosdk.Window.start_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_time_;
  _impl_.start_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::_internal_mutable_start_time() {
  
  if (_impl_.start_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.start_time_ = p;
  }
  return _impl_.start_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::mutable_start_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start_time();
  // @@protoc_insertion_point(field_mutable:kaikosdk.Window.start_time)
  return _msg;
}
inline void Window::set_allocated_start_time(::PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_time_);
  }
  if (start_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time));
    if (message_arena != submessage_arena) {
      start_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.start_time_ = start_time;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.Window.start_time)
}

// .google.protobuf.Timestamp end_time = 2;
inline bool Window::_internal_has_end_time() const {
  return this != internal_default_instance() && _impl_.end_time_ != nullptr;
}
inline bool Window::has_end_time() const {
  return _internal_has_end_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Window::_internal_end_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.end_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Window::end_time() const {
  // @@protoc_insertion_point(field_get:kaikosdk.Window.end_time)
  return _internal_end_time();
}
inline void Window::unsafe_arena_set_allocated_end_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_time_);
  }
  _impl_.end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.Window.end_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::release_end_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_time_;
  _impl_.end_time_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::unsafe_arena_release_end_time() {
  // @@protoc_insertion_point(field_release:kaikosdk.Window.end_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_time_;
  _impl_.end_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::_internal_mutable_end_time() {
  
  if (_impl_.end_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.end_time_ = p;
  }
  return _impl_.end_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Window::mutable_end_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_end_time();
  // @@protoc_insertion_point(field_mutable:kaikosdk.Window.end_time)
  return _msg;
}
inline void Window::set_allocated_end_time(::PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_time_);
  }
  if (end_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time));
    if (message_arena != submessage_arena) {
      end_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.end_time_ = end_time;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.Window.end_time)
}

// .google.protobuf.Duration duration = 3;
inline bool Window::_internal_has_duration() const {
  return this != internal_default_instance() && _impl_.duration_ != nullptr;
}
inline bool Window::has_duration() const {
  return _internal_has_duration();
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& Window::_internal_duration() const {
  const ::PROTOBUF_NAMESPACE_ID::Duration* p = _impl_.duration_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Duration&>(
      ::PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& Window::duration() const {
  // @@protoc_insertion_point(field_get:kaikosdk.Window.duration)
  return _internal_duration();
}
inline void Window::unsafe_arena_set_allocated_duration(
    ::PROTOBUF_NAMESPACE_ID::Duration* duration) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.duration_);
  }
  _impl_.duration_ = duration;
  if (duration) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.Window.duration)
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* Window::release_duration() {
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.duration_;
  _impl_.duration_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Duration* Window::unsafe_arena_release_duration() {
  // @@protoc_insertion_point(field_release:kaikosdk.Window.duration)
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.duration_;
  _impl_.duration_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* Window::_internal_mutable_duration() {
  
  if (_impl_.duration_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Duration>(GetArenaForAllocation());
    _impl_.duration_ = p;
  }
  return _impl_.duration_;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* Window::mutable_duration() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _msg = _internal_mutable_duration();
  // @@protoc_insertion_point(field_mutable:kaikosdk.Window.duration)
  return _msg;
}
inline void Window::set_allocated_duration(::PROTOBUF_NAMESPACE_ID::Duration* duration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.duration_);
  }
  if (duration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(duration));
    if (message_arena != submessage_arena) {
      duration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, duration, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.duration_ = duration;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.Window.duration)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fwindow_2eproto