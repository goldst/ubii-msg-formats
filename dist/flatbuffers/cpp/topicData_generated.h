// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TOPICDATA_UBII_TOPICDATA_H_
#define FLATBUFFERS_GENERATED_TOPICDATA_UBII_TOPICDATA_H_

#include "flatbuffers/flatbuffers.h"

#include "topicDemux_generated.h"
#include "topicMux_generated.h"
#include "error_generated.h"
#include "interaction_generated.h"
#include "ioFormat_generated.h"
#include "interactionInputMapping_generated.h"
#include "interactionOutputMapping_generated.h"
#include "ioMapping_generated.h"
#include "session_generated.h"
#include "buttonEventType_generated.h"
#include "color_generated.h"
#include "dataStructure_generated.h"
#include "handGestureType_generated.h"
#include "image_generated.h"
#include "keyEvent_generated.h"
#include "matrix3x2_generated.h"
#include "matrix4x4_generated.h"
#include "mouseEvent_generated.h"
#include "myoEvent_generated.h"
#include "object2d_generated.h"
#include "object3d_generated.h"
#include "pose2d_generated.h"
#include "pose3d_generated.h"
#include "quaternion_generated.h"
#include "timestamp_generated.h"
#include "touchEvent_generated.h"
#include "vector2_generated.h"
#include "vector3_generated.h"
#include "vector4_generated.h"
#include "vector8_generated.h"
#include "topicDataRecord_generated.h"

