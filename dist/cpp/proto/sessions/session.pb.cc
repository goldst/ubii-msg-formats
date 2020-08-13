// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/sessions/session.proto

#include "proto/sessions/session.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2finteractions_2finteraction_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Interaction_proto_2finteractions_2finteraction_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fsessions_2fioMapping_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_IOMapping_proto_2fsessions_2fioMapping_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fsessions_2fsession_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Session_proto_2fsessions_2fsession_2eproto;
namespace ubii {
namespace sessions {
class SessionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Session> _instance;
} _Session_default_instance_;
class SessionListDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SessionList> _instance;
} _SessionList_default_instance_;
}  // namespace sessions
}  // namespace ubii
static void InitDefaultsscc_info_Session_proto_2fsessions_2fsession_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::sessions::_Session_default_instance_;
    new (ptr) ::ubii::sessions::Session();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::sessions::Session::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Session_proto_2fsessions_2fsession_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Session_proto_2fsessions_2fsession_2eproto}, {
      &scc_info_Interaction_proto_2finteractions_2finteraction_2eproto.base,
      &scc_info_IOMapping_proto_2fsessions_2fioMapping_2eproto.base,}};

static void InitDefaultsscc_info_SessionList_proto_2fsessions_2fsession_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::sessions::_SessionList_default_instance_;
    new (ptr) ::ubii::sessions::SessionList();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::sessions::SessionList::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SessionList_proto_2fsessions_2fsession_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SessionList_proto_2fsessions_2fsession_2eproto}, {
      &scc_info_Session_proto_2fsessions_2fsession_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fsessions_2fsession_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_2fsessions_2fsession_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fsessions_2fsession_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fsessions_2fsession_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, id_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, name_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, interactions_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, io_mappings_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, tags_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, description_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, authors_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, process_mode_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, status_),
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::Session, editable_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::SessionList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ubii::sessions::SessionList, elements_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::sessions::Session)},
  { 15, -1, sizeof(::ubii::sessions::SessionList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ubii::sessions::_Session_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ubii::sessions::_SessionList_default_instance_),
};

const char descriptor_table_protodef_proto_2fsessions_2fsession_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034proto/sessions/session.proto\022\rubii.ses"
  "sions\032$proto/interactions/interaction.pr"
  "oto\032\036proto/sessions/ioMapping.proto\"\256\002\n\007"
  "Session\022\n\n\002id\030\001 \001(\t\022\014\n\004name\030\002 \001(\t\0224\n\014int"
  "eractions\030\003 \003(\0132\036.ubii.interactions.Inte"
  "raction\022-\n\013io_mappings\030\004 \003(\0132\030.ubii.sess"
  "ions.IOMapping\022\014\n\004tags\030\005 \003(\t\022\023\n\013descript"
  "ion\030\006 \001(\t\022\017\n\007authors\030\007 \003(\t\0220\n\014process_mo"
  "de\030\010 \001(\0162\032.ubii.sessions.ProcessMode\022,\n\006"
  "status\030\t \001(\0162\034.ubii.sessions.SessionStat"
  "us\022\020\n\010editable\030\n \001(\010\"7\n\013SessionList\022(\n\010e"
  "lements\030\001 \003(\0132\026.ubii.sessions.Session*I\n"
  "\013ProcessMode\022\026\n\022CYCLE_INTERACTIONS\020\000\022\"\n\036"
  "INDIVIDUAL_PROCESS_FREQUENCIES\020\001*B\n\rSess"
  "ionStatus\022\013\n\007CREATED\020\000\022\013\n\007RUNNING\020\001\022\n\n\006P"
  "AUSED\020\002\022\013\n\007STOPPED\020\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fsessions_2fsession_2eproto_deps[2] = {
  &::descriptor_table_proto_2finteractions_2finteraction_2eproto,
  &::descriptor_table_proto_2fsessions_2fioMapping_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fsessions_2fsession_2eproto_sccs[2] = {
  &scc_info_Session_proto_2fsessions_2fsession_2eproto.base,
  &scc_info_SessionList_proto_2fsessions_2fsession_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fsessions_2fsession_2eproto_once;
static bool descriptor_table_proto_2fsessions_2fsession_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fsessions_2fsession_2eproto = {
  &descriptor_table_proto_2fsessions_2fsession_2eproto_initialized, descriptor_table_protodef_proto_2fsessions_2fsession_2eproto, "proto/sessions/session.proto", 628,
  &descriptor_table_proto_2fsessions_2fsession_2eproto_once, descriptor_table_proto_2fsessions_2fsession_2eproto_sccs, descriptor_table_proto_2fsessions_2fsession_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_proto_2fsessions_2fsession_2eproto::offsets,
  file_level_metadata_proto_2fsessions_2fsession_2eproto, 2, file_level_enum_descriptors_proto_2fsessions_2fsession_2eproto, file_level_service_descriptors_proto_2fsessions_2fsession_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fsessions_2fsession_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fsessions_2fsession_2eproto), true);
namespace ubii {
namespace sessions {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ProcessMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2fsessions_2fsession_2eproto);
  return file_level_enum_descriptors_proto_2fsessions_2fsession_2eproto[0];
}
bool ProcessMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SessionStatus_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2fsessions_2fsession_2eproto);
  return file_level_enum_descriptors_proto_2fsessions_2fsession_2eproto[1];
}
bool SessionStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Session::InitAsDefaultInstance() {
}
class Session::_Internal {
 public:
};

void Session::clear_interactions() {
  interactions_.Clear();
}
void Session::clear_io_mappings() {
  io_mappings_.Clear();
}
Session::Session()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.sessions.Session)
}
Session::Session(const Session& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      interactions_(from.interactions_),
      io_mappings_(from.io_mappings_),
      tags_(from.tags_),
      authors_(from.authors_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  ::memcpy(&process_mode_, &from.process_mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&editable_) -
    reinterpret_cast<char*>(&process_mode_)) + sizeof(editable_));
  // @@protoc_insertion_point(copy_constructor:ubii.sessions.Session)
}

void Session::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Session_proto_2fsessions_2fsession_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&process_mode_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&editable_) -
      reinterpret_cast<char*>(&process_mode_)) + sizeof(editable_));
}

Session::~Session() {
  // @@protoc_insertion_point(destructor:ubii.sessions.Session)
  SharedDtor();
}

void Session::SharedDtor() {
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Session::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Session& Session::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Session_proto_2fsessions_2fsession_2eproto.base);
  return *internal_default_instance();
}


void Session::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.sessions.Session)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  interactions_.Clear();
  io_mappings_.Clear();
  tags_.Clear();
  authors_.Clear();
  id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&process_mode_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&editable_) -
      reinterpret_cast<char*>(&process_mode_)) + sizeof(editable_));
  _internal_metadata_.Clear();
}

const char* Session::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ubii.sessions.Session.id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ubii.sessions.Session.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .ubii.interactions.Interaction interactions = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_interactions(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .ubii.sessions.IOMapping io_mappings = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_io_mappings(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string tags = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_tags();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ubii.sessions.Session.tags"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      // string description = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ubii.sessions.Session.description"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string authors = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_authors();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ubii.sessions.Session.authors"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else goto handle_unusual;
        continue;
      // .ubii.sessions.ProcessMode process_mode = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_process_mode(static_cast<::ubii::sessions::ProcessMode>(val));
        } else goto handle_unusual;
        continue;
      // .ubii.sessions.SessionStatus status = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::ubii::sessions::SessionStatus>(val));
        } else goto handle_unusual;
        continue;
      // bool editable = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          editable_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Session::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ubii.sessions.Session)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ubii.sessions.Session.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ubii.sessions.Session.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // repeated .ubii.interactions.Interaction interactions = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_interactions_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_interactions(i), target, stream);
  }

  // repeated .ubii.sessions.IOMapping io_mappings = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_io_mappings_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_io_mappings(i), target, stream);
  }

  // repeated string tags = 5;
  for (int i = 0, n = this->_internal_tags_size(); i < n; i++) {
    const auto& s = this->_internal_tags(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ubii.sessions.Session.tags");
    target = stream->WriteString(5, s, target);
  }

  // string description = 6;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ubii.sessions.Session.description");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_description(), target);
  }

  // repeated string authors = 7;
  for (int i = 0, n = this->_internal_authors_size(); i < n; i++) {
    const auto& s = this->_internal_authors(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ubii.sessions.Session.authors");
    target = stream->WriteString(7, s, target);
  }

  // .ubii.sessions.ProcessMode process_mode = 8;
  if (this->process_mode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      8, this->_internal_process_mode(), target);
  }

  // .ubii.sessions.SessionStatus status = 9;
  if (this->status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      9, this->_internal_status(), target);
  }

  // bool editable = 10;
  if (this->editable() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(10, this->_internal_editable(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.sessions.Session)
  return target;
}

size_t Session::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.sessions.Session)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ubii.interactions.Interaction interactions = 3;
  total_size += 1UL * this->_internal_interactions_size();
  for (const auto& msg : this->interactions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .ubii.sessions.IOMapping io_mappings = 4;
  total_size += 1UL * this->_internal_io_mappings_size();
  for (const auto& msg : this->io_mappings_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string tags = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(tags_.size());
  for (int i = 0, n = tags_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      tags_.Get(i));
  }

  // repeated string authors = 7;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(authors_.size());
  for (int i = 0, n = authors_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      authors_.Get(i));
  }

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string description = 6;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // .ubii.sessions.ProcessMode process_mode = 8;
  if (this->process_mode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_process_mode());
  }

  // .ubii.sessions.SessionStatus status = 9;
  if (this->status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_status());
  }

  // bool editable = 10;
  if (this->editable() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Session::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.sessions.Session)
  GOOGLE_DCHECK_NE(&from, this);
  const Session* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Session>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.sessions.Session)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.sessions.Session)
    MergeFrom(*source);
  }
}

void Session::MergeFrom(const Session& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.sessions.Session)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  interactions_.MergeFrom(from.interactions_);
  io_mappings_.MergeFrom(from.io_mappings_);
  tags_.MergeFrom(from.tags_);
  authors_.MergeFrom(from.authors_);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.process_mode() != 0) {
    _internal_set_process_mode(from._internal_process_mode());
  }
  if (from.status() != 0) {
    _internal_set_status(from._internal_status());
  }
  if (from.editable() != 0) {
    _internal_set_editable(from._internal_editable());
  }
}

void Session::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.sessions.Session)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Session::CopyFrom(const Session& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.sessions.Session)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Session::IsInitialized() const {
  return true;
}

void Session::InternalSwap(Session* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  interactions_.InternalSwap(&other->interactions_);
  io_mappings_.InternalSwap(&other->io_mappings_);
  tags_.InternalSwap(&other->tags_);
  authors_.InternalSwap(&other->authors_);
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(process_mode_, other->process_mode_);
  swap(status_, other->status_);
  swap(editable_, other->editable_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Session::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SessionList::InitAsDefaultInstance() {
}
class SessionList::_Internal {
 public:
};

SessionList::SessionList()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.sessions.SessionList)
}
SessionList::SessionList(const SessionList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.sessions.SessionList)
}

void SessionList::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SessionList_proto_2fsessions_2fsession_2eproto.base);
}

SessionList::~SessionList() {
  // @@protoc_insertion_point(destructor:ubii.sessions.SessionList)
  SharedDtor();
}

void SessionList::SharedDtor() {
}

void SessionList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SessionList& SessionList::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SessionList_proto_2fsessions_2fsession_2eproto.base);
  return *internal_default_instance();
}


void SessionList::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.sessions.SessionList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

const char* SessionList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .ubii.sessions.Session elements = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_elements(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SessionList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ubii.sessions.SessionList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.sessions.Session elements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_elements_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_elements(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.sessions.SessionList)
  return target;
}

size_t SessionList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.sessions.SessionList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ubii.sessions.Session elements = 1;
  total_size += 1UL * this->_internal_elements_size();
  for (const auto& msg : this->elements_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SessionList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.sessions.SessionList)
  GOOGLE_DCHECK_NE(&from, this);
  const SessionList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SessionList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.sessions.SessionList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.sessions.SessionList)
    MergeFrom(*source);
  }
}

void SessionList::MergeFrom(const SessionList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.sessions.SessionList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void SessionList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.sessions.SessionList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SessionList::CopyFrom(const SessionList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.sessions.SessionList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionList::IsInitialized() const {
  return true;
}

void SessionList::InternalSwap(SessionList* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  elements_.InternalSwap(&other->elements_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionList::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sessions
}  // namespace ubii
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ubii::sessions::Session* Arena::CreateMaybeMessage< ::ubii::sessions::Session >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::sessions::Session >(arena);
}
template<> PROTOBUF_NOINLINE ::ubii::sessions::SessionList* Arena::CreateMaybeMessage< ::ubii::sessions::SessionList >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::sessions::SessionList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
