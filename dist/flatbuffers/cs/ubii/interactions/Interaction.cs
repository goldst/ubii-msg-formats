// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.interactions
{

using global::System;
using global::FlatBuffers;

public struct Interaction : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static Interaction GetRootAsInteraction(ByteBuffer _bb) { return GetRootAsInteraction(_bb, new Interaction()); }
  public static Interaction GetRootAsInteraction(ByteBuffer _bb, Interaction obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p.bb_pos = _i; __p.bb = _bb; }
  public Interaction __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string Id { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetIdBytes() { return __p.__vector_as_span(4); }
#else
  public ArraySegment<byte>? GetIdBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetIdArray() { return __p.__vector_as_array<byte>(4); }
  public string Name { get { int o = __p.__offset(6); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetNameBytes() { return __p.__vector_as_span(6); }
#else
  public ArraySegment<byte>? GetNameBytes() { return __p.__vector_as_arraysegment(6); }
#endif
  public byte[] GetNameArray() { return __p.__vector_as_array<byte>(6); }
  public string Authors(int j) { int o = __p.__offset(8); return o != 0 ? __p.__string(__p.__vector(o) + j * 4) : null; }
  public int AuthorsLength { get { int o = __p.__offset(8); return o != 0 ? __p.__vector_len(o) : 0; } }
  public string Tags(int j) { int o = __p.__offset(10); return o != 0 ? __p.__string(__p.__vector(o) + j * 4) : null; }
  public int TagsLength { get { int o = __p.__offset(10); return o != 0 ? __p.__vector_len(o) : 0; } }
  public string Description { get { int o = __p.__offset(12); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetDescriptionBytes() { return __p.__vector_as_span(12); }
#else
  public ArraySegment<byte>? GetDescriptionBytes() { return __p.__vector_as_arraysegment(12); }
#endif
  public byte[] GetDescriptionArray() { return __p.__vector_as_array<byte>(12); }
  public InteractionStatus Status { get { int o = __p.__offset(14); return o != 0 ? (InteractionStatus)__p.bb.GetSbyte(o + __p.bb_pos) : InteractionStatus.CREATED; } }
  public IOFormat? InputFormats(int j) { int o = __p.__offset(16); return o != 0 ? (IOFormat?)(new IOFormat()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int InputFormatsLength { get { int o = __p.__offset(16); return o != 0 ? __p.__vector_len(o) : 0; } }
  public IOFormat? OutputFormats(int j) { int o = __p.__offset(18); return o != 0 ? (IOFormat?)(new IOFormat()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int OutputFormatsLength { get { int o = __p.__offset(18); return o != 0 ? __p.__vector_len(o) : 0; } }
  public string OnCreated { get { int o = __p.__offset(20); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetOnCreatedBytes() { return __p.__vector_as_span(20); }
#else
  public ArraySegment<byte>? GetOnCreatedBytes() { return __p.__vector_as_arraysegment(20); }
#endif
  public byte[] GetOnCreatedArray() { return __p.__vector_as_array<byte>(20); }
  public string ProcessingCallback { get { int o = __p.__offset(22); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetProcessingCallbackBytes() { return __p.__vector_as_span(22); }
#else
  public ArraySegment<byte>? GetProcessingCallbackBytes() { return __p.__vector_as_arraysegment(22); }
#endif
  public byte[] GetProcessingCallbackArray() { return __p.__vector_as_array<byte>(22); }
  public float ProcessFrequency { get { int o = __p.__offset(24); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }

  public static Offset<Interaction> CreateInteraction(FlatBufferBuilder builder,
      StringOffset idOffset = default(StringOffset),
      StringOffset nameOffset = default(StringOffset),
      VectorOffset authorsOffset = default(VectorOffset),
      VectorOffset tagsOffset = default(VectorOffset),
      StringOffset descriptionOffset = default(StringOffset),
      InteractionStatus status = InteractionStatus.CREATED,
      VectorOffset input_formatsOffset = default(VectorOffset),
      VectorOffset output_formatsOffset = default(VectorOffset),
      StringOffset on_createdOffset = default(StringOffset),
      StringOffset processing_callbackOffset = default(StringOffset),
      float process_frequency = 0.0f) {
    builder.StartObject(11);
    Interaction.AddProcessFrequency(builder, process_frequency);
    Interaction.AddProcessingCallback(builder, processing_callbackOffset);
    Interaction.AddOnCreated(builder, on_createdOffset);
    Interaction.AddOutputFormats(builder, output_formatsOffset);
    Interaction.AddInputFormats(builder, input_formatsOffset);
    Interaction.AddDescription(builder, descriptionOffset);
    Interaction.AddTags(builder, tagsOffset);
    Interaction.AddAuthors(builder, authorsOffset);
    Interaction.AddName(builder, nameOffset);
    Interaction.AddId(builder, idOffset);
    Interaction.AddStatus(builder, status);
    return Interaction.EndInteraction(builder);
  }

  public static void StartInteraction(FlatBufferBuilder builder) { builder.StartObject(11); }
  public static void AddId(FlatBufferBuilder builder, StringOffset idOffset) { builder.AddOffset(0, idOffset.Value, 0); }
  public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { builder.AddOffset(1, nameOffset.Value, 0); }
  public static void AddAuthors(FlatBufferBuilder builder, VectorOffset authorsOffset) { builder.AddOffset(2, authorsOffset.Value, 0); }
  public static VectorOffset CreateAuthorsVector(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateAuthorsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartAuthorsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddTags(FlatBufferBuilder builder, VectorOffset tagsOffset) { builder.AddOffset(3, tagsOffset.Value, 0); }
  public static VectorOffset CreateTagsVector(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateTagsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartTagsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddDescription(FlatBufferBuilder builder, StringOffset descriptionOffset) { builder.AddOffset(4, descriptionOffset.Value, 0); }
  public static void AddStatus(FlatBufferBuilder builder, InteractionStatus status) { builder.AddSbyte(5, (sbyte)status, 0); }
  public static void AddInputFormats(FlatBufferBuilder builder, VectorOffset inputFormatsOffset) { builder.AddOffset(6, inputFormatsOffset.Value, 0); }
  public static VectorOffset CreateInputFormatsVector(FlatBufferBuilder builder, Offset<IOFormat>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateInputFormatsVectorBlock(FlatBufferBuilder builder, Offset<IOFormat>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartInputFormatsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddOutputFormats(FlatBufferBuilder builder, VectorOffset outputFormatsOffset) { builder.AddOffset(7, outputFormatsOffset.Value, 0); }
  public static VectorOffset CreateOutputFormatsVector(FlatBufferBuilder builder, Offset<IOFormat>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateOutputFormatsVectorBlock(FlatBufferBuilder builder, Offset<IOFormat>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartOutputFormatsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddOnCreated(FlatBufferBuilder builder, StringOffset onCreatedOffset) { builder.AddOffset(8, onCreatedOffset.Value, 0); }
  public static void AddProcessingCallback(FlatBufferBuilder builder, StringOffset processingCallbackOffset) { builder.AddOffset(9, processingCallbackOffset.Value, 0); }
  public static void AddProcessFrequency(FlatBufferBuilder builder, float processFrequency) { builder.AddFloat(10, processFrequency, 0.0f); }
  public static Offset<Interaction> EndInteraction(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<Interaction>(o);
  }
  public static void FinishInteractionBuffer(FlatBufferBuilder builder, Offset<Interaction> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedInteractionBuffer(FlatBufferBuilder builder, Offset<Interaction> offset) { builder.FinishSizePrefixed(offset.Value); }
};


}
