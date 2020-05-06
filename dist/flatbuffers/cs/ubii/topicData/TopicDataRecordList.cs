// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.topicData
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct TopicDataRecordList : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static TopicDataRecordList GetRootAsTopicDataRecordList(ByteBuffer _bb) { return GetRootAsTopicDataRecordList(_bb, new TopicDataRecordList()); }
  public static TopicDataRecordList GetRootAsTopicDataRecordList(ByteBuffer _bb, TopicDataRecordList obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public TopicDataRecordList __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public ubii.topicData.TopicDataRecord? Elements(int j) { int o = __p.__offset(4); return o != 0 ? (ubii.topicData.TopicDataRecord?)(new ubii.topicData.TopicDataRecord()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int ElementsLength { get { int o = __p.__offset(4); return o != 0 ? __p.__vector_len(o) : 0; } }

  public static Offset<ubii.topicData.TopicDataRecordList> CreateTopicDataRecordList(FlatBufferBuilder builder,
      VectorOffset elementsOffset = default(VectorOffset)) {
    builder.StartTable(1);
    TopicDataRecordList.AddElements(builder, elementsOffset);
    return TopicDataRecordList.EndTopicDataRecordList(builder);
  }

  public static void StartTopicDataRecordList(FlatBufferBuilder builder) { builder.StartTable(1); }
  public static void AddElements(FlatBufferBuilder builder, VectorOffset elementsOffset) { builder.AddOffset(0, elementsOffset.Value, 0); }
  public static VectorOffset CreateElementsVector(FlatBufferBuilder builder, Offset<ubii.topicData.TopicDataRecord>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateElementsVectorBlock(FlatBufferBuilder builder, Offset<ubii.topicData.TopicDataRecord>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartElementsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static Offset<ubii.topicData.TopicDataRecordList> EndTopicDataRecordList(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.topicData.TopicDataRecordList>(o);
  }
  public TopicDataRecordListT UnPack() {
    var _o = new TopicDataRecordListT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(TopicDataRecordListT _o) {
    _o.Elements = new List<ubii.topicData.TopicDataRecordT>();
    for (var _j = 0; _j < this.ElementsLength; ++_j) {_o.Elements.Add(this.Elements(_j).HasValue ? this.Elements(_j).Value.UnPack() : null);}
  }
  public static Offset<ubii.topicData.TopicDataRecordList> Pack(FlatBufferBuilder builder, TopicDataRecordListT _o) {
    if (_o == null) return default(Offset<ubii.topicData.TopicDataRecordList>);
    var _elements = default(VectorOffset);
    if (_o.Elements != null) {
      var __elements = new Offset<ubii.topicData.TopicDataRecord>[_o.Elements.Count];
      for (var _j = 0; _j < __elements.Length; ++_j) { __elements[_j] = ubii.topicData.TopicDataRecord.Pack(builder, _o.Elements[_j]); }
      _elements = CreateElementsVector(builder, __elements);
    }
    return CreateTopicDataRecordList(
      builder,
      _elements);
  }
};

public class TopicDataRecordListT
{
  public List<ubii.topicData.TopicDataRecordT> Elements { get; set; }

  public TopicDataRecordListT() {
    this.Elements = null;
  }
}


}
