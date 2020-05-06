// automatically generated by the FlatBuffers compiler, do not modify

package ubii.clients;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Client extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static Client getRootAsClient(ByteBuffer _bb) { return getRootAsClient(_bb, new Client()); }
  public static Client getRootAsClient(ByteBuffer _bb, Client obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public Client __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String id() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer idAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public ByteBuffer idInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 4, 1); }
  public String name() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer nameAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer nameInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public String tags(int j) { int o = __offset(8); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int tagsLength() { int o = __offset(8); return o != 0 ? __vector_len(o) : 0; }
  public StringVector tagsVector() { return tagsVector(new StringVector()); }
  public StringVector tagsVector(StringVector obj) { int o = __offset(8); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public String description() { int o = __offset(10); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer descriptionAsByteBuffer() { return __vector_as_bytebuffer(10, 1); }
  public ByteBuffer descriptionInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 10, 1); }
  public String devices(int j) { int o = __offset(12); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int devicesLength() { int o = __offset(12); return o != 0 ? __vector_len(o) : 0; }
  public StringVector devicesVector() { return devicesVector(new StringVector()); }
  public StringVector devicesVector(StringVector obj) { int o = __offset(12); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }

  public static int createClient(FlatBufferBuilder builder,
      int idOffset,
      int nameOffset,
      int tagsOffset,
      int descriptionOffset,
      int devicesOffset) {
    builder.startTable(5);
    Client.addDevices(builder, devicesOffset);
    Client.addDescription(builder, descriptionOffset);
    Client.addTags(builder, tagsOffset);
    Client.addName(builder, nameOffset);
    Client.addId(builder, idOffset);
    return Client.endClient(builder);
  }

  public static void startClient(FlatBufferBuilder builder) { builder.startTable(5); }
  public static void addId(FlatBufferBuilder builder, int idOffset) { builder.addOffset(0, idOffset, 0); }
  public static void addName(FlatBufferBuilder builder, int nameOffset) { builder.addOffset(1, nameOffset, 0); }
  public static void addTags(FlatBufferBuilder builder, int tagsOffset) { builder.addOffset(2, tagsOffset, 0); }
  public static int createTagsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startTagsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addDescription(FlatBufferBuilder builder, int descriptionOffset) { builder.addOffset(3, descriptionOffset, 0); }
  public static void addDevices(FlatBufferBuilder builder, int devicesOffset) { builder.addOffset(4, devicesOffset, 0); }
  public static int createDevicesVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startDevicesVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static int endClient(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishClientBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedClientBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public Client get(int j) { return get(new Client(), j); }
    public Client get(Client obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

