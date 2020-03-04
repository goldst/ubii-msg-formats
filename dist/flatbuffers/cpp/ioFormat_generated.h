// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_IOFORMAT_UBII_INTERACTIONS_H_
#define FLATBUFFERS_GENERATED_IOFORMAT_UBII_INTERACTIONS_H_

#include "flatbuffers/flatbuffers.h"

namespace ubii {
namespace interactions {

struct IOFormat;

struct IOFormat FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INTERNAL_NAME = 4,
    VT_MESSAGE_FORMAT = 6
  };
  const flatbuffers::String *internal_name() const {
    return GetPointer<const flatbuffers::String *>(VT_INTERNAL_NAME);
  }
  const flatbuffers::String *message_format() const {
    return GetPointer<const flatbuffers::String *>(VT_MESSAGE_FORMAT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_INTERNAL_NAME) &&
           verifier.VerifyString(internal_name()) &&
           VerifyOffset(verifier, VT_MESSAGE_FORMAT) &&
           verifier.VerifyString(message_format()) &&
           verifier.EndTable();
  }
};

struct IOFormatBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_internal_name(flatbuffers::Offset<flatbuffers::String> internal_name) {
    fbb_.AddOffset(IOFormat::VT_INTERNAL_NAME, internal_name);
  }
  void add_message_format(flatbuffers::Offset<flatbuffers::String> message_format) {
    fbb_.AddOffset(IOFormat::VT_MESSAGE_FORMAT, message_format);
  }
  explicit IOFormatBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  IOFormatBuilder &operator=(const IOFormatBuilder &);
  flatbuffers::Offset<IOFormat> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<IOFormat>(end);
    return o;
  }
};

inline flatbuffers::Offset<IOFormat> CreateIOFormat(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> internal_name = 0,
    flatbuffers::Offset<flatbuffers::String> message_format = 0) {
  IOFormatBuilder builder_(_fbb);
  builder_.add_message_format(message_format);
  builder_.add_internal_name(internal_name);
  return builder_.Finish();
}

inline flatbuffers::Offset<IOFormat> CreateIOFormatDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *internal_name = nullptr,
    const char *message_format = nullptr) {
  auto internal_name__ = internal_name ? _fbb.CreateString(internal_name) : 0;
  auto message_format__ = message_format ? _fbb.CreateString(message_format) : 0;
  return ubii::interactions::CreateIOFormat(
      _fbb,
      internal_name__,
      message_format__);
}

inline const ubii::interactions::IOFormat *GetIOFormat(const void *buf) {
  return flatbuffers::GetRoot<ubii::interactions::IOFormat>(buf);
}

inline const ubii::interactions::IOFormat *GetSizePrefixedIOFormat(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::interactions::IOFormat>(buf);
}

inline bool VerifyIOFormatBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::interactions::IOFormat>(nullptr);
}

inline bool VerifySizePrefixedIOFormatBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::interactions::IOFormat>(nullptr);
}

inline void FinishIOFormatBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::interactions::IOFormat> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedIOFormatBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::interactions::IOFormat> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace interactions
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_IOFORMAT_UBII_INTERACTIONS_H_
