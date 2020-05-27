// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_OBJECT2D_UBII_DATASTRUCTURES_H_
#define FLATBUFFERS_GENERATED_OBJECT2D_UBII_DATASTRUCTURES_H_

#include "flatbuffers/flatbuffers.h"

#include "pose2d_generated.h"
#include "vector2_generated.h"

namespace ubii {
namespace dataStructures {

struct Object2D;
struct Object2DBuilder;
struct Object2DT;

struct Object2DT : public flatbuffers::NativeTable {
  typedef Object2D TableType;
  std::string id;
  std::string name;
  std::unique_ptr<ubii::dataStructures::Pose2DT> pose;
  std::unique_ptr<ubii::dataStructures::Vector2> size;
  std::string user_data_json;
  Object2DT() {
  }
};

struct Object2D FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef Object2DT NativeTableType;
  typedef Object2DBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_POSE = 8,
    VT_SIZE = 10,
    VT_USER_DATA_JSON = 12
  };
  const flatbuffers::String *id() const {
    return GetPointer<const flatbuffers::String *>(VT_ID);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const ubii::dataStructures::Pose2D *pose() const {
    return GetPointer<const ubii::dataStructures::Pose2D *>(VT_POSE);
  }
  const ubii::dataStructures::Vector2 *size() const {
    return GetStruct<const ubii::dataStructures::Vector2 *>(VT_SIZE);
  }
  const flatbuffers::String *user_data_json() const {
    return GetPointer<const flatbuffers::String *>(VT_USER_DATA_JSON);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ID) &&
           verifier.VerifyString(id()) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_POSE) &&
           verifier.VerifyTable(pose()) &&
           VerifyField<ubii::dataStructures::Vector2>(verifier, VT_SIZE) &&
           VerifyOffset(verifier, VT_USER_DATA_JSON) &&
           verifier.VerifyString(user_data_json()) &&
           verifier.EndTable();
  }
  Object2DT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(Object2DT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Object2D> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Object2DT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct Object2DBuilder {
  typedef Object2D Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(flatbuffers::Offset<flatbuffers::String> id) {
    fbb_.AddOffset(Object2D::VT_ID, id);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Object2D::VT_NAME, name);
  }
  void add_pose(flatbuffers::Offset<ubii::dataStructures::Pose2D> pose) {
    fbb_.AddOffset(Object2D::VT_POSE, pose);
  }
  void add_size(const ubii::dataStructures::Vector2 *size) {
    fbb_.AddStruct(Object2D::VT_SIZE, size);
  }
  void add_user_data_json(flatbuffers::Offset<flatbuffers::String> user_data_json) {
    fbb_.AddOffset(Object2D::VT_USER_DATA_JSON, user_data_json);
  }
  explicit Object2DBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Object2DBuilder &operator=(const Object2DBuilder &);
  flatbuffers::Offset<Object2D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Object2D>(end);
    return o;
  }
};

inline flatbuffers::Offset<Object2D> CreateObject2D(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<ubii::dataStructures::Pose2D> pose = 0,
    const ubii::dataStructures::Vector2 *size = 0,
    flatbuffers::Offset<flatbuffers::String> user_data_json = 0) {
  Object2DBuilder builder_(_fbb);
  builder_.add_user_data_json(user_data_json);
  builder_.add_size(size);
  builder_.add_pose(pose);
  builder_.add_name(name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<Object2D> CreateObject2DDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *id = nullptr,
    const char *name = nullptr,
    flatbuffers::Offset<ubii::dataStructures::Pose2D> pose = 0,
    const ubii::dataStructures::Vector2 *size = 0,
    const char *user_data_json = nullptr) {
  auto id__ = id ? _fbb.CreateString(id) : 0;
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto user_data_json__ = user_data_json ? _fbb.CreateString(user_data_json) : 0;
  return ubii::dataStructures::CreateObject2D(
      _fbb,
      id__,
      name__,
      pose,
      size,
      user_data_json__);
}

flatbuffers::Offset<Object2D> CreateObject2D(flatbuffers::FlatBufferBuilder &_fbb, const Object2DT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline Object2DT *Object2D::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ubii::dataStructures::Object2DT> _o = std::unique_ptr<ubii::dataStructures::Object2DT>(new Object2DT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Object2D::UnPackTo(Object2DT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = id(); if (_e) _o->id = _e->str(); }
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = pose(); if (_e) _o->pose = std::unique_ptr<ubii::dataStructures::Pose2DT>(_e->UnPack(_resolver)); }
  { auto _e = size(); if (_e) _o->size = std::unique_ptr<ubii::dataStructures::Vector2>(new ubii::dataStructures::Vector2(*_e)); }
  { auto _e = user_data_json(); if (_e) _o->user_data_json = _e->str(); }
}

inline flatbuffers::Offset<Object2D> Object2D::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Object2DT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateObject2D(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Object2D> CreateObject2D(flatbuffers::FlatBufferBuilder &_fbb, const Object2DT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Object2DT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _id = _o->id.empty() ? 0 : _fbb.CreateString(_o->id);
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _pose = _o->pose ? CreatePose2D(_fbb, _o->pose.get(), _rehasher) : 0;
  auto _size = _o->size ? _o->size.get() : 0;
  auto _user_data_json = _o->user_data_json.empty() ? 0 : _fbb.CreateString(_o->user_data_json);
  return ubii::dataStructures::CreateObject2D(
      _fbb,
      _id,
      _name,
      _pose,
      _size,
      _user_data_json);
}

inline const ubii::dataStructures::Object2D *GetObject2D(const void *buf) {
  return flatbuffers::GetRoot<ubii::dataStructures::Object2D>(buf);
}

inline const ubii::dataStructures::Object2D *GetSizePrefixedObject2D(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::dataStructures::Object2D>(buf);
}

inline bool VerifyObject2DBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::dataStructures::Object2D>(nullptr);
}

inline bool VerifySizePrefixedObject2DBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::dataStructures::Object2D>(nullptr);
}

inline void FinishObject2DBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::Object2D> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedObject2DBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::Object2D> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<ubii::dataStructures::Object2DT> UnPackObject2D(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::dataStructures::Object2DT>(GetObject2D(buf)->UnPack(res));
}

inline std::unique_ptr<ubii::dataStructures::Object2DT> UnPackSizePrefixedObject2D(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::dataStructures::Object2DT>(GetSizePrefixedObject2D(buf)->UnPack(res));
}

}  // namespace dataStructures
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_OBJECT2D_UBII_DATASTRUCTURES_H_