// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.interactions
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct IOFormat : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static IOFormat GetRootAsIOFormat(ByteBuffer _bb) { return GetRootAsIOFormat(_bb, new IOFormat()); }
  public static IOFormat GetRootAsIOFormat(ByteBuffer _bb, IOFormat obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public IOFormat __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string InternalName { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetInternalNameBytes() { return __p.__vector_as_span<byte>(4, 1); }
#else
  public ArraySegment<byte>? GetInternalNameBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetInternalNameArray() { return __p.__vector_as_array<byte>(4); }
  public string MessageFormat { get { int o = __p.__offset(6); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetMessageFormatBytes() { return __p.__vector_as_span<byte>(6, 1); }
#else
  public ArraySegment<byte>? GetMessageFormatBytes() { return __p.__vector_as_arraysegment(6); }
#endif
  public byte[] GetMessageFormatArray() { return __p.__vector_as_array<byte>(6); }

  public static Offset<ubii.interactions.IOFormat> CreateIOFormat(FlatBufferBuilder builder,
      StringOffset internal_nameOffset = default(StringOffset),
      StringOffset message_formatOffset = default(StringOffset)) {
    builder.StartTable(2);
    IOFormat.AddMessageFormat(builder, message_formatOffset);
    IOFormat.AddInternalName(builder, internal_nameOffset);
    return IOFormat.EndIOFormat(builder);
  }

  public static void StartIOFormat(FlatBufferBuilder builder) { builder.StartTable(2); }
  public static void AddInternalName(FlatBufferBuilder builder, StringOffset internalNameOffset) { builder.AddOffset(0, internalNameOffset.Value, 0); }
  public static void AddMessageFormat(FlatBufferBuilder builder, StringOffset messageFormatOffset) { builder.AddOffset(1, messageFormatOffset.Value, 0); }
  public static Offset<ubii.interactions.IOFormat> EndIOFormat(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.interactions.IOFormat>(o);
  }
  public static void FinishIOFormatBuffer(FlatBufferBuilder builder, Offset<ubii.interactions.IOFormat> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedIOFormatBuffer(FlatBufferBuilder builder, Offset<ubii.interactions.IOFormat> offset) { builder.FinishSizePrefixed(offset.Value); }
  public IOFormatT UnPack() {
    var _o = new IOFormatT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(IOFormatT _o) {
    _o.InternalName = this.InternalName;
    _o.MessageFormat = this.MessageFormat;
  }
  public static Offset<ubii.interactions.IOFormat> Pack(FlatBufferBuilder builder, IOFormatT _o) {
    if (_o == null) return default(Offset<ubii.interactions.IOFormat>);
    var _internal_name = _o.InternalName == null ? default(StringOffset) : builder.CreateString(_o.InternalName);
    var _message_format = _o.MessageFormat == null ? default(StringOffset) : builder.CreateString(_o.MessageFormat);
    return CreateIOFormat(
      builder,
      _internal_name,
      _message_format);
  }
};

public class IOFormatT
{
  public string InternalName { get; set; }
  public string MessageFormat { get; set; }

  public IOFormatT() {
    this.InternalName = null;
    this.MessageFormat = null;
  }
  public static IOFormatT DeserializeFromBinary(byte[] fbBuffer) {
    return IOFormat.GetRootAsIOFormat(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    fbb.Finish(IOFormat.Pack(fbb, this).Value);
    return fbb.DataBuffer.ToSizedArray();
  }
}


}