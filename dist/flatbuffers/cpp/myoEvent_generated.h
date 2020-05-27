// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MYOEVENT_UBII_DATASTRUCTURES_H_
#define FLATBUFFERS_GENERATED_MYOEVENT_UBII_DATASTRUCTURES_H_

#include "flatbuffers/flatbuffers.h"

#include "handGestureType_generated.h"
#include "quaternion_generated.h"
#include "vector3_generated.h"
#include "vector8_generated.h"

namespace ubii {
namespace dataStructures {

struct MyoEvent;
struct MyoEventBuilder;
struct MyoEventT;

struct MyoEventT : public flatbuffers::NativeTable {
  typedef MyoEvent TableType;
  std::unique_ptr<ubii::dataStructures::Vector8> emg;
  std::unique_ptr<ubii::dataStructures::Quaternion> orientation;
  std::unique_ptr<ubii::dataStructures::Vector3> gyroscope;
  std::unique_ptr<ubii::dataStructures::Vector3> accelerometer;
  ubii::dataStructures::HandGestureType gesture;
  MyoEventT()
      : gesture(ubii::dataStructures::HandGestureType_REST) {
  }
};

struct MyoEvent FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MyoEventT NativeTableType;
  typedef MyoEventBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_EMG = 4,
    VT_ORIENTATION = 6,
    VT_GYROSCOPE = 8,
    VT_ACCELEROMETER = 10,
    VT_GESTURE = 12
  };
  const ubii::dataStructures::Vector8 *emg() const {
    return GetStruct<const ubii::dataStructures::Vector8 *>(VT_EMG);
  }
  const ubii::dataStructures::Quaternion *orientation() const {
    return GetStruct<const ubii::dataStructures::Quaternion *>(VT_ORIENTATION);
  }
  const ubii::dataStructures::Vector3 *gyroscope() const {
    return GetStruct<const ubii::dataStructures::Vector3 *>(VT_GYROSCOPE);
  }
  const ubii::dataStructures::Vector3 *accelerometer() const {
    return GetStruct<const ubii::dataStructures::Vector3 *>(VT_ACCELEROMETER);
  }
  ubii::dataStructures::HandGestureType gesture() const {
    return static_cast<ubii::dataStructures::HandGestureType>(GetField<int8_t>(VT_GESTURE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<ubii::dataStructures::Vector8>(verifier, VT_EMG) &&
           VerifyField<ubii::dataStructures::Quaternion>(verifier, VT_ORIENTATION) &&
           VerifyField<ubii::dataStructures::Vector3>(verifier, VT_GYROSCOPE) &&
           VerifyField<ubii::dataStructures::Vector3>(verifier, VT_ACCELEROMETER) &&
           VerifyField<int8_t>(verifier, VT_GESTURE) &&
           verifier.EndTable();
  }
  MyoEventT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(MyoEventT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<MyoEvent> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MyoEventT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct MyoEventBuilder {
  typedef MyoEvent Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_emg(const ubii::dataStructures::Vector8 *emg) {
    fbb_.AddStruct(MyoEvent::VT_EMG, emg);
  }
  void add_orientation(const ubii::dataStructures::Quaternion *orientation) {
    fbb_.AddStruct(MyoEvent::VT_ORIENTATION, orientation);
  }
  void add_gyroscope(const ubii::dataStructures::Vector3 *gyroscope) {
    fbb_.AddStruct(MyoEvent::VT_GYROSCOPE, gyroscope);
  }
  void add_accelerometer(const ubii::dataStructures::Vector3 *accelerometer) {
    fbb_.AddStruct(MyoEvent::VT_ACCELEROMETER, accelerometer);
  }
  void add_gesture(ubii::dataStructures::HandGestureType gesture) {
    fbb_.AddElement<int8_t>(MyoEvent::VT_GESTURE, static_cast<int8_t>(gesture), 0);
  }
  explicit MyoEventBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MyoEventBuilder &operator=(const MyoEventBuilder &);
  flatbuffers::Offset<MyoEvent> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MyoEvent>(end);
    return o;
  }
};

inline flatbuffers::Offset<MyoEvent> CreateMyoEvent(
    flatbuffers::FlatBufferBuilder &_fbb,
    const ubii::dataStructures::Vector8 *emg = 0,
    const ubii::dataStructures::Quaternion *orientation = 0,
    const ubii::dataStructures::Vector3 *gyroscope = 0,
    const ubii::dataStructures::Vector3 *accelerometer = 0,
    ubii::dataStructures::HandGestureType gesture = ubii::dataStructures::HandGestureType_REST) {
  MyoEventBuilder builder_(_fbb);
  builder_.add_accelerometer(accelerometer);
  builder_.add_gyroscope(gyroscope);
  builder_.add_orientation(orientation);
  builder_.add_emg(emg);
  builder_.add_gesture(gesture);
  return builder_.Finish();
}

flatbuffers::Offset<MyoEvent> CreateMyoEvent(flatbuffers::FlatBufferBuilder &_fbb, const MyoEventT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline MyoEventT *MyoEvent::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ubii::dataStructures::MyoEventT> _o = std::unique_ptr<ubii::dataStructures::MyoEventT>(new MyoEventT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void MyoEvent::UnPackTo(MyoEventT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = emg(); if (_e) _o->emg = std::unique_ptr<ubii::dataStructures::Vector8>(new ubii::dataStructures::Vector8(*_e)); }
  { auto _e = orientation(); if (_e) _o->orientation = std::unique_ptr<ubii::dataStructures::Quaternion>(new ubii::dataStructures::Quaternion(*_e)); }
  { auto _e = gyroscope(); if (_e) _o->gyroscope = std::unique_ptr<ubii::dataStructures::Vector3>(new ubii::dataStructures::Vector3(*_e)); }
  { auto _e = accelerometer(); if (_e) _o->accelerometer = std::unique_ptr<ubii::dataStructures::Vector3>(new ubii::dataStructures::Vector3(*_e)); }
  { auto _e = gesture(); _o->gesture = _e; }
}

inline flatbuffers::Offset<MyoEvent> MyoEvent::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MyoEventT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateMyoEvent(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<MyoEvent> CreateMyoEvent(flatbuffers::FlatBufferBuilder &_fbb, const MyoEventT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MyoEventT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _emg = _o->emg ? _o->emg.get() : 0;
  auto _orientation = _o->orientation ? _o->orientation.get() : 0;
  auto _gyroscope = _o->gyroscope ? _o->gyroscope.get() : 0;
  auto _accelerometer = _o->accelerometer ? _o->accelerometer.get() : 0;
  auto _gesture = _o->gesture;
  return ubii::dataStructures::CreateMyoEvent(
      _fbb,
      _emg,
      _orientation,
      _gyroscope,
      _accelerometer,
      _gesture);
}

inline const ubii::dataStructures::MyoEvent *GetMyoEvent(const void *buf) {
  return flatbuffers::GetRoot<ubii::dataStructures::MyoEvent>(buf);
}

inline const ubii::dataStructures::MyoEvent *GetSizePrefixedMyoEvent(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::dataStructures::MyoEvent>(buf);
}

inline bool VerifyMyoEventBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::dataStructures::MyoEvent>(nullptr);
}

inline bool VerifySizePrefixedMyoEventBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::dataStructures::MyoEvent>(nullptr);
}

inline void FinishMyoEventBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::MyoEvent> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMyoEventBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::MyoEvent> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<ubii::dataStructures::MyoEventT> UnPackMyoEvent(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::dataStructures::MyoEventT>(GetMyoEvent(buf)->UnPack(res));
}

inline std::unique_ptr<ubii::dataStructures::MyoEventT> UnPackSizePrefixedMyoEvent(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ubii::dataStructures::MyoEventT>(GetSizePrefixedMyoEvent(buf)->UnPack(res));
}

}  // namespace dataStructures
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_MYOEVENT_UBII_DATASTRUCTURES_H_