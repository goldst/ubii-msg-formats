// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_INTERACTIONINPUTMAPPING_UBII_SESSIONS_H_
#define FLATBUFFERS_GENERATED_INTERACTIONINPUTMAPPING_UBII_SESSIONS_H_

#include "flatbuffers/flatbuffers.h"

#include "topicMux_generated.h"

namespace ubii {
namespace sessions {

struct InteractionInputMapping;
struct InteractionInputMappingBuilder;
struct InteractionInputMappingT;

enum TopicSource {
  TopicSource_NONE = 0,
  TopicSource_topic = 1,
  TopicSource_topic_mux = 2,
  TopicSource_MIN = TopicSource_NONE,
  TopicSource_MAX = TopicSource_topic_mux
};

inline const TopicSource (&EnumValuesTopicSource())[3] {
  static const TopicSource values[] = {
    TopicSource_NONE,
    TopicSource_topic,
    TopicSource_topic_mux
  };
  return values;
}

inline const char * const *EnumNamesTopicSource() {
  static const char * const names[4] = {
    "NONE",
    "topic",
    "topic_mux",
    nullptr
  };
  return names;
}

inline const char *EnumNameTopicSource(TopicSource e) {
  if (flatbuffers::IsOutRange(e, TopicSource_NONE, TopicSource_topic_mux)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesTopicSource()[index];
}

template<typename T> struct TopicSourceTraits {
  static const TopicSource enum_value = TopicSource_NONE;
};

template<> struct TopicSourceTraits<flatbuffers::String> {
  static const TopicSource enum_value = TopicSource_topic;
};

template<> struct TopicSourceTraits<ubii::devices::TopicMux> {
  static const TopicSource enum_value = TopicSource_topic_mux;
};

struct TopicSourceUnion {
  TopicSource type;
  void *value;

  TopicSourceUnion() : type(TopicSource_NONE), value(nullptr) {}
  TopicSourceUnion(TopicSourceUnion&& u) FLATBUFFERS_NOEXCEPT :
    type(TopicSource_NONE), value(nullptr)
    { std::swap(type, u.type); std::swap(value, u.value); }
  TopicSourceUnion(const TopicSourceUnion &);
  TopicSourceUnion &operator=(const TopicSourceUnion &u)
    { TopicSourceUnion t(u); std::swap(type, t.type); std::swap(value, t.value); return *this; }
  TopicSourceUnion &operator=(TopicSourceUnion &&u) FLATBUFFERS_NOEXCEPT
    { std::swap(type, u.type); std::swap(value, u.value); return *this; }
  ~TopicSourceUnion() { Reset(); }

  void Reset();

#ifndef FLATBUFFERS_CPP98_STL
  template <typename T>
  void Set(T&& val) {
    using RT = typename std::remove_reference<T>::type;
    Reset();
    type = TopicSourceTraits<typename RT::TableType>::enum_value;
    if (type != TopicSource_NONE) {
      value = new RT(std::forward<T>(val));
    }
  }
#endif  // FLATBUFFERS_CPP98_STL

  static void *UnPack(const void *obj, TopicSource type, const flatbuffers::resolver_function_t *resolver);
  flatbuffers::Offset<void> Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher = nullptr) const;

  std::string *Astopic() {
    return type == TopicSource_topic ?
      reinterpret_cast<std::string *>(value) : nullptr;
  }
  const std::string *Astopic() const {
    return type == TopicSource_topic ?
      reinterpret_cast<const std::string *>(value) : nullptr;
  }
  ubii::devices::TopicMuxT *Astopic_mux() {
    return type == TopicSource_topic_mux ?
      reinterpret_cast<ubii::devices::TopicMuxT *>(value) : nullptr;
  }
  const ubii::devices::TopicMuxT *Astopic_mux() const {
    return type == TopicSource_topic_mux ?
      reinterpret_cast<const ubii::devices::TopicMuxT *>(value) : nullptr;
  }
};

bool VerifyTopicSource(flatbuffers::Verifier &verifier, const void *obj, TopicSource type);
bool VerifyTopicSourceVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct InteractionInputMappingT : public flatbuffers::NativeTable {
  typedef InteractionInputMapping TableType;
  std::string name;
  ubii::sessions::TopicSourceUnion topic_source;
  InteractionInputMappingT() {
  }
};

struct InteractionInputMapping FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef InteractionInputMappingT NativeTableType;
  typedef InteractionInputMappingBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_TOPIC_SOURCE_TYPE = 6,
    VT_TOPIC_SOURCE = 8
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  ubii::sessions::TopicSource topic_source_type() const {
    return static_cast<ubii::sessions::TopicSource>(GetField<uint8_t>(VT_TOPIC_SOURCE_TYPE, 0));
  }
  const void *topic_source() const {
    return GetPointer<const void *>(VT_TOPIC_SOURCE);
  }
  template<typename T> const T *topic_source_as() const;
  const flatbuffers::String *topic_source_as_topic() const {
    return topic_source_type() == ubii::sessions::TopicSource_topic ? static_cast<const flatbuffers::String *>(topic_source()) : nullptr;
  }
  const ubii::devices::TopicMux *topic_source_as_topic_mux() const {
    return topic_source_type() == ubii::sessions::TopicSource_topic_mux ? static_cast<const ubii::devices::TopicMux *>(topic_source()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_TOPIC_SOURCE_TYPE) &&
           VerifyOffset(verifier, VT_TOPIC_SOURCE) &&
           VerifyTopicSource(verifier, topic_source(), topic_source_type()) &&
           verifier.EndTable();
  }
  InteractionInputMappingT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(InteractionInputMappingT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<InteractionInputMapping> Pack(flatbuffers::FlatBufferBuilder &_fbb, const InteractionInputMappingT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

template<> inline const flatbuffers::String *InteractionInputMapping::topic_source_as<flatbuffers::String>() const {
  return topic_source_as_topic();
}

template<> inline const ubii::devices::TopicMux *InteractionInputMapping::topic_source_as<ubii::devices::TopicMux>() const {
  return topic_source_as_topic_mux();
}

struct InteractionInputMappingBuilder {
  typedef InteractionInputMapping Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(InteractionInputMapping::VT_NAME, name);
  }
  void add_topic_source_type(ubii::sessions::TopicSource topic_source_type) {
    fbb_.AddElement<uint8_t>(InteractionInputMapping::VT_TOPIC_SOURCE_TYPE, static_cast<uint8_t>(topic_source_type), 0);
  }
  void add_topic_source(flatbuffers::Offset<void> topic_source) {
    fbb_.AddOffset(InteractionInputMapping::VT_TOPIC_SOURCE, topic_source);
  }
  explicit InteractionInputMappingBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  InteractionInputMappingBuilder &operator=(const InteractionInputMappingBuilder &);
  flatbuffers::Offset<InteractionInputMapping> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<InteractionInputMapping>(end);
    return o;
  }
};

inline flatbuffers::Offset<InteractionInputMapping> CreateInteractionInputMapping(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    ubii::sessions::TopicSource topic_source_type = ubii::sessions::TopicSource_NONE,
    flatbuffers::Offset<void> topic_source = 0) {
  InteractionInputMappingBuilder builder_(_fbb);
  builder_.add_topic_source(topic_source);
  builder_.add_name(name);
  builder_.add_topic_source_type(topic_source_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<InteractionInputMapping> CreateInteractionInputMappingDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    ubii::sessions::TopicSource topic_source_type = ubii::sessions::TopicSource_NONE,
    flatbuffers::Offset<void> topic_source = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return ubii::sessions::CreateInteractionInputMapping(
      _fbb,
      name__,
      topic_source_type,
      topic_source);
}

flatbuffers::Offset<InteractionInputMapping> CreateInteractionInputMapping(flatbuffers::FlatBufferBuilder &_fbb, const InteractionInputMappingT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline InteractionInputMappingT *InteractionInputMapping::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ubii::sessions::InteractionInputMappingT> _o = std::unique_ptr<ubii::sessions::InteractionInputMappingT>(new InteractionInputMappingT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void InteractionInputMapping::UnPackTo(InteractionInputMappingT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = topic_source_type(); _o->topic_source.type = _e; }
  { auto _e = topic_source(); if (_e) _o->topic_source.value = ubii::sessions::TopicSourceUnion::UnPack(_e, topic_source_type(), _resolver); }
}

inline flatbuffers::Offset<InteractionInputMapping> InteractionInputMapping::Pack(flatbuffers::FlatBufferBuilder &_fbb, const InteractionInputMappingT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateInteractionInputMapping(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<InteractionInputMapping> CreateInteractionInputMapping(flatbuffers::FlatBufferBuilder &_fbb, const InteractionInputMappingT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const InteractionInputMappingT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _topic_source_type = _o->topic_source.type;
  auto _topic_source = _o->topic_source.Pack(_fbb);
  return ubii::sessions::CreateInteractionInputMapping(
      _fbb,
      _name,
      _topic_source_type,
      _topic_source);
}

inline bool VerifyTopicSource(flatbuffers::Verifier &verifier, const void *obj, TopicSource type) {
  switch (type) {
    case TopicSource_NONE: {
      return true;
    }
    case TopicSource_topic: {
      auto ptr = reinterpret_cast<const flatbuffers::String *>(obj);
      return verifier.VerifyString(ptr);
    }
    case TopicSource_topic_mux: {
      auto ptr = reinterpret_cast<const ubii::devices::TopicMux *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyTopicSourceVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyTopicSource(
        verifier,  values->Get(i), types->GetEnum<TopicSource>(i))) {
      return false;
    }
  }
  return true;
}

inline void *TopicSourceUnion::UnPack(const void *obj, TopicSource type, const flatbuffers::resolver_function_t *resolver) {
  switch (type) {
    case TopicSource_topic: {
      auto ptr = reinterpret_cast<const flatbuffers::String *>(obj);
      return new std::string(ptr->c_str(), ptr->size());
    }
    case TopicSource_topic_mux: {
      auto ptr = reinterpret_cast<const ubii::devices::TopicMux *>(obj);
      return ptr->UnPack(resolver);
    }
    default: return nullptr;
  }
}

inline flatbuffers::Offset<void> TopicSourceUnion::Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher) const {
  switch (type) {
    case TopicSource_topic: {
      auto ptr = reinterpret_cast<const std::string *>(value);
      return _fbb.CreateString(*ptr).Union();
    }
    case TopicSource_topic_mux: {
      auto ptr = reinterpret_cast<const ubii::devices::TopicMuxT *>(value);
      return CreateTopicMux(_fbb, ptr, _rehasher).Union();
    }
    default: return 0;
  }
}

inline TopicSourceUnion::TopicSourceUnion(const TopicSourceUnion &u) : type(u.type), value(nullptr) {
  switch (type) {
    case TopicSource_topic: {
      value = new std::string(*reinterpret_cast<std::string *>(u.value));
      break;
    }
    case TopicSource_topic_mux: {
      value = new ubii::devices::TopicMuxT(*reinterpret_cast<ubii::devices::TopicMuxT *>(u.value));
      break;
    }
    default:
      break;
  }
}

inline void TopicSourceUnion::Reset() {
  switch (type) {
    case TopicSource_topic: {
      auto ptr = reinterpret_cast<std::string *>(value);
      delete ptr;
      break;
    }
    case TopicSource_topic_mux: {
      auto ptr = reinterpret_cast<ubii::devices::TopicMuxT *>(value);
      delete ptr;
      break;
    }
    default: break;
  }
  value = nullptr;
  type = TopicSource_NONE;
}

inline const ubii::sessions::InteractionInputMapping *GetInteractionInputMapping(const void *buf) {
  return flatbuffers::GetRoot<ubii::sessions::InteractionInputMapping>(buf);
}

inline const ubii::sessions::InteractionInputMapping *GetSizePrefixedInteractionInputMapping(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::sessions::InteractionInputMapping>(buf);
}

inline bool VerifyInteractionInputMappingBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::sessions::InteractionInputMapping>(nullptr);
}

inline bool VerifySizePrefixedInteractionInputMappingBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::sessions::InteractionInputMapping>(nullptr);
}

inline void FinishInteractionInputMappingBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::sessions::InteractionInputMapping> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedInteractionInputMappingBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::sessions::InteractionInputMapping> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<ubii::sessions::InteractionInputMappingT> UnPackInteractionInputMapping(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::sessions::InteractionInputMappingT>(GetInteractionInputMapping(buf)->UnPack(res));
}

inline std::unique_ptr<ubii::sessions::InteractionInputMappingT> UnPackSizePrefixedInteractionInputMapping(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::sessions::InteractionInputMappingT>(GetSizePrefixedInteractionInputMapping(buf)->UnPack(res));
}

}  // namespace sessions
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_INTERACTIONINPUTMAPPING_UBII_SESSIONS_H_
