// automatically generated by the FlatBuffers compiler, do not modify

package ubii.dataStructures;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Image2D extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static Image2D getRootAsImage2D(ByteBuffer _bb) { return getRootAsImage2D(_bb, new Image2D()); }
  public static Image2D getRootAsImage2D(ByteBuffer _bb, Image2D obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public Image2D __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int width() { int o = __offset(4); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public int height() { int o = __offset(6); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public byte dataFormat() { int o = __offset(8); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public byte data(int j) { int o = __offset(10); return o != 0 ? bb.get(__vector(o) + j * 1) : 0; }
  public int dataLength() { int o = __offset(10); return o != 0 ? __vector_len(o) : 0; }
  public ByteVector dataVector() { return dataVector(new ByteVector()); }
  public ByteVector dataVector(ByteVector obj) { int o = __offset(10); return o != 0 ? obj.__assign(__vector(o), bb) : null; }
  public ByteBuffer dataAsByteBuffer() { return __vector_as_bytebuffer(10, 1); }
  public ByteBuffer dataInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 10, 1); }

  public static int createImage2D(FlatBufferBuilder builder,
      int width,
      int height,
      byte data_format,
      int dataOffset) {
    builder.startTable(4);
    Image2D.addData(builder, dataOffset);
    Image2D.addHeight(builder, height);
    Image2D.addWidth(builder, width);
    Image2D.addDataFormat(builder, data_format);
    return Image2D.endImage2D(builder);
  }

  public static void startImage2D(FlatBufferBuilder builder) { builder.startTable(4); }
  public static void addWidth(FlatBufferBuilder builder, int width) { builder.addInt(0, width, 0); }
  public static void addHeight(FlatBufferBuilder builder, int height) { builder.addInt(1, height, 0); }
  public static void addDataFormat(FlatBufferBuilder builder, byte dataFormat) { builder.addByte(2, dataFormat, 0); }
  public static void addData(FlatBufferBuilder builder, int dataOffset) { builder.addOffset(3, dataOffset, 0); }
  public static int createDataVector(FlatBufferBuilder builder, byte[] data) { return builder.createByteVector(data); }
  public static int createDataVector(FlatBufferBuilder builder, ByteBuffer data) { return builder.createByteVector(data); }
  public static void startDataVector(FlatBufferBuilder builder, int numElems) { builder.startVector(1, numElems, 1); }
  public static int endImage2D(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishImage2DBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedImage2DBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public Image2D get(int j) { return get(new Image2D(), j); }
    public Image2D get(Image2D obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