namespace ubii {
namespace topicData {

struct TopicData;
struct TopicDataBuilder;
struct TopicDataT;

enum TopicDataContent {
  TopicDataContent_NONE = 0,
  TopicDataContent_topic_data_records = 1,
  TopicDataContent_error = 2,
  TopicDataContent_MIN = TopicDataContent_NONE,
  TopicDataContent_MAX = TopicDataContent_error
};

inline const TopicDataContent (&EnumValuesTopicDataContent())[3] {
  static const TopicDataContent values[] = {
    TopicDataContent_NONE,
    TopicDataContent_topic_data_records,
    TopicDataContent_error
  };
  return values;
}

inline const char * const *EnumNamesTopicDataContent() {
  static const char * const names[4] = {
    "NONE",
    "topic_data_records",
    "error",
    nullptr
  };
  return names;
}

inline const char *EnumNameTopicDataContent(TopicDataContent e) {
  if (flatbuffers::IsOutRange(e, TopicDataContent_NONE, TopicDataContent_error)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesTopicDataContent()[index];
}

template<typename T> struct TopicDataContentTraits {
  static const TopicDataContent enum_value = TopicDataContent_NONE;
};

template<> struct TopicDataContentTraits<ubii::topicData::TopicDataRecordList> {
  static const TopicDataContent enum_value = TopicDataContent_topic_data_records;
};

template<> struct TopicDataContentTraits<ubii::general::Error> {
  static const TopicDataContent enum_value = TopicDataContent_error;
};

struct TopicDataContentUnion {
  TopicDataContent type;
  void *value;

  TopicDataContentUnion() : type(TopicDataContent_NONE), value(nullptr) {}
  TopicDataContentUnion(TopicDataContentUnion&& u) FLATBUFFERS_NOEXCEPT :
    type(TopicDataContent_NONE), value(nullptr)
    { std::swap(type, u.type); std::swap(value, u.value); }
  TopicDataContentUnion(const TopicDataContentUnion &);
  TopicDataContentUnion &operator=(const TopicDataContentUnion &u)
    { TopicDataContentUnion t(u); std::swap(type, t.type); std::swap(value, t.value); return *this; }
  TopicDataContentUnion &operator=(TopicDataContentUnion &&u) FLATBUFFERS_NOEXCEPT
    { std::swap(type, u.type); std::swap(value, u.value); return *this; }
  ~TopicDataContentUnion() { Reset(); }

  void Reset();

#ifndef FLATBUFFERS_CPP98_STL
  template <typename T>
  void Set(T&& val) {
    using RT = typename std::remove_reference<T>::type;
    Reset();
    type = TopicDataContentTraits<typename RT::TableType>::enum_value;
    if (type != TopicDataContent_NONE) {
      value = new RT(std::forward<T>(val));
    }
  }
#endif  // FLATBUFFERS_CPP98_STL

  static void *UnPack(const void *obj, TopicDataContent type, const flatbuffers::resolver_function_t *resolver);
  flatbuffers::Offset<void> Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher = nullptr) const;

  ubii::topicData::TopicDataRecordListT *Astopic_data_records() {
    return type == TopicDataContent_topic_data_records ?
      reinterpret_cast<ubii::topicData::TopicDataRecordListT *>(value) : nullptr;
  }
  const ubii::topicData::TopicDataRecordListT *Astopic_data_records() const {
    return type == TopicDataContent_topic_data_records ?
      reinterpret_cast<const ubii::topicData::TopicDataRecordListT *>(value) : nullptr;
  }
  ubii::general::ErrorT *Aserror() {
    return type == TopicDataContent_error ?
      reinterpret_cast<ubii::general::ErrorT *>(value) : nullptr;
  }
  const ubii::general::ErrorT *Aserror() const {
    return type == TopicDataContent_error ?
      reinterpret_cast<const ubii::general::ErrorT *>(value) : nullptr;
  }
};

bool VerifyTopicDataContent(flatbuffers::Verifier &verifier, const void *obj, TopicDataContent type);
bool VerifyTopicDataContentVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct TopicDataT : public flatbuffers::NativeTable {
  typedef TopicData TableType;
  ubii::topicData::TopicDataContentUnion content;
  TopicDataT() {
  }
};

struct TopicData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TopicDataT NativeTableType;
  typedef TopicDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CONTENT_TYPE = 4,
    VT_CONTENT = 6
  };
  ubii::topicData::TopicDataContent content_type() const {
    return static_cast<ubii::topicData::TopicDataContent>(GetField<uint8_t>(VT_CONTENT_TYPE, 0));
  }
  const void *content() const {
    return GetPointer<const void *>(VT_CONTENT);
  }
  template<typename T> const T *content_as() const;
  const ubii::topicData::TopicDataRecordList *content_as_topic_data_records() const {
    return content_type() == ubii::topicData::TopicDataContent_topic_data_records ? static_cast<const ubii::topicData::TopicDataRecordList *>(content()) : nullptr;
  }
  const ubii::general::Error *content_as_error() const {
    return content_type() == ubii::topicData::TopicDataContent_error ? static_cast<const ubii::general::Error *>(content()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_CONTENT_TYPE) &&
           VerifyOffset(verifier, VT_CONTENT) &&
           VerifyTopicDataContent(verifier, content(), content_type()) &&
           verifier.EndTable();
  }
  TopicDataT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TopicDataT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<TopicData> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TopicDataT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

template<> inline const ubii::topicData::TopicDataRecordList *TopicData::content_as<ubii::topicData::TopicDataRecordList>() const {
  return content_as_topic_data_records();
}

template<> inline const ubii::general::Error *TopicData::content_as<ubii::general::Error>() const {
  return content_as_error();
}

struct TopicDataBuilder {
  typedef TopicData Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_content_type(ubii::topicData::TopicDataContent content_type) {
    fbb_.AddElement<uint8_t>(TopicData::VT_CONTENT_TYPE, static_cast<uint8_t>(content_type), 0);
  }
  void add_content(flatbuffers::Offset<void> content) {
    fbb_.AddOffset(TopicData::VT_CONTENT, content);
  }
  explicit TopicDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TopicDataBuilder &operator=(const TopicDataBuilder &);
  flatbuffers::Offset<TopicData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TopicData>(end);
    return o;
  }
};

inline flatbuffers::Offset<TopicData> CreateTopicData(
    flatbuffers::FlatBufferBuilder &_fbb,
    ubii::topicData::TopicDataContent content_type = ubii::topicData::TopicDataContent_NONE,
    flatbuffers::Offset<void> content = 0) {
  TopicDataBuilder builder_(_fbb);
  builder_.add_content(content);
  builder_.add_content_type(content_type);
  return builder_.Finish();
}

flatbuffers::Offset<TopicData> CreateTopicData(flatbuffers::FlatBufferBuilder &_fbb, const TopicDataT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline TopicDataT *TopicData::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ubii::topicData::TopicDataT> _o = std::unique_ptr<ubii::topicData::TopicDataT>(new TopicDataT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void TopicData::UnPackTo(TopicDataT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = content_type(); _o->content.type = _e; }
  { auto _e = content(); if (_e) _o->content.value = ubii::topicData::TopicDataContentUnion::UnPack(_e, content_type(), _resolver); }
}

inline flatbuffers::Offset<TopicData> TopicData::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TopicDataT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTopicData(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TopicData> CreateTopicData(flatbuffers::FlatBufferBuilder &_fbb, const TopicDataT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TopicDataT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _content_type = _o->content.type;
  auto _content = _o->content.Pack(_fbb);
  return ubii::topicData::CreateTopicData(
      _fbb,
      _content_type,
      _content);
}

inline bool VerifyTopicDataContent(flatbuffers::Verifier &verifier, const void *obj, TopicDataContent type) {
  switch (type) {
    case TopicDataContent_NONE: {
      return true;
    }
    case TopicDataContent_topic_data_records: {
      auto ptr = reinterpret_cast<const ubii::topicData::TopicDataRecordList *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case TopicDataContent_error: {
      auto ptr = reinterpret_cast<const ubii::general::Error *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyTopicDataContentVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyTopicDataContent(
        verifier,  values->Get(i), types->GetEnum<TopicDataContent>(i))) {
      return false;
    }
  }
  return true;
}

inline void *TopicDataContentUnion::UnPack(const void *obj, TopicDataContent type, const flatbuffers::resolver_function_t *resolver) {
  switch (type) {
    case TopicDataContent_topic_data_records: {
      auto ptr = reinterpret_cast<const ubii::topicData::TopicDataRecordList *>(obj);
      return ptr->UnPack(resolver);
    }
    case TopicDataContent_error: {
      auto ptr = reinterpret_cast<const ubii::general::Error *>(obj);
      return ptr->UnPack(resolver);
    }
    default: return nullptr;
  }
}

inline flatbuffers::Offset<void> TopicDataContentUnion::Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher) const {
  switch (type) {
    case TopicDataContent_topic_data_records: {
      auto ptr = reinterpret_cast<const ubii::topicData::TopicDataRecordListT *>(value);
      return CreateTopicDataRecordList(_fbb, ptr, _rehasher).Union();
    }
    case TopicDataContent_error: {
      auto ptr = reinterpret_cast<const ubii::general::ErrorT *>(value);
      return CreateError(_fbb, ptr, _rehasher).Union();
    }
    default: return 0;
  }
}

inline TopicDataContentUnion::TopicDataContentUnion(const TopicDataContentUnion &u) : type(u.type), value(nullptr) {
  switch (type) {
    case TopicDataContent_topic_data_records: {
      FLATBUFFERS_ASSERT(false);  // ubii::topicData::TopicDataRecordListT not copyable.
      break;
    }
    case TopicDataContent_error: {
      value = new ubii::general::ErrorT(*reinterpret_cast<ubii::general::ErrorT *>(u.value));
      break;
    }
    default:
      break;
  }
}

inline void TopicDataContentUnion::Reset() {
  switch (type) {
    case TopicDataContent_topic_data_records: {
      auto ptr = reinterpret_cast<ubii::topicData::TopicDataRecordListT *>(value);
      delete ptr;
      break;
    }
    case TopicDataContent_error: {
      auto ptr = reinterpret_cast<ubii::general::ErrorT *>(value);
      delete ptr;
      break;
    }
    default: break;
  }
  value = nullptr;
  type = TopicDataContent_NONE;
}

inline const ubii::topicData::TopicData *GetTopicData(const void *buf) {
  return flatbuffers::GetRoot<ubii::topicData::TopicData>(buf);
}

inline const ubii::topicData::TopicData *GetSizePrefixedTopicData(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::topicData::TopicData>(buf);
}

inline bool VerifyTopicDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::topicData::TopicData>(nullptr);
}

inline bool VerifySizePrefixedTopicDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::topicData::TopicData>(nullptr);
}

inline void FinishTopicDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::topicData::TopicData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTopicDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::topicData::TopicData> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<ubii::topicData::TopicDataT> UnPackTopicData(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::topicData::TopicDataT>(GetTopicData(buf)->UnPack(res));
}

inline std::unique_ptr<ubii::topicData::TopicDataT> UnPackSizePrefixedTopicData(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::topicData::TopicDataT>(GetSizePrefixedTopicData(buf)->UnPack(res));
}

}  // namespace topicData
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_TOPICDATA_UBII_TOPICDATA_H_
