// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/color.proto

#include "proto/topicData/topicDataRecord/dataStructure/color.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace ubii {
namespace dataStructure {
class ColorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Color>
      _instance;
} _Color_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto {
static void InitDefaultsColor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Color_default_instance_;
    new (ptr) ::ubii::dataStructure::Color();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Color::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Color =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsColor}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Color.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Color, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Color, r_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Color, g_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Color, b_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Color, a_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::Color)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Color_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/topicData/topicDataRecord/dataStructure/color.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n9proto/topicData/topicDataRecord/dataSt"
      "ructure/color.proto\022\022ubii.dataStructure\""
      "3\n\005Color\022\t\n\001r\030\001 \001(\001\022\t\n\001g\030\002 \001(\001\022\t\n\001b\030\003 \001("
      "\001\022\t\n\001a\030\004 \001(\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 140);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/topicData/topicDataRecord/dataStructure/color.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto
namespace ubii {
namespace dataStructure {

// ===================================================================

void Color::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Color::kRFieldNumber;
const int Color::kGFieldNumber;
const int Color::kBFieldNumber;
const int Color::kAFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Color::Color()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto::scc_info_Color.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Color)
}
Color::Color(const Color& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&r_, &from.r_,
    static_cast<size_t>(reinterpret_cast<char*>(&a_) -
    reinterpret_cast<char*>(&r_)) + sizeof(a_));
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Color)
}

void Color::SharedCtor() {
  ::memset(&r_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&a_) -
      reinterpret_cast<char*>(&r_)) + sizeof(a_));
}

Color::~Color() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Color)
  SharedDtor();
}

void Color::SharedDtor() {
}

void Color::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Color::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Color& Color::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto::scc_info_Color.base);
  return *internal_default_instance();
}


void Color::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&r_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&a_) -
      reinterpret_cast<char*>(&r_)) + sizeof(a_));
  _internal_metadata_.Clear();
}

bool Color::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Color)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double r = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &r_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double g = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &g_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double b = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &b_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double a = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &a_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Color)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Color)
  return false;
#undef DO_
}

void Color::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double r = 1;
  if (this->r() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->r(), output);
  }

  // double g = 2;
  if (this->g() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->g(), output);
  }

  // double b = 3;
  if (this->b() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->b(), output);
  }

  // double a = 4;
  if (this->a() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->a(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Color)
}

::google::protobuf::uint8* Color::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double r = 1;
  if (this->r() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->r(), target);
  }

  // double g = 2;
  if (this->g() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->g(), target);
  }

  // double b = 3;
  if (this->b() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->b(), target);
  }

  // double a = 4;
  if (this->a() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->a(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Color)
  return target;
}

size_t Color::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Color)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double r = 1;
  if (this->r() != 0) {
    total_size += 1 + 8;
  }

  // double g = 2;
  if (this->g() != 0) {
    total_size += 1 + 8;
  }

  // double b = 3;
  if (this->b() != 0) {
    total_size += 1 + 8;
  }

  // double a = 4;
  if (this->a() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Color::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Color)
  GOOGLE_DCHECK_NE(&from, this);
  const Color* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Color>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Color)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Color)
    MergeFrom(*source);
  }
}

void Color::MergeFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Color)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.r() != 0) {
    set_r(from.r());
  }
  if (from.g() != 0) {
    set_g(from.g());
  }
  if (from.b() != 0) {
    set_b(from.b());
  }
  if (from.a() != 0) {
    set_a(from.a());
  }
}

void Color::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Color::CopyFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Color::IsInitialized() const {
  return true;
}

void Color::Swap(Color* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Color::InternalSwap(Color* other) {
  using std::swap;
  swap(r_, other->r_);
  swap(g_, other->g_);
  swap(b_, other->b_);
  swap(a_, other->a_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Color::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fcolor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Color* Arena::CreateMaybeMessage< ::ubii::dataStructure::Color >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Color >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
