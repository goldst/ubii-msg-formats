// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.topicData
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct TopicData : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static TopicData GetRootAsTopicData(ByteBuffer _bb) { return GetRootAsTopicData(_bb, new TopicData()); }
  public static TopicData GetRootAsTopicData(ByteBuffer _bb, TopicData obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public TopicData __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public ubii.topicData.TopicDataContent ContentType { get { int o = __p.__offset(4); return o != 0 ? (ubii.topicData.TopicDataContent)__p.bb.Get(o + __p.bb_pos) : ubii.topicData.TopicDataContent.NONE; } }
  public TTable? Content<TTable>() where TTable : struct, IFlatbufferObject { int o = __p.__offset(6); return o != 0 ? (TTable?)__p.__union<TTable>(o + __p.bb_pos) : null; }

  public static Offset<ubii.topicData.TopicData> CreateTopicData(FlatBufferBuilder builder,
      ubii.topicData.TopicDataContent content_type = ubii.topicData.TopicDataContent.NONE,
      int contentOffset = 0) {
    builder.StartTable(2);
    TopicData.AddContent(builder, contentOffset);
    TopicData.AddContentType(builder, content_type);
    return TopicData.EndTopicData(builder);
  }

  public static void StartTopicData(FlatBufferBuilder builder) { builder.StartTable(2); }
  public static void AddContentType(FlatBufferBuilder builder, ubii.topicData.TopicDataContent contentType) { builder.AddByte(0, (byte)contentType, 0); }
  public static void AddContent(FlatBufferBuilder builder, int contentOffset) { builder.AddOffset(1, contentOffset, 0); }
  public static Offset<ubii.topicData.TopicData> EndTopicData(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.topicData.TopicData>(o);
  }
  public static void FinishTopicDataBuffer(FlatBufferBuilder builder, Offset<ubii.topicData.TopicData> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedTopicDataBuffer(FlatBufferBuilder builder, Offset<ubii.topicData.TopicData> offset) { builder.FinishSizePrefixed(offset.Value); }
  public TopicDataT UnPack() {
    var _o = new TopicDataT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(TopicDataT _o) {
    _o.Content = new ubii.topicData.TopicDataContentUnion();
    _o.Content.Type = this.ContentType;
    switch (this.ContentType) {
      default: break;
      case ubii.topicData.TopicDataContent.topic_data_records:
        _o.Content.Value = this.Content<ubii.topicData.TopicDataRecordList>().HasValue ? this.Content<ubii.topicData.TopicDataRecordList>().Value.UnPack() : null;
        break;
      case ubii.topicData.TopicDataContent.error:
        _o.Content.Value = this.Content<ubii.general.Error>().HasValue ? this.Content<ubii.general.Error>().Value.UnPack() : null;
        break;
    }
  }
  public static Offset<ubii.topicData.TopicData> Pack(FlatBufferBuilder builder, TopicDataT _o) {
    if (_o == null) return default(Offset<ubii.topicData.TopicData>);
    var _content_type = _o.Content == null ? ubii.topicData.TopicDataContent.NONE : _o.Content.Type;
    var _content = _o.Content == null ? 0 : ubii.topicData.TopicDataContentUnion.Pack(builder, _o.Content);
    return CreateTopicData(
      builder,
      _content_type,
      _content);
  }
};

public class TopicDataT
{
  public ubii.topicData.TopicDataContentUnion Content { get; set; }

  public TopicDataT() {
    this.Content = null;
  }
  public static TopicDataT DeserializeFromBinary(byte[] fbBuffer) {
    return TopicData.GetRootAsTopicData(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    fbb.Finish(TopicData.Pack(fbb, this).Value);
    return fbb.DataBuffer.ToSizedArray();
  }
}


}