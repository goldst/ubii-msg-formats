// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.dataStructures
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct Object3D : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static Object3D GetRootAsObject3D(ByteBuffer _bb) { return GetRootAsObject3D(_bb, new Object3D()); }
  public static Object3D GetRootAsObject3D(ByteBuffer _bb, Object3D obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public Object3D __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

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
  public ubii.dataStructures.Pose3D? Pose { get { int o = __p.__offset(8); return o != 0 ? (ubii.dataStructures.Pose3D?)(new ubii.dataStructures.Pose3D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public ubii.dataStructures.Vector3? Size { get { int o = __p.__offset(10); return o != 0 ? (ubii.dataStructures.Vector3?)(new ubii.dataStructures.Vector3()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public string UserDataJson { get { int o = __p.__offset(12); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetUserDataJsonBytes() { return __p.__vector_as_span<byte>(12, 1); }
#else
  public ArraySegment<byte>? GetUserDataJsonBytes() { return __p.__vector_as_arraysegment(12); }
#endif
  public byte[] GetUserDataJsonArray() { return __p.__vector_as_array<byte>(12); }

  public static void StartObject3D(FlatBufferBuilder builder) { builder.StartTable(5); }
  public static void AddId(FlatBufferBuilder builder, StringOffset idOffset) { builder.AddOffset(0, idOffset.Value, 0); }
  public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { builder.AddOffset(1, nameOffset.Value, 0); }
  public static void AddPose(FlatBufferBuilder builder, Offset<ubii.dataStructures.Pose3D> poseOffset) { builder.AddOffset(2, poseOffset.Value, 0); }
  public static void AddSize(FlatBufferBuilder builder, Offset<ubii.dataStructures.Vector3> sizeOffset) { builder.AddStruct(3, sizeOffset.Value, 0); }
  public static void AddUserDataJson(FlatBufferBuilder builder, StringOffset userDataJsonOffset) { builder.AddOffset(4, userDataJsonOffset.Value, 0); }
  public static Offset<ubii.dataStructures.Object3D> EndObject3D(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.dataStructures.Object3D>(o);
  }
  public static void FinishObject3DBuffer(FlatBufferBuilder builder, Offset<ubii.dataStructures.Object3D> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedObject3DBuffer(FlatBufferBuilder builder, Offset<ubii.dataStructures.Object3D> offset) { builder.FinishSizePrefixed(offset.Value); }
  public Object3DT UnPack() {
    var _o = new Object3DT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(Object3DT _o) {
    _o.Id = this.Id;
    _o.Name = this.Name;
    _o.Pose = this.Pose.HasValue ? this.Pose.Value.UnPack() : null;
    _o.Size = this.Size.HasValue ? this.Size.Value.UnPack() : null;
    _o.UserDataJson = this.UserDataJson;
  }
  public static Offset<ubii.dataStructures.Object3D> Pack(FlatBufferBuilder builder, Object3DT _o) {
    if (_o == null) return default(Offset<ubii.dataStructures.Object3D>);
    var _id = _o.Id == null ? default(StringOffset) : builder.CreateString(_o.Id);
    var _name = _o.Name == null ? default(StringOffset) : builder.CreateString(_o.Name);
    var _pose = _o.Pose == null ? default(Offset<ubii.dataStructures.Pose3D>) : ubii.dataStructures.Pose3D.Pack(builder, _o.Pose);
    var _user_data_json = _o.UserDataJson == null ? default(StringOffset) : builder.CreateString(_o.UserDataJson);
    StartObject3D(builder);
    AddId(builder, _id);
    AddName(builder, _name);
    AddPose(builder, _pose);
    AddSize(builder, ubii.dataStructures.Vector3.Pack(builder, _o.Size));
    AddUserDataJson(builder, _user_data_json);
    return EndObject3D(builder);
  }
};

public class Object3DT
{
  public string Id { get; set; }
  public string Name { get; set; }
  public ubii.dataStructures.Pose3DT Pose { get; set; }
  public ubii.dataStructures.Vector3T Size { get; set; }
  public string UserDataJson { get; set; }

  public Object3DT() {
    this.Id = null;
    this.Name = null;
    this.Pose = null;
    this.Size = new ubii.dataStructures.Vector3T();
    this.UserDataJson = null;
  }
  public static Object3DT DeserializeFromBinary(byte[] fbBuffer) {
    return Object3D.GetRootAsObject3D(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    fbb.Finish(Object3D.Pack(fbb, this).Value);
    return fbb.DataBuffer.ToSizedArray();
  }
}


}
