// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.devices
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct TopicMux : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static TopicMux GetRootAsTopicMux(ByteBuffer _bb) { return GetRootAsTopicMux(_bb, new TopicMux()); }
  public static TopicMux GetRootAsTopicMux(ByteBuffer _bb, TopicMux obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public TopicMux __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string Id { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetIdBytes() { return __p.__vector_as_span<byte>(4, 1); }
#else
  public ArraySegment<byte>? GetIdBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetIdArray() { return __p.__vector_as_array<byte>(4); }
  public string Name { get { int o = __p.__offset(6); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetNameBytes() { return __p.__vector_as_span<byte>(6, 1); }
#else
  public ArraySegment<byte>? GetNameBytes() { return __p.__vector_as_arraysegment(6); }
#endif
  public byte[] GetNameArray() { return __p.__vector_as_array<byte>(6); }
  public string DataType { get { int o = __p.__offset(8); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetDataTypeBytes() { return __p.__vector_as_span<byte>(8, 1); }
#else
  public ArraySegment<byte>? GetDataTypeBytes() { return __p.__vector_as_arraysegment(8); }
#endif
  public byte[] GetDataTypeArray() { return __p.__vector_as_array<byte>(8); }
  public string TopicSelector { get { int o = __p.__offset(10); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetTopicSelectorBytes() { return __p.__vector_as_span<byte>(10, 1); }
#else
  public ArraySegment<byte>? GetTopicSelectorBytes() { return __p.__vector_as_arraysegment(10); }
#endif
  public byte[] GetTopicSelectorArray() { return __p.__vector_as_array<byte>(10); }
  public string IdentityMatchPattern { get { int o = __p.__offset(12); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetIdentityMatchPatternBytes() { return __p.__vector_as_span<byte>(12, 1); }
#else
  public ArraySegment<byte>? GetIdentityMatchPatternBytes() { return __p.__vector_as_arraysegment(12); }
#endif
  public byte[] GetIdentityMatchPatternArray() { return __p.__vector_as_array<byte>(12); }

  public static Offset<ubii.devices.TopicMux> CreateTopicMux(FlatBufferBuilder builder,
      StringOffset idOffset = default(StringOffset),
      StringOffset nameOffset = default(StringOffset),
      StringOffset data_typeOffset = default(StringOffset),
      StringOffset topic_selectorOffset = default(StringOffset),
      StringOffset identity_match_patternOffset = default(StringOffset)) {
    builder.StartTable(5);
    TopicMux.AddIdentityMatchPattern(builder, identity_match_patternOffset);
    TopicMux.AddTopicSelector(builder, topic_selectorOffset);
    TopicMux.AddDataType(builder, data_typeOffset);
    TopicMux.AddName(builder, nameOffset);
    TopicMux.AddId(builder, idOffset);
    return TopicMux.EndTopicMux(builder);
  }

  public static void StartTopicMux(FlatBufferBuilder builder) { builder.StartTable(5); }
  public static void AddId(FlatBufferBuilder builder, StringOffset idOffset) { builder.AddOffset(0, idOffset.Value, 0); }
  public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { builder.AddOffset(1, nameOffset.Value, 0); }
  public static void AddDataType(FlatBufferBuilder builder, StringOffset dataTypeOffset) { builder.AddOffset(2, dataTypeOffset.Value, 0); }
  public static void AddTopicSelector(FlatBufferBuilder builder, StringOffset topicSelectorOffset) { builder.AddOffset(3, topicSelectorOffset.Value, 0); }
  public static void AddIdentityMatchPattern(FlatBufferBuilder builder, StringOffset identityMatchPatternOffset) { builder.AddOffset(4, identityMatchPatternOffset.Value, 0); }
  public static Offset<ubii.devices.TopicMux> EndTopicMux(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.devices.TopicMux>(o);
  }
  public static void FinishTopicMuxBuffer(FlatBufferBuilder builder, Offset<ubii.devices.TopicMux> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedTopicMuxBuffer(FlatBufferBuilder builder, Offset<ubii.devices.TopicMux> offset) { builder.FinishSizePrefixed(offset.Value); }
  public TopicMuxT UnPack() {
    var _o = new TopicMuxT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(TopicMuxT _o) {
    _o.Id = this.Id;
    _o.Name = this.Name;
    _o.DataType = this.DataType;
    _o.TopicSelector = this.TopicSelector;
    _o.IdentityMatchPattern = this.IdentityMatchPattern;
  }
  public static Offset<ubii.devices.TopicMux> Pack(FlatBufferBuilder builder, TopicMuxT _o) {
    if (_o == null) return default(Offset<ubii.devices.TopicMux>);
    var _id = _o.Id == null ? default(StringOffset) : builder.CreateString(_o.Id);
    var _name = _o.Name == null ? default(StringOffset) : builder.CreateString(_o.Name);
    var _data_type = _o.DataType == null ? default(StringOffset) : builder.CreateString(_o.DataType);
    var _topic_selector = _o.TopicSelector == null ? default(StringOffset) : builder.CreateString(_o.TopicSelector);
    var _identity_match_pattern = _o.IdentityMatchPattern == null ? default(StringOffset) : builder.CreateString(_o.IdentityMatchPattern);
    return CreateTopicMux(
      builder,
      _id,
      _name,
      _data_type,
      _topic_selector,
      _identity_match_pattern);
  }
};

public class TopicMuxT
{
  public string Id { get; set; }
  public string Name { get; set; }
  public string DataType { get; set; }
  public string TopicSelector { get; set; }
  public string IdentityMatchPattern { get; set; }

  public TopicMuxT() {
    this.Id = null;
    this.Name = null;
    this.DataType = null;
    this.TopicSelector = null;
    this.IdentityMatchPattern = null;
  }
  public static TopicMuxT DeserializeFromBinary(byte[] fbBuffer) {
    return TopicMux.GetRootAsTopicMux(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    fbb.Finish(TopicMux.Pack(fbb, this).Value);
    return fbb.DataBuffer.ToSizedArray();
  }
}


}
