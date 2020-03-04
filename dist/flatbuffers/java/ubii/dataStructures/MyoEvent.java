// automatically generated by the FlatBuffers compiler, do not modify

package ubii.dataStructures;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class MyoEvent extends Table {
  public static MyoEvent getRootAsMyoEvent(ByteBuffer _bb) { return getRootAsMyoEvent(_bb, new MyoEvent()); }
  public static MyoEvent getRootAsMyoEvent(ByteBuffer _bb, MyoEvent obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; vtable_start = bb_pos - bb.getInt(bb_pos); vtable_size = bb.getShort(vtable_start); }
  public MyoEvent __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public Vector8 emg() { return emg(new Vector8()); }
  public Vector8 emg(Vector8 obj) { int o = __offset(4); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public Quaternion orientation() { return orientation(new Quaternion()); }
  public Quaternion orientation(Quaternion obj) { int o = __offset(6); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public Vector3 gyroscope() { return gyroscope(new Vector3()); }
  public Vector3 gyroscope(Vector3 obj) { int o = __offset(8); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public Vector3 accelerometer() { return accelerometer(new Vector3()); }
  public Vector3 accelerometer(Vector3 obj) { int o = __offset(10); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public byte gesture() { int o = __offset(12); return o != 0 ? bb.get(o + bb_pos) : 0; }

  public static void startMyoEvent(FlatBufferBuilder builder) { builder.startObject(5); }
  public static void addEmg(FlatBufferBuilder builder, int emgOffset) { builder.addStruct(0, emgOffset, 0); }
  public static void addOrientation(FlatBufferBuilder builder, int orientationOffset) { builder.addStruct(1, orientationOffset, 0); }
  public static void addGyroscope(FlatBufferBuilder builder, int gyroscopeOffset) { builder.addStruct(2, gyroscopeOffset, 0); }
  public static void addAccelerometer(FlatBufferBuilder builder, int accelerometerOffset) { builder.addStruct(3, accelerometerOffset, 0); }
  public static void addGesture(FlatBufferBuilder builder, byte gesture) { builder.addByte(4, gesture, 0); }
  public static int endMyoEvent(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
  public static void finishMyoEventBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedMyoEventBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }
}

