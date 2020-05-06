// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.general
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct Success : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static Success GetRootAsSuccess(ByteBuffer _bb) { return GetRootAsSuccess(_bb, new Success()); }
  public static Success GetRootAsSuccess(ByteBuffer _bb, Success obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public Success __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string Title { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetTitleBytes() { return __p.__vector_as_span<byte>(4, 1); }
#else
  public ArraySegment<byte>? GetTitleBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetTitleArray() { return __p.__vector_as_array<byte>(4); }
  public string Message { get { int o = __p.__offset(6); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetMessageBytes() { return __p.__vector_as_span<byte>(6, 1); }
#else
  public ArraySegment<byte>? GetMessageBytes() { return __p.__vector_as_arraysegment(6); }
#endif
  public byte[] GetMessageArray() { return __p.__vector_as_array<byte>(6); }

  public static Offset<ubii.general.Success> CreateSuccess(FlatBufferBuilder builder,
      StringOffset titleOffset = default(StringOffset),
      StringOffset messageOffset = default(StringOffset)) {
    builder.StartTable(2);
    Success.AddMessage(builder, messageOffset);
    Success.AddTitle(builder, titleOffset);
    return Success.EndSuccess(builder);
  }

  public static void StartSuccess(FlatBufferBuilder builder) { builder.StartTable(2); }
  public static void AddTitle(FlatBufferBuilder builder, StringOffset titleOffset) { builder.AddOffset(0, titleOffset.Value, 0); }
  public static void AddMessage(FlatBufferBuilder builder, StringOffset messageOffset) { builder.AddOffset(1, messageOffset.Value, 0); }
  public static Offset<ubii.general.Success> EndSuccess(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.general.Success>(o);
  }
  public static void FinishSuccessBuffer(FlatBufferBuilder builder, Offset<ubii.general.Success> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedSuccessBuffer(FlatBufferBuilder builder, Offset<ubii.general.Success> offset) { builder.FinishSizePrefixed(offset.Value); }
  public SuccessT UnPack() {
    var _o = new SuccessT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(SuccessT _o) {
    _o.Title = this.Title;
    _o.Message = this.Message;
  }
  public static Offset<ubii.general.Success> Pack(FlatBufferBuilder builder, SuccessT _o) {
    if (_o == null) return default(Offset<ubii.general.Success>);
    var _title = _o.Title == null ? default(StringOffset) : builder.CreateString(_o.Title);
    var _message = _o.Message == null ? default(StringOffset) : builder.CreateString(_o.Message);
    return CreateSuccess(
      builder,
      _title,
      _message);
  }
};

public class SuccessT
{
  public string Title { get; set; }
  public string Message { get; set; }

  public SuccessT() {
    this.Title = null;
    this.Message = null;
  }
  public static SuccessT DeserializeFromBinary(byte[] fbBuffer) {
    return Success.GetRootAsSuccess(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    fbb.Finish(Success.Pack(fbb, this).Value);
    return fbb.DataBuffer.ToSizedArray();
  }
}


}
