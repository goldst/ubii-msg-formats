// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/pose.proto

#include "proto/topicData/topicDataRecord/dataStructure/pose.pb.h"

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

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fquaternion_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fquaternion_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Quaternion;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fquaternion_2eproto
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto
namespace ubii {
namespace dataStructure {
class PoseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Pose>
      _instance;
} _Pose_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto {
static void InitDefaultsPose() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Pose_default_instance_;
    new (ptr) ::ubii::dataStructure::Pose();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Pose::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_Pose =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsPose}, {
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3.base,
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fquaternion_2eproto::scc_info_Quaternion.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Pose.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Pose, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Pose, vector3_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Pose, quaternion_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::Pose)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Pose_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/topicData/topicDataRecord/dataStructure/pose.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n8proto/topicData/topicDataRecord/dataSt"
      "ructure/pose.proto\022\022ubii.dataStructure\032;"
      "proto/topicData/topicDataRecord/dataStru"
      "cture/vector3.proto\032>proto/topicData/top"
      "icDataRecord/dataStructure/quaternion.pr"
      "oto\"h\n\004Pose\022,\n\007vector3\030\001 \001(\0132\033.ubii.data"
      "Structure.Vector3\0222\n\nquaternion\030\002 \001(\0132\036."
      "ubii.dataStructure.Quaternionb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 317);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/topicData/topicDataRecord/dataStructure/pose.proto", &protobuf_RegisterTypes);
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::AddDescriptors();
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fquaternion_2eproto::AddDescriptors();
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
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto
namespace ubii {
namespace dataStructure {

// ===================================================================

void Pose::InitAsDefaultInstance() {
  ::ubii::dataStructure::_Pose_default_instance_._instance.get_mutable()->vector3_ = const_cast< ::ubii::dataStructure::Vector3*>(
      ::ubii::dataStructure::Vector3::internal_default_instance());
  ::ubii::dataStructure::_Pose_default_instance_._instance.get_mutable()->quaternion_ = const_cast< ::ubii::dataStructure::Quaternion*>(
      ::ubii::dataStructure::Quaternion::internal_default_instance());
}
void Pose::clear_vector3() {
  if (GetArenaNoVirtual() == NULL && vector3_ != NULL) {
    delete vector3_;
  }
  vector3_ = NULL;
}
void Pose::clear_quaternion() {
  if (GetArenaNoVirtual() == NULL && quaternion_ != NULL) {
    delete quaternion_;
  }
  quaternion_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Pose::kVector3FieldNumber;
const int Pose::kQuaternionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Pose::Pose()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto::scc_info_Pose.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Pose)
}
Pose::Pose(const Pose& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_vector3()) {
    vector3_ = new ::ubii::dataStructure::Vector3(*from.vector3_);
  } else {
    vector3_ = NULL;
  }
  if (from.has_quaternion()) {
    quaternion_ = new ::ubii::dataStructure::Quaternion(*from.quaternion_);
  } else {
    quaternion_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Pose)
}

void Pose::SharedCtor() {
  ::memset(&vector3_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&quaternion_) -
      reinterpret_cast<char*>(&vector3_)) + sizeof(quaternion_));
}

Pose::~Pose() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Pose)
  SharedDtor();
}

void Pose::SharedDtor() {
  if (this != internal_default_instance()) delete vector3_;
  if (this != internal_default_instance()) delete quaternion_;
}

void Pose::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Pose::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Pose& Pose::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto::scc_info_Pose.base);
  return *internal_default_instance();
}


void Pose::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Pose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && vector3_ != NULL) {
    delete vector3_;
  }
  vector3_ = NULL;
  if (GetArenaNoVirtual() == NULL && quaternion_ != NULL) {
    delete quaternion_;
  }
  quaternion_ = NULL;
  _internal_metadata_.Clear();
}

bool Pose::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Pose)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .ubii.dataStructure.Vector3 vector3 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_vector3()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.Quaternion quaternion = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_quaternion()));
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
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Pose)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Pose)
  return false;
#undef DO_
}

void Pose::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Pose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ubii.dataStructure.Vector3 vector3 = 1;
  if (this->has_vector3()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_vector3(), output);
  }

  // .ubii.dataStructure.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_quaternion(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Pose)
}

::google::protobuf::uint8* Pose::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Pose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ubii.dataStructure.Vector3 vector3 = 1;
  if (this->has_vector3()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_vector3(), deterministic, target);
  }

  // .ubii.dataStructure.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_quaternion(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Pose)
  return target;
}

size_t Pose::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Pose)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .ubii.dataStructure.Vector3 vector3 = 1;
  if (this->has_vector3()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *vector3_);
  }

  // .ubii.dataStructure.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *quaternion_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Pose::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  const Pose* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Pose>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Pose)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Pose)
    MergeFrom(*source);
  }
}

void Pose::MergeFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_vector3()) {
    mutable_vector3()->::ubii::dataStructure::Vector3::MergeFrom(from.vector3());
  }
  if (from.has_quaternion()) {
    mutable_quaternion()->::ubii::dataStructure::Quaternion::MergeFrom(from.quaternion());
  }
}

void Pose::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose::CopyFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose::IsInitialized() const {
  return true;
}

void Pose::Swap(Pose* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Pose::InternalSwap(Pose* other) {
  using std::swap;
  swap(vector3_, other->vector3_);
  swap(quaternion_, other->quaternion_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Pose::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Pose* Arena::CreateMaybeMessage< ::ubii::dataStructure::Pose >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Pose >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
