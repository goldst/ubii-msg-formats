// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/general/error.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fgeneral_2ferror_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fgeneral_2ferror_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fgeneral_2ferror_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fgeneral_2ferror_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgeneral_2ferror_2eproto;
namespace ubii {
namespace general {
class Error;
class ErrorDefaultTypeInternal;
extern ErrorDefaultTypeInternal _Error_default_instance_;
}  // namespace general
}  // namespace ubii
PROTOBUF_NAMESPACE_OPEN
template<> ::ubii::general::Error* Arena::CreateMaybeMessage<::ubii::general::Error>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ubii {
namespace general {

// ===================================================================

class Error :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ubii.general.Error) */ {
 public:
  Error();
  virtual ~Error();

  Error(const Error& from);
  Error(Error&& from) noexcept
    : Error() {
    *this = ::std::move(from);
  }

  inline Error& operator=(const Error& from) {
    CopyFrom(from);
    return *this;
  }
  inline Error& operator=(Error&& from) noexcept {
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
  static const Error& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Error* internal_default_instance() {
    return reinterpret_cast<const Error*>(
               &_Error_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Error& a, Error& b) {
    a.Swap(&b);
  }
  inline void Swap(Error* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Error* New() const final {
    return CreateMaybeMessage<Error>(nullptr);
  }

  Error* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Error>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Error& from);
  void MergeFrom(const Error& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Error* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ubii.general.Error";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fgeneral_2ferror_2eproto);
    return ::descriptor_table_proto_2fgeneral_2ferror_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTitleFieldNumber = 1,
    kMessageFieldNumber = 2,
    kStackFieldNumber = 3,
  };
  // string title = 1;
  void clear_title();
  const std::string& title() const;
  void set_title(const std::string& value);
  void set_title(std::string&& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  std::string* mutable_title();
  std::string* release_title();
  void set_allocated_title(std::string* title);
  private:
  const std::string& _internal_title() const;
  void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // string stack = 3;
  void clear_stack();
  const std::string& stack() const;
  void set_stack(const std::string& value);
  void set_stack(std::string&& value);
  void set_stack(const char* value);
  void set_stack(const char* value, size_t size);
  std::string* mutable_stack();
  std::string* release_stack();
  void set_allocated_stack(std::string* stack);
  private:
  const std::string& _internal_stack() const;
  void _internal_set_stack(const std::string& value);
  std::string* _internal_mutable_stack();
  public:

  // @@protoc_insertion_point(class_scope:ubii.general.Error)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr stack_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fgeneral_2ferror_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Error

// string title = 1;
inline void Error::clear_title() {
  title_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Error::title() const {
  // @@protoc_insertion_point(field_get:ubii.general.Error.title)
  return _internal_title();
}
inline void Error::set_title(const std::string& value) {
  _internal_set_title(value);
  // @@protoc_insertion_point(field_set:ubii.general.Error.title)
}
inline std::string* Error::mutable_title() {
  // @@protoc_insertion_point(field_mutable:ubii.general.Error.title)
  return _internal_mutable_title();
}
inline const std::string& Error::_internal_title() const {
  return title_.GetNoArena();
}
inline void Error::_internal_set_title(const std::string& value) {
  
  title_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Error::set_title(std::string&& value) {
  
  title_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.general.Error.title)
}
inline void Error::set_title(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  title_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.general.Error.title)
}
inline void Error::set_title(const char* value, size_t size) {
  
  title_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.general.Error.title)
}
inline std::string* Error::_internal_mutable_title() {
  
  return title_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Error::release_title() {
  // @@protoc_insertion_point(field_release:ubii.general.Error.title)
  
  return title_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Error::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  title_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:ubii.general.Error.title)
}

// string message = 2;
inline void Error::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Error::message() const {
  // @@protoc_insertion_point(field_get:ubii.general.Error.message)
  return _internal_message();
}
inline void Error::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:ubii.general.Error.message)
}
inline std::string* Error::mutable_message() {
  // @@protoc_insertion_point(field_mutable:ubii.general.Error.message)
  return _internal_mutable_message();
}
inline const std::string& Error::_internal_message() const {
  return message_.GetNoArena();
}
inline void Error::_internal_set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Error::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.general.Error.message)
}
inline void Error::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.general.Error.message)
}
inline void Error::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.general.Error.message)
}
inline std::string* Error::_internal_mutable_message() {
  
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Error::release_message() {
  // @@protoc_insertion_point(field_release:ubii.general.Error.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Error::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:ubii.general.Error.message)
}

// string stack = 3;
inline void Error::clear_stack() {
  stack_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Error::stack() const {
  // @@protoc_insertion_point(field_get:ubii.general.Error.stack)
  return _internal_stack();
}
inline void Error::set_stack(const std::string& value) {
  _internal_set_stack(value);
  // @@protoc_insertion_point(field_set:ubii.general.Error.stack)
}
inline std::string* Error::mutable_stack() {
  // @@protoc_insertion_point(field_mutable:ubii.general.Error.stack)
  return _internal_mutable_stack();
}
inline const std::string& Error::_internal_stack() const {
  return stack_.GetNoArena();
}
inline void Error::_internal_set_stack(const std::string& value) {
  
  stack_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Error::set_stack(std::string&& value) {
  
  stack_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.general.Error.stack)
}
inline void Error::set_stack(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  stack_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.general.Error.stack)
}
inline void Error::set_stack(const char* value, size_t size) {
  
  stack_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.general.Error.stack)
}
inline std::string* Error::_internal_mutable_stack() {
  
  return stack_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Error::release_stack() {
  // @@protoc_insertion_point(field_release:ubii.general.Error.stack)
  
  return stack_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Error::set_allocated_stack(std::string* stack) {
  if (stack != nullptr) {
    
  } else {
    
  }
  stack_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), stack);
  // @@protoc_insertion_point(field_set_allocated:ubii.general.Error.stack)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace general
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fgeneral_2ferror_2eproto
