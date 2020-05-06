// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_BUTTONEVENTTYPE_UBII_DATASTRUCTURES_H_
#define FLATBUFFERS_GENERATED_BUTTONEVENTTYPE_UBII_DATASTRUCTURES_H_

#include "flatbuffers/flatbuffers.h"

namespace ubii {
namespace dataStructures {

enum ButtonEventType {
  ButtonEventType_UP = 0,
  ButtonEventType_DOWN = 1,
  ButtonEventType_MIN = ButtonEventType_UP,
  ButtonEventType_MAX = ButtonEventType_DOWN
};

inline const ButtonEventType (&EnumValuesButtonEventType())[2] {
  static const ButtonEventType values[] = {
    ButtonEventType_UP,
    ButtonEventType_DOWN
  };
  return values;
}

inline const char * const *EnumNamesButtonEventType() {
  static const char * const names[3] = {
    "UP",
    "DOWN",
    nullptr
  };
  return names;
}

inline const char *EnumNameButtonEventType(ButtonEventType e) {
  if (flatbuffers::IsOutRange(e, ButtonEventType_UP, ButtonEventType_DOWN)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesButtonEventType()[index];
}

}  // namespace dataStructures
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_BUTTONEVENTTYPE_UBII_DATASTRUCTURES_H_
