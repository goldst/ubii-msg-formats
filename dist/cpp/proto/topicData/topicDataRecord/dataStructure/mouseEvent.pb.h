// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/mouseEvent.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto

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
#include "proto/topicData/topicDataRecord/dataStructure/buttonEventType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto;
namespace ubii {
namespace dataStructure {
class MouseEvent;
class MouseEventDefaultTypeInternal;
extern MouseEventDefaultTypeInternal _MouseEvent_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
PROTOBUF_NAMESPACE_OPEN
template<> ::ubii::dataStructure::MouseEvent* Arena::CreateMaybeMessage<::ubii::dataStructure::MouseEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ubii {
namespace dataStructure {

// ===================================================================

class MouseEvent :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.MouseEvent) */ {
 public:
  MouseEvent();
  virtual ~MouseEvent();

  MouseEvent(const MouseEvent& from);
  MouseEvent(MouseEvent&& from) noexcept
    : MouseEvent() {
    *this = ::std::move(from);
  }

  inline MouseEvent& operator=(const MouseEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline MouseEvent& operator=(MouseEvent&& from) noexcept {
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
  static const MouseEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MouseEvent* internal_default_instance() {
    return reinterpret_cast<const MouseEvent*>(
               &_MouseEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MouseEvent& a, MouseEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(MouseEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MouseEvent* New() const final {
    return CreateMaybeMessage<MouseEvent>(nullptr);
  }

  MouseEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MouseEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MouseEvent& from);
  void MergeFrom(const MouseEvent& from);
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
  void InternalSwap(MouseEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ubii.dataStructure.MouseEvent";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto);
    return ::descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
    kButtonFieldNumber = 2,
  };
  // .ubii.dataStructure.ButtonEventType type = 1;
  void clear_type();
  ::ubii::dataStructure::ButtonEventType type() const;
  void set_type(::ubii::dataStructure::ButtonEventType value);
  private:
  ::ubii::dataStructure::ButtonEventType _internal_type() const;
  void _internal_set_type(::ubii::dataStructure::ButtonEventType value);
  public:

  // int32 button = 2;
  void clear_button();
  ::PROTOBUF_NAMESPACE_ID::int32 button() const;
  void set_button(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_button() const;
  void _internal_set_button(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ubii.dataStructure.MouseEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int type_;
  ::PROTOBUF_NAMESPACE_ID::int32 button_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MouseEvent

// .ubii.dataStructure.ButtonEventType type = 1;
inline void MouseEvent::clear_type() {
  type_ = 0;
}
inline ::ubii::dataStructure::ButtonEventType MouseEvent::_internal_type() const {
  return static_cast< ::ubii::dataStructure::ButtonEventType >(type_);
}
inline ::ubii::dataStructure::ButtonEventType MouseEvent::type() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.MouseEvent.type)
  return _internal_type();
}
inline void MouseEvent::_internal_set_type(::ubii::dataStructure::ButtonEventType value) {
  
  type_ = value;
}
inline void MouseEvent::set_type(::ubii::dataStructure::ButtonEventType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:ubii.dataStructure.MouseEvent.type)
}

// int32 button = 2;
inline void MouseEvent::clear_button() {
  button_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MouseEvent::_internal_button() const {
  return button_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MouseEvent::button() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.MouseEvent.button)
  return _internal_button();
}
inline void MouseEvent::_internal_set_button(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  button_ = value;
}
inline void MouseEvent::set_button(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_button(value);
  // @@protoc_insertion_point(field_set:ubii.dataStructure.MouseEvent.button)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dataStructure
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fmouseEvent_2eproto
