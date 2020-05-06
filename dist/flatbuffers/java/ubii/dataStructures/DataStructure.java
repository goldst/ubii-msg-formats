// automatically generated by the FlatBuffers compiler, do not modify

package ubii.dataStructures;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class DataStructure extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static DataStructure getRootAsDataStructure(ByteBuffer _bb) { return getRootAsDataStructure(_bb, new DataStructure()); }
  public static DataStructure getRootAsDataStructure(ByteBuffer _bb, DataStructure obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public DataStructure __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public boolean bool() { int o = __offset(4); return o != 0 ? 0!=bb.get(o + bb_pos) : false; }
  public boolean boolList(int j) { int o = __offset(6); return o != 0 ? 0!=bb.get(__vector(o) + j * 1) : false; }
  public int boolListLength() { int o = __offset(6); return o != 0 ? __vector_len(o) : 0; }
  public BooleanVector boolListVector() { return boolListVector(new BooleanVector()); }
  public BooleanVector boolListVector(BooleanVector obj) { int o = __offset(6); return o != 0 ? obj.__assign(__vector(o), bb) : null; }
  public ByteBuffer boolListAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer boolListInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public String string() { int o = __offset(8); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer stringAsByteBuffer() { return __vector_as_bytebuffer(8, 1); }
  public ByteBuffer stringInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 8, 1); }
  public String stringList(int j) { int o = __offset(10); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int stringListLength() { int o = __offset(10); return o != 0 ? __vector_len(o) : 0; }
  public StringVector stringListVector() { return stringListVector(new StringVector()); }
  public StringVector stringListVector(StringVector obj) { int o = __offset(10); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public byte byte() { int o = __offset(12); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public int int32() { int o = __offset(14); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public int int32List(int j) { int o = __offset(16); return o != 0 ? bb.getInt(__vector(o) + j * 4) : 0; }
  public int int32ListLength() { int o = __offset(16); return o != 0 ? __vector_len(o) : 0; }
  public IntVector int32ListVector() { return int32ListVector(new IntVector()); }
  public IntVector int32ListVector(IntVector obj) { int o = __offset(16); return o != 0 ? obj.__assign(__vector(o), bb) : null; }
  public ByteBuffer int32ListAsByteBuffer() { return __vector_as_bytebuffer(16, 4); }
  public ByteBuffer int32ListInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 16, 4); }
  public float float() { int o = __offset(18); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }
  public float floatList(int j) { int o = __offset(20); return o != 0 ? bb.getFloat(__vector(o) + j * 4) : 0; }
  public int floatListLength() { int o = __offset(20); return o != 0 ? __vector_len(o) : 0; }
  public FloatVector floatListVector() { return floatListVector(new FloatVector()); }
  public FloatVector floatListVector(FloatVector obj) { int o = __offset(20); return o != 0 ? obj.__assign(__vector(o), bb) : null; }
  public ByteBuffer floatListAsByteBuffer() { return __vector_as_bytebuffer(20, 4); }
  public ByteBuffer floatListInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 20, 4); }
  public double double() { int o = __offset(22); return o != 0 ? bb.getDouble(o + bb_pos) : 0.0; }
  public double doubleList(int j) { int o = __offset(24); return o != 0 ? bb.getDouble(__vector(o) + j * 8) : 0; }
  public int doubleListLength() { int o = __offset(24); return o != 0 ? __vector_len(o) : 0; }
  public DoubleVector doubleListVector() { return doubleListVector(new DoubleVector()); }
  public DoubleVector doubleListVector(DoubleVector obj) { int o = __offset(24); return o != 0 ? obj.__assign(__vector(o), bb) : null; }
  public ByteBuffer doubleListAsByteBuffer() { return __vector_as_bytebuffer(24, 8); }
  public ByteBuffer doubleListInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 24, 8); }
  public ubii.dataStructures.Vector2 vector2() { return vector2(new ubii.dataStructures.Vector2()); }
  public ubii.dataStructures.Vector2 vector2(ubii.dataStructures.Vector2 obj) { int o = __offset(26); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.Vector3 vector3() { return vector3(new ubii.dataStructures.Vector3()); }
  public ubii.dataStructures.Vector3 vector3(ubii.dataStructures.Vector3 obj) { int o = __offset(28); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.Vector4 vector4() { return vector4(new ubii.dataStructures.Vector4()); }
  public ubii.dataStructures.Vector4 vector4(ubii.dataStructures.Vector4 obj) { int o = __offset(30); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.Quaternion quaternion() { return quaternion(new ubii.dataStructures.Quaternion()); }
  public ubii.dataStructures.Quaternion quaternion(ubii.dataStructures.Quaternion obj) { int o = __offset(32); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.Matrix3x2 matrix3x2() { return matrix3x2(new ubii.dataStructures.Matrix3x2()); }
  public ubii.dataStructures.Matrix3x2 matrix3x2(ubii.dataStructures.Matrix3x2 obj) { int o = __offset(34); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.Matrix4x4 matrix4x4() { return matrix4x4(new ubii.dataStructures.Matrix4x4()); }
  public ubii.dataStructures.Matrix4x4 matrix4x4(ubii.dataStructures.Matrix4x4 obj) { int o = __offset(36); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.Color color() { return color(new ubii.dataStructures.Color()); }
  public ubii.dataStructures.Color color(ubii.dataStructures.Color obj) { int o = __offset(38); return o != 0 ? obj.__assign(o + bb_pos, bb) : null; }
  public ubii.dataStructures.TouchEvent touchEvent() { return touchEvent(new ubii.dataStructures.TouchEvent()); }
  public ubii.dataStructures.TouchEvent touchEvent(ubii.dataStructures.TouchEvent obj) { int o = __offset(40); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.KeyEvent keyEvent() { return keyEvent(new ubii.dataStructures.KeyEvent()); }
  public ubii.dataStructures.KeyEvent keyEvent(ubii.dataStructures.KeyEvent obj) { int o = __offset(42); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.MouseEvent mouseEvent() { return mouseEvent(new ubii.dataStructures.MouseEvent()); }
  public ubii.dataStructures.MouseEvent mouseEvent(ubii.dataStructures.MouseEvent obj) { int o = __offset(44); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.MyoEvent myoEvent() { return myoEvent(new ubii.dataStructures.MyoEvent()); }
  public ubii.dataStructures.MyoEvent myoEvent(ubii.dataStructures.MyoEvent obj) { int o = __offset(46); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.Pose2D pose2D() { return pose2D(new ubii.dataStructures.Pose2D()); }
  public ubii.dataStructures.Pose2D pose2D(ubii.dataStructures.Pose2D obj) { int o = __offset(48); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.Pose3D pose3D() { return pose3D(new ubii.dataStructures.Pose3D()); }
  public ubii.dataStructures.Pose3D pose3D(ubii.dataStructures.Pose3D obj) { int o = __offset(50); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.Object2D object2D() { return object2D(new ubii.dataStructures.Object2D()); }
  public ubii.dataStructures.Object2D object2D(ubii.dataStructures.Object2D obj) { int o = __offset(52); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.Object3D object3D() { return object3D(new ubii.dataStructures.Object3D()); }
  public ubii.dataStructures.Object3D object3D(ubii.dataStructures.Object3D obj) { int o = __offset(54); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.Object2D object2DList(int j) { return object2DList(new ubii.dataStructures.Object2D(), j); }
  public ubii.dataStructures.Object2D object2DList(ubii.dataStructures.Object2D obj, int j) { int o = __offset(56); return o != 0 ? obj.__assign(__indirect(__vector(o) + j * 4), bb) : null; }
  public int object2DListLength() { int o = __offset(56); return o != 0 ? __vector_len(o) : 0; }
  public ubii.dataStructures.Object2D.Vector object2DListVector() { return object2DListVector(new ubii.dataStructures.Object2D.Vector()); }
  public ubii.dataStructures.Object2D.Vector object2DListVector(ubii.dataStructures.Object2D.Vector obj) { int o = __offset(56); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public ubii.dataStructures.Object3D object3DList(int j) { return object3DList(new ubii.dataStructures.Object3D(), j); }
  public ubii.dataStructures.Object3D object3DList(ubii.dataStructures.Object3D obj, int j) { int o = __offset(58); return o != 0 ? obj.__assign(__indirect(__vector(o) + j * 4), bb) : null; }
  public int object3DListLength() { int o = __offset(58); return o != 0 ? __vector_len(o) : 0; }
  public ubii.dataStructures.Object3D.Vector object3DListVector() { return object3DListVector(new ubii.dataStructures.Object3D.Vector()); }
  public ubii.dataStructures.Object3D.Vector object3DListVector(ubii.dataStructures.Object3D.Vector obj) { int o = __offset(58); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public ubii.dataStructures.Image2D image2D() { return image2D(new ubii.dataStructures.Image2D()); }
  public ubii.dataStructures.Image2D image2D(ubii.dataStructures.Image2D obj) { int o = __offset(60); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.dataStructures.Image2D image2DList(int j) { return image2DList(new ubii.dataStructures.Image2D(), j); }
  public ubii.dataStructures.Image2D image2DList(ubii.dataStructures.Image2D obj, int j) { int o = __offset(62); return o != 0 ? obj.__assign(__indirect(__vector(o) + j * 4), bb) : null; }
  public int image2DListLength() { int o = __offset(62); return o != 0 ? __vector_len(o) : 0; }
  public ubii.dataStructures.Image2D.Vector image2DListVector() { return image2DListVector(new ubii.dataStructures.Image2D.Vector()); }
  public ubii.dataStructures.Image2D.Vector image2DListVector(ubii.dataStructures.Image2D.Vector obj) { int o = __offset(62); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public ubii.sessions.Session session() { return session(new ubii.sessions.Session()); }
  public ubii.sessions.Session session(ubii.sessions.Session obj) { int o = __offset(64); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public ubii.interactions.Interaction interaction() { return interaction(new ubii.interactions.Interaction()); }
  public ubii.interactions.Interaction interaction(ubii.interactions.Interaction obj) { int o = __offset(66); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }

  public static void startDataStructure(FlatBufferBuilder builder) { builder.startTable(32); }
  public static void addBool(FlatBufferBuilder builder, boolean bool) { builder.addBoolean(0, bool, false); }
  public static void addBoolList(FlatBufferBuilder builder, int boolListOffset) { builder.addOffset(1, boolListOffset, 0); }
  public static int createBoolListVector(FlatBufferBuilder builder, boolean[] data) { builder.startVector(1, data.length, 1); for (int i = data.length - 1; i >= 0; i--) builder.addBoolean(data[i]); return builder.endVector(); }
  public static void startBoolListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(1, numElems, 1); }
  public static void addString(FlatBufferBuilder builder, int stringOffset) { builder.addOffset(2, stringOffset, 0); }
  public static void addStringList(FlatBufferBuilder builder, int stringListOffset) { builder.addOffset(3, stringListOffset, 0); }
  public static int createStringListVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startStringListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addByte(FlatBufferBuilder builder, byte byte) { builder.addByte(4, byte, 0); }
  public static void addInt32(FlatBufferBuilder builder, int int32) { builder.addInt(5, int32, 0); }
  public static void addInt32List(FlatBufferBuilder builder, int int32ListOffset) { builder.addOffset(6, int32ListOffset, 0); }
  public static int createInt32ListVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addInt(data[i]); return builder.endVector(); }
  public static void startInt32ListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addFloat(FlatBufferBuilder builder, float float) { builder.addFloat(7, float, 0.0f); }
  public static void addFloatList(FlatBufferBuilder builder, int floatListOffset) { builder.addOffset(8, floatListOffset, 0); }
  public static int createFloatListVector(FlatBufferBuilder builder, float[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addFloat(data[i]); return builder.endVector(); }
  public static void startFloatListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addDouble(FlatBufferBuilder builder, double double) { builder.addDouble(9, double, 0.0); }
  public static void addDoubleList(FlatBufferBuilder builder, int doubleListOffset) { builder.addOffset(10, doubleListOffset, 0); }
  public static int createDoubleListVector(FlatBufferBuilder builder, double[] data) { builder.startVector(8, data.length, 8); for (int i = data.length - 1; i >= 0; i--) builder.addDouble(data[i]); return builder.endVector(); }
  public static void startDoubleListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(8, numElems, 8); }
  public static void addVector2(FlatBufferBuilder builder, int vector2Offset) { builder.addStruct(11, vector2Offset, 0); }
  public static void addVector3(FlatBufferBuilder builder, int vector3Offset) { builder.addStruct(12, vector3Offset, 0); }
  public static void addVector4(FlatBufferBuilder builder, int vector4Offset) { builder.addStruct(13, vector4Offset, 0); }
  public static void addQuaternion(FlatBufferBuilder builder, int quaternionOffset) { builder.addStruct(14, quaternionOffset, 0); }
  public static void addMatrix3x2(FlatBufferBuilder builder, int matrix3x2Offset) { builder.addStruct(15, matrix3x2Offset, 0); }
  public static void addMatrix4x4(FlatBufferBuilder builder, int matrix4x4Offset) { builder.addStruct(16, matrix4x4Offset, 0); }
  public static void addColor(FlatBufferBuilder builder, int colorOffset) { builder.addStruct(17, colorOffset, 0); }
  public static void addTouchEvent(FlatBufferBuilder builder, int touchEventOffset) { builder.addOffset(18, touchEventOffset, 0); }
  public static void addKeyEvent(FlatBufferBuilder builder, int keyEventOffset) { builder.addOffset(19, keyEventOffset, 0); }
  public static void addMouseEvent(FlatBufferBuilder builder, int mouseEventOffset) { builder.addOffset(20, mouseEventOffset, 0); }
  public static void addMyoEvent(FlatBufferBuilder builder, int myoEventOffset) { builder.addOffset(21, myoEventOffset, 0); }
  public static void addPose2D(FlatBufferBuilder builder, int pose2DOffset) { builder.addOffset(22, pose2DOffset, 0); }
  public static void addPose3D(FlatBufferBuilder builder, int pose3DOffset) { builder.addOffset(23, pose3DOffset, 0); }
  public static void addObject2D(FlatBufferBuilder builder, int object2DOffset) { builder.addOffset(24, object2DOffset, 0); }
  public static void addObject3D(FlatBufferBuilder builder, int object3DOffset) { builder.addOffset(25, object3DOffset, 0); }
  public static void addObject2DList(FlatBufferBuilder builder, int object2DListOffset) { builder.addOffset(26, object2DListOffset, 0); }
  public static int createObject2DListVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startObject2DListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addObject3DList(FlatBufferBuilder builder, int object3DListOffset) { builder.addOffset(27, object3DListOffset, 0); }
  public static int createObject3DListVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startObject3DListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addImage2D(FlatBufferBuilder builder, int image2DOffset) { builder.addOffset(28, image2DOffset, 0); }
  public static void addImage2DList(FlatBufferBuilder builder, int image2DListOffset) { builder.addOffset(29, image2DListOffset, 0); }
  public static int createImage2DListVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startImage2DListVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addSession(FlatBufferBuilder builder, int sessionOffset) { builder.addOffset(30, sessionOffset, 0); }
  public static void addInteraction(FlatBufferBuilder builder, int interactionOffset) { builder.addOffset(31, interactionOffset, 0); }
  public static int endDataStructure(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishDataStructureBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedDataStructureBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public DataStructure get(int j) { return get(new DataStructure(), j); }
    public DataStructure get(DataStructure obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

