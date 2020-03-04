// automatically generated by the FlatBuffers compiler, do not modify

package ubii.dataStructures;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class MouseEvent extends Table {
  public static MouseEvent getRootAsMouseEvent(ByteBuffer _bb) { return getRootAsMouseEvent(_bb, new MouseEvent()); }
  public static MouseEvent getRootAsMouseEvent(ByteBuffer _bb, MouseEvent obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; vtable_start = bb_pos - bb.getInt(bb_pos); vtable_size = bb.getShort(vtable_start); }
  public MouseEvent __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public byte type() { int o = __offset(4); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public byte button() { int o = __offset(6); return o != 0 ? bb.get(o + bb_pos) : 0; }

  public static int createMouseEvent(FlatBufferBuilder builder,
      byte type,
      byte button) {
    builder.startObject(2);
    MouseEvent.addButton(builder, button);
    MouseEvent.addType(builder, type);
    return MouseEvent.endMouseEvent(builder);
  }

  public static void startMouseEvent(FlatBufferBuilder builder) { builder.startObject(2); }
  public static void addType(FlatBufferBuilder builder, byte type) { builder.addByte(0, type, 0); }
  public static void addButton(FlatBufferBuilder builder, byte button) { builder.addByte(1, button, 0); }
  public static int endMouseEvent(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
  public static void finishMouseEventBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedMouseEventBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }
}

