// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/vector4.proto

#ifndef PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto
#define PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto 

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto
namespace ubii {
namespace dataStructure {
class Vector4;
class Vector4DefaultTypeInternal;
extern Vector4DefaultTypeInternal _Vector4_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::dataStructure::Vector4* Arena::CreateMaybeMessage<::ubii::dataStructure::Vector4>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace dataStructure {

// ===================================================================

class Vector4 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.Vector4) */ {
 public:
  Vector4();
  virtual ~Vector4();

  Vector4(const Vector4& from);

  inline Vector4& operator=(const Vector4& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vector4(Vector4&& from) noexcept
    : Vector4() {
    *this = ::std::move(from);
  }

  inline Vector4& operator=(Vector4&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector4& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector4* internal_default_instance() {
    return reinterpret_cast<const Vector4*>(
               &_Vector4_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Vector4* other);
  friend void swap(Vector4& a, Vector4& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vector4* New() const final {
    return CreateMaybeMessage<Vector4>(NULL);
  }

  Vector4* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vector4>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vector4& from);
  void MergeFrom(const Vector4& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vector4* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // double x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // double z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  double z() const;
  void set_z(double value);

  // double w = 4;
  void clear_w();
  static const int kWFieldNumber = 4;
  double w() const;
  void set_w(double value);

  // @@protoc_insertion_point(class_scope:ubii.dataStructure.Vector4)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double z_;
  double w_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector4

// double x = 1;
inline void Vector4::clear_x() {
  x_ = 0;
}
inline double Vector4::x() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector4.x)
  return x_;
}
inline void Vector4::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector4.x)
}

// double y = 2;
inline void Vector4::clear_y() {
  y_ = 0;
}
inline double Vector4::y() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector4.y)
  return y_;
}
inline void Vector4::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector4.y)
}

// double z = 3;
inline void Vector4::clear_z() {
  z_ = 0;
}
inline double Vector4::z() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector4.z)
  return z_;
}
inline void Vector4::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector4.z)
}

// double w = 4;
inline void Vector4::clear_w() {
  w_ = 0;
}
inline double Vector4::w() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector4.w)
  return w_;
}
inline void Vector4::set_w(double value) {
  
  w_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector4.w)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dataStructure
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector4_2eproto
