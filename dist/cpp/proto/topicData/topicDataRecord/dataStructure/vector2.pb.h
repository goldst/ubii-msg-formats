// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/vector2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto;
namespace ubii {
namespace dataStructure {
class Vector2;
class Vector2DefaultTypeInternal;
extern Vector2DefaultTypeInternal _Vector2_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
PROTOBUF_NAMESPACE_OPEN
template<> ::ubii::dataStructure::Vector2* Arena::CreateMaybeMessage<::ubii::dataStructure::Vector2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ubii {
namespace dataStructure {

// ===================================================================

class Vector2 PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.Vector2) */ {
 public:
  inline Vector2() : Vector2(nullptr) {}
  virtual ~Vector2();

  Vector2(const Vector2& from);
  Vector2(Vector2&& from) noexcept
    : Vector2() {
    *this = ::std::move(from);
  }

  inline Vector2& operator=(const Vector2& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector2& operator=(Vector2&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const Vector2& default_instance();

  static inline const Vector2* internal_default_instance() {
    return reinterpret_cast<const Vector2*>(
               &_Vector2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vector2& a, Vector2& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector2* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vector2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vector2* New() const final {
    return CreateMaybeMessage<Vector2>(nullptr);
  }

  Vector2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vector2>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vector2& from);
  void MergeFrom(const Vector2& from);
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
  void InternalSwap(Vector2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ubii.dataStructure.Vector2";
  }
  protected:
  explicit Vector2(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto);
    return ::descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // @@protoc_insertion_point(class_scope:ubii.dataStructure.Vector2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double x_;
  double y_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector2

// double x = 1;
inline void Vector2::clear_x() {
  x_ = 0;
}
inline double Vector2::_internal_x() const {
  return x_;
}
inline double Vector2::x() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector2.x)
  return _internal_x();
}
inline void Vector2::_internal_set_x(double value) {
  
  x_ = value;
}
inline void Vector2::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector2.x)
}

// double y = 2;
inline void Vector2::clear_y() {
  y_ = 0;
}
inline double Vector2::_internal_y() const {
  return y_;
}
inline double Vector2::y() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector2.y)
  return _internal_y();
}
inline void Vector2::_internal_set_y(double value) {
  
  y_ = value;
}
inline void Vector2::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector2.y)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dataStructure
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto
