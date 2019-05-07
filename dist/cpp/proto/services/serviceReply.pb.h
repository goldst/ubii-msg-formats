// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/services/serviceReply.proto

#ifndef PROTOBUF_INCLUDED_proto_2fservices_2fserviceReply_2eproto
#define PROTOBUF_INCLUDED_proto_2fservices_2fserviceReply_2eproto

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
#include "proto/general/success.pb.h"
#include "proto/general/error.pb.h"
#include "proto/general/lists.pb.h"
#include "proto/clients/client.pb.h"
#include "proto/devices/device.pb.h"
#include "proto/servers/server.pb.h"
#include "proto/sessions/session.pb.h"
#include "proto/interactions/interaction.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fservices_2fserviceReply_2eproto 

namespace protobuf_proto_2fservices_2fserviceReply_2eproto {
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
}  // namespace protobuf_proto_2fservices_2fserviceReply_2eproto
namespace ubii {
namespace services {
class ServiceReply;
class ServiceReplyDefaultTypeInternal;
extern ServiceReplyDefaultTypeInternal _ServiceReply_default_instance_;
}  // namespace services
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::services::ServiceReply* Arena::CreateMaybeMessage<::ubii::services::ServiceReply>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace services {

// ===================================================================

class ServiceReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.services.ServiceReply) */ {
 public:
  ServiceReply();
  virtual ~ServiceReply();

  ServiceReply(const ServiceReply& from);

  inline ServiceReply& operator=(const ServiceReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ServiceReply(ServiceReply&& from) noexcept
    : ServiceReply() {
    *this = ::std::move(from);
  }

  inline ServiceReply& operator=(ServiceReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ServiceReply& default_instance();

  enum TypeCase {
    kSuccess = 1,
    kError = 2,
    kClient = 3,
    kDevice = 4,
    kServer = 5,
    kSession = 6,
    kSessionList = 7,
    kInteraction = 8,
    kInteractionList = 9,
    kStringList = 10,
    TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ServiceReply* internal_default_instance() {
    return reinterpret_cast<const ServiceReply*>(
               &_ServiceReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ServiceReply* other);
  friend void swap(ServiceReply& a, ServiceReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ServiceReply* New() const final {
    return CreateMaybeMessage<ServiceReply>(NULL);
  }

  ServiceReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ServiceReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ServiceReply& from);
  void MergeFrom(const ServiceReply& from);
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
  void InternalSwap(ServiceReply* other);
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

  // .ubii.general.Success success = 1;
  bool has_success() const;
  void clear_success();
  static const int kSuccessFieldNumber = 1;
  private:
  const ::ubii::general::Success& _internal_success() const;
  public:
  const ::ubii::general::Success& success() const;
  ::ubii::general::Success* release_success();
  ::ubii::general::Success* mutable_success();
  void set_allocated_success(::ubii::general::Success* success);

  // .ubii.general.Error error = 2;
  bool has_error() const;
  void clear_error();
  static const int kErrorFieldNumber = 2;
  private:
  const ::ubii::general::Error& _internal_error() const;
  public:
  const ::ubii::general::Error& error() const;
  ::ubii::general::Error* release_error();
  ::ubii::general::Error* mutable_error();
  void set_allocated_error(::ubii::general::Error* error);

  // .ubii.clients.Client client = 3;
  bool has_client() const;
  void clear_client();
  static const int kClientFieldNumber = 3;
  private:
  const ::ubii::clients::Client& _internal_client() const;
  public:
  const ::ubii::clients::Client& client() const;
  ::ubii::clients::Client* release_client();
  ::ubii::clients::Client* mutable_client();
  void set_allocated_client(::ubii::clients::Client* client);

  // .ubii.devices.Device device = 4;
  bool has_device() const;
  void clear_device();
  static const int kDeviceFieldNumber = 4;
  private:
  const ::ubii::devices::Device& _internal_device() const;
  public:
  const ::ubii::devices::Device& device() const;
  ::ubii::devices::Device* release_device();
  ::ubii::devices::Device* mutable_device();
  void set_allocated_device(::ubii::devices::Device* device);

  // .ubii.servers.Server server = 5;
  bool has_server() const;
  void clear_server();
  static const int kServerFieldNumber = 5;
  private:
  const ::ubii::servers::Server& _internal_server() const;
  public:
  const ::ubii::servers::Server& server() const;
  ::ubii::servers::Server* release_server();
  ::ubii::servers::Server* mutable_server();
  void set_allocated_server(::ubii::servers::Server* server);

  // .ubii.sessions.Session session = 6;
  bool has_session() const;
  void clear_session();
  static const int kSessionFieldNumber = 6;
  private:
  const ::ubii::sessions::Session& _internal_session() const;
  public:
  const ::ubii::sessions::Session& session() const;
  ::ubii::sessions::Session* release_session();
  ::ubii::sessions::Session* mutable_session();
  void set_allocated_session(::ubii::sessions::Session* session);

  // .ubii.sessions.SessionList session_list = 7;
  bool has_session_list() const;
  void clear_session_list();
  static const int kSessionListFieldNumber = 7;
  private:
  const ::ubii::sessions::SessionList& _internal_session_list() const;
  public:
  const ::ubii::sessions::SessionList& session_list() const;
  ::ubii::sessions::SessionList* release_session_list();
  ::ubii::sessions::SessionList* mutable_session_list();
  void set_allocated_session_list(::ubii::sessions::SessionList* session_list);

  // .ubii.interactions.Interaction interaction = 8;
  bool has_interaction() const;
  void clear_interaction();
  static const int kInteractionFieldNumber = 8;
  private:
  const ::ubii::interactions::Interaction& _internal_interaction() const;
  public:
  const ::ubii::interactions::Interaction& interaction() const;
  ::ubii::interactions::Interaction* release_interaction();
  ::ubii::interactions::Interaction* mutable_interaction();
  void set_allocated_interaction(::ubii::interactions::Interaction* interaction);

  // .ubii.interactions.InteractionList interaction_list = 9;
  bool has_interaction_list() const;
  void clear_interaction_list();
  static const int kInteractionListFieldNumber = 9;
  private:
  const ::ubii::interactions::InteractionList& _internal_interaction_list() const;
  public:
  const ::ubii::interactions::InteractionList& interaction_list() const;
  ::ubii::interactions::InteractionList* release_interaction_list();
  ::ubii::interactions::InteractionList* mutable_interaction_list();
  void set_allocated_interaction_list(::ubii::interactions::InteractionList* interaction_list);

  // .ubii.general.StringList string_list = 10;
  bool has_string_list() const;
  void clear_string_list();
  static const int kStringListFieldNumber = 10;
  private:
  const ::ubii::general::StringList& _internal_string_list() const;
  public:
  const ::ubii::general::StringList& string_list() const;
  ::ubii::general::StringList* release_string_list();
  ::ubii::general::StringList* mutable_string_list();
  void set_allocated_string_list(::ubii::general::StringList* string_list);

  void clear_type();
  TypeCase type_case() const;
  // @@protoc_insertion_point(class_scope:ubii.services.ServiceReply)
 private:
  void set_has_success();
  void set_has_error();
  void set_has_client();
  void set_has_device();
  void set_has_server();
  void set_has_session();
  void set_has_session_list();
  void set_has_interaction();
  void set_has_interaction_list();
  void set_has_string_list();

  inline bool has_type() const;
  inline void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union TypeUnion {
    TypeUnion() {}
    ::ubii::general::Success* success_;
    ::ubii::general::Error* error_;
    ::ubii::clients::Client* client_;
    ::ubii::devices::Device* device_;
    ::ubii::servers::Server* server_;
    ::ubii::sessions::Session* session_;
    ::ubii::sessions::SessionList* session_list_;
    ::ubii::interactions::Interaction* interaction_;
    ::ubii::interactions::InteractionList* interaction_list_;
    ::ubii::general::StringList* string_list_;
  } type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_proto_2fservices_2fserviceReply_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ServiceReply

// .ubii.general.Success success = 1;
inline bool ServiceReply::has_success() const {
  return type_case() == kSuccess;
}
inline void ServiceReply::set_has_success() {
  _oneof_case_[0] = kSuccess;
}
inline const ::ubii::general::Success& ServiceReply::_internal_success() const {
  return *type_.success_;
}
inline ::ubii::general::Success* ServiceReply::release_success() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.success)
  if (has_success()) {
    clear_has_type();
      ::ubii::general::Success* temp = type_.success_;
    type_.success_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::general::Success& ServiceReply::success() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.success)
  return has_success()
      ? *type_.success_
      : *reinterpret_cast< ::ubii::general::Success*>(&::ubii::general::_Success_default_instance_);
}
inline ::ubii::general::Success* ServiceReply::mutable_success() {
  if (!has_success()) {
    clear_type();
    set_has_success();
    type_.success_ = CreateMaybeMessage< ::ubii::general::Success >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.success)
  return type_.success_;
}

// .ubii.general.Error error = 2;
inline bool ServiceReply::has_error() const {
  return type_case() == kError;
}
inline void ServiceReply::set_has_error() {
  _oneof_case_[0] = kError;
}
inline const ::ubii::general::Error& ServiceReply::_internal_error() const {
  return *type_.error_;
}
inline ::ubii::general::Error* ServiceReply::release_error() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.error)
  if (has_error()) {
    clear_has_type();
      ::ubii::general::Error* temp = type_.error_;
    type_.error_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::general::Error& ServiceReply::error() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.error)
  return has_error()
      ? *type_.error_
      : *reinterpret_cast< ::ubii::general::Error*>(&::ubii::general::_Error_default_instance_);
}
inline ::ubii::general::Error* ServiceReply::mutable_error() {
  if (!has_error()) {
    clear_type();
    set_has_error();
    type_.error_ = CreateMaybeMessage< ::ubii::general::Error >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.error)
  return type_.error_;
}

// .ubii.clients.Client client = 3;
inline bool ServiceReply::has_client() const {
  return type_case() == kClient;
}
inline void ServiceReply::set_has_client() {
  _oneof_case_[0] = kClient;
}
inline const ::ubii::clients::Client& ServiceReply::_internal_client() const {
  return *type_.client_;
}
inline ::ubii::clients::Client* ServiceReply::release_client() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.client)
  if (has_client()) {
    clear_has_type();
      ::ubii::clients::Client* temp = type_.client_;
    type_.client_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::clients::Client& ServiceReply::client() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.client)
  return has_client()
      ? *type_.client_
      : *reinterpret_cast< ::ubii::clients::Client*>(&::ubii::clients::_Client_default_instance_);
}
inline ::ubii::clients::Client* ServiceReply::mutable_client() {
  if (!has_client()) {
    clear_type();
    set_has_client();
    type_.client_ = CreateMaybeMessage< ::ubii::clients::Client >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.client)
  return type_.client_;
}

// .ubii.devices.Device device = 4;
inline bool ServiceReply::has_device() const {
  return type_case() == kDevice;
}
inline void ServiceReply::set_has_device() {
  _oneof_case_[0] = kDevice;
}
inline const ::ubii::devices::Device& ServiceReply::_internal_device() const {
  return *type_.device_;
}
inline ::ubii::devices::Device* ServiceReply::release_device() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.device)
  if (has_device()) {
    clear_has_type();
      ::ubii::devices::Device* temp = type_.device_;
    type_.device_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::devices::Device& ServiceReply::device() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.device)
  return has_device()
      ? *type_.device_
      : *reinterpret_cast< ::ubii::devices::Device*>(&::ubii::devices::_Device_default_instance_);
}
inline ::ubii::devices::Device* ServiceReply::mutable_device() {
  if (!has_device()) {
    clear_type();
    set_has_device();
    type_.device_ = CreateMaybeMessage< ::ubii::devices::Device >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.device)
  return type_.device_;
}

// .ubii.servers.Server server = 5;
inline bool ServiceReply::has_server() const {
  return type_case() == kServer;
}
inline void ServiceReply::set_has_server() {
  _oneof_case_[0] = kServer;
}
inline const ::ubii::servers::Server& ServiceReply::_internal_server() const {
  return *type_.server_;
}
inline ::ubii::servers::Server* ServiceReply::release_server() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.server)
  if (has_server()) {
    clear_has_type();
      ::ubii::servers::Server* temp = type_.server_;
    type_.server_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::servers::Server& ServiceReply::server() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.server)
  return has_server()
      ? *type_.server_
      : *reinterpret_cast< ::ubii::servers::Server*>(&::ubii::servers::_Server_default_instance_);
}
inline ::ubii::servers::Server* ServiceReply::mutable_server() {
  if (!has_server()) {
    clear_type();
    set_has_server();
    type_.server_ = CreateMaybeMessage< ::ubii::servers::Server >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.server)
  return type_.server_;
}

// .ubii.sessions.Session session = 6;
inline bool ServiceReply::has_session() const {
  return type_case() == kSession;
}
inline void ServiceReply::set_has_session() {
  _oneof_case_[0] = kSession;
}
inline const ::ubii::sessions::Session& ServiceReply::_internal_session() const {
  return *type_.session_;
}
inline ::ubii::sessions::Session* ServiceReply::release_session() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.session)
  if (has_session()) {
    clear_has_type();
      ::ubii::sessions::Session* temp = type_.session_;
    type_.session_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::sessions::Session& ServiceReply::session() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.session)
  return has_session()
      ? *type_.session_
      : *reinterpret_cast< ::ubii::sessions::Session*>(&::ubii::sessions::_Session_default_instance_);
}
inline ::ubii::sessions::Session* ServiceReply::mutable_session() {
  if (!has_session()) {
    clear_type();
    set_has_session();
    type_.session_ = CreateMaybeMessage< ::ubii::sessions::Session >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.session)
  return type_.session_;
}

// .ubii.sessions.SessionList session_list = 7;
inline bool ServiceReply::has_session_list() const {
  return type_case() == kSessionList;
}
inline void ServiceReply::set_has_session_list() {
  _oneof_case_[0] = kSessionList;
}
inline const ::ubii::sessions::SessionList& ServiceReply::_internal_session_list() const {
  return *type_.session_list_;
}
inline ::ubii::sessions::SessionList* ServiceReply::release_session_list() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.session_list)
  if (has_session_list()) {
    clear_has_type();
      ::ubii::sessions::SessionList* temp = type_.session_list_;
    type_.session_list_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::sessions::SessionList& ServiceReply::session_list() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.session_list)
  return has_session_list()
      ? *type_.session_list_
      : *reinterpret_cast< ::ubii::sessions::SessionList*>(&::ubii::sessions::_SessionList_default_instance_);
}
inline ::ubii::sessions::SessionList* ServiceReply::mutable_session_list() {
  if (!has_session_list()) {
    clear_type();
    set_has_session_list();
    type_.session_list_ = CreateMaybeMessage< ::ubii::sessions::SessionList >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.session_list)
  return type_.session_list_;
}

// .ubii.interactions.Interaction interaction = 8;
inline bool ServiceReply::has_interaction() const {
  return type_case() == kInteraction;
}
inline void ServiceReply::set_has_interaction() {
  _oneof_case_[0] = kInteraction;
}
inline const ::ubii::interactions::Interaction& ServiceReply::_internal_interaction() const {
  return *type_.interaction_;
}
inline ::ubii::interactions::Interaction* ServiceReply::release_interaction() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.interaction)
  if (has_interaction()) {
    clear_has_type();
      ::ubii::interactions::Interaction* temp = type_.interaction_;
    type_.interaction_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::interactions::Interaction& ServiceReply::interaction() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.interaction)
  return has_interaction()
      ? *type_.interaction_
      : *reinterpret_cast< ::ubii::interactions::Interaction*>(&::ubii::interactions::_Interaction_default_instance_);
}
inline ::ubii::interactions::Interaction* ServiceReply::mutable_interaction() {
  if (!has_interaction()) {
    clear_type();
    set_has_interaction();
    type_.interaction_ = CreateMaybeMessage< ::ubii::interactions::Interaction >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.interaction)
  return type_.interaction_;
}

// .ubii.interactions.InteractionList interaction_list = 9;
inline bool ServiceReply::has_interaction_list() const {
  return type_case() == kInteractionList;
}
inline void ServiceReply::set_has_interaction_list() {
  _oneof_case_[0] = kInteractionList;
}
inline const ::ubii::interactions::InteractionList& ServiceReply::_internal_interaction_list() const {
  return *type_.interaction_list_;
}
inline ::ubii::interactions::InteractionList* ServiceReply::release_interaction_list() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.interaction_list)
  if (has_interaction_list()) {
    clear_has_type();
      ::ubii::interactions::InteractionList* temp = type_.interaction_list_;
    type_.interaction_list_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::interactions::InteractionList& ServiceReply::interaction_list() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.interaction_list)
  return has_interaction_list()
      ? *type_.interaction_list_
      : *reinterpret_cast< ::ubii::interactions::InteractionList*>(&::ubii::interactions::_InteractionList_default_instance_);
}
inline ::ubii::interactions::InteractionList* ServiceReply::mutable_interaction_list() {
  if (!has_interaction_list()) {
    clear_type();
    set_has_interaction_list();
    type_.interaction_list_ = CreateMaybeMessage< ::ubii::interactions::InteractionList >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.interaction_list)
  return type_.interaction_list_;
}

// .ubii.general.StringList string_list = 10;
inline bool ServiceReply::has_string_list() const {
  return type_case() == kStringList;
}
inline void ServiceReply::set_has_string_list() {
  _oneof_case_[0] = kStringList;
}
inline const ::ubii::general::StringList& ServiceReply::_internal_string_list() const {
  return *type_.string_list_;
}
inline ::ubii::general::StringList* ServiceReply::release_string_list() {
  // @@protoc_insertion_point(field_release:ubii.services.ServiceReply.string_list)
  if (has_string_list()) {
    clear_has_type();
      ::ubii::general::StringList* temp = type_.string_list_;
    type_.string_list_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::general::StringList& ServiceReply::string_list() const {
  // @@protoc_insertion_point(field_get:ubii.services.ServiceReply.string_list)
  return has_string_list()
      ? *type_.string_list_
      : *reinterpret_cast< ::ubii::general::StringList*>(&::ubii::general::_StringList_default_instance_);
}
inline ::ubii::general::StringList* ServiceReply::mutable_string_list() {
  if (!has_string_list()) {
    clear_type();
    set_has_string_list();
    type_.string_list_ = CreateMaybeMessage< ::ubii::general::StringList >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.services.ServiceReply.string_list)
  return type_.string_list_;
}

inline bool ServiceReply::has_type() const {
  return type_case() != TYPE_NOT_SET;
}
inline void ServiceReply::clear_has_type() {
  _oneof_case_[0] = TYPE_NOT_SET;
}
inline ServiceReply::TypeCase ServiceReply::type_case() const {
  return ServiceReply::TypeCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace services
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fservices_2fserviceReply_2eproto
