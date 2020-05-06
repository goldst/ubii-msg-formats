// automatically generated by the FlatBuffers compiler, do not modify

/**
 * @const
 * @namespace
 */
var ubii = ubii || {};

/**
 * @const
 * @namespace
 */
ubii.dataStructures = ubii.dataStructures || {};

/**
 * @const
 * @namespace
 */
ubii.devices = ubii.devices || {};

/**
 * @const
 * @namespace
 */
ubii.interactions = ubii.interactions || {};

/**
 * @const
 * @namespace
 */
ubii.sessions = ubii.sessions || {};

/**
 * @constructor
 */
ubii.dataStructures.DataStructure = function() {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  this.bb = null;

  /**
   * @type {number}
   */
  this.bb_pos = 0;
};

/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {ubii.dataStructures.DataStructure}
 */
ubii.dataStructures.DataStructure.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.DataStructure=} obj
 * @returns {ubii.dataStructures.DataStructure}
 */
ubii.dataStructures.DataStructure.getRootAsDataStructure = function(bb, obj) {
  return (obj || new ubii.dataStructures.DataStructure).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.DataStructure=} obj
 * @returns {ubii.dataStructures.DataStructure}
 */
ubii.dataStructures.DataStructure.getSizePrefixedRootAsDataStructure = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.dataStructures.DataStructure).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @returns {boolean}
 */
ubii.dataStructures.DataStructure.prototype.bool = function() {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? !!this.bb.readInt8(this.bb_pos + offset) : false;
};

/**
 * @param {number} index
 * @returns {boolean}
 */
ubii.dataStructures.DataStructure.prototype.boolList = function(index) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? !!this.bb.readInt8(this.bb.__vector(this.bb_pos + offset) + index) : false;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.boolListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @returns {Int8Array}
 */
ubii.dataStructures.DataStructure.prototype.boolListArray = function() {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? new Int8Array(this.bb.bytes().buffer, this.bb.bytes().byteOffset + this.bb.__vector(this.bb_pos + offset), this.bb.__vector_len(this.bb_pos + offset)) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.dataStructures.DataStructure.prototype.string = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {number} index
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array}
 */
ubii.dataStructures.DataStructure.prototype.stringList = function(index, optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__string(this.bb.__vector(this.bb_pos + offset) + index * 4, optionalEncoding) : null;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.stringListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.byte = function() {
  var offset = this.bb.__offset(this.bb_pos, 12);
  return offset ? this.bb.readInt8(this.bb_pos + offset) : 0;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.int32 = function() {
  var offset = this.bb.__offset(this.bb_pos, 14);
  return offset ? this.bb.readInt32(this.bb_pos + offset) : 0;
};

/**
 * @param {number} index
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.int32List = function(index) {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? this.bb.readInt32(this.bb.__vector(this.bb_pos + offset) + index * 4) : 0;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.int32ListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @returns {Int32Array}
 */
ubii.dataStructures.DataStructure.prototype.int32ListArray = function() {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? new Int32Array(this.bb.bytes().buffer, this.bb.bytes().byteOffset + this.bb.__vector(this.bb_pos + offset), this.bb.__vector_len(this.bb_pos + offset)) : null;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.float = function() {
  var offset = this.bb.__offset(this.bb_pos, 18);
  return offset ? this.bb.readFloat32(this.bb_pos + offset) : 0.0;
};

/**
 * @param {number} index
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.floatList = function(index) {
  var offset = this.bb.__offset(this.bb_pos, 20);
  return offset ? this.bb.readFloat32(this.bb.__vector(this.bb_pos + offset) + index * 4) : 0;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.floatListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 20);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @returns {Float32Array}
 */
ubii.dataStructures.DataStructure.prototype.floatListArray = function() {
  var offset = this.bb.__offset(this.bb_pos, 20);
  return offset ? new Float32Array(this.bb.bytes().buffer, this.bb.bytes().byteOffset + this.bb.__vector(this.bb_pos + offset), this.bb.__vector_len(this.bb_pos + offset)) : null;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.double = function() {
  var offset = this.bb.__offset(this.bb_pos, 22);
  return offset ? this.bb.readFloat64(this.bb_pos + offset) : 0.0;
};

/**
 * @param {number} index
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.doubleList = function(index) {
  var offset = this.bb.__offset(this.bb_pos, 24);
  return offset ? this.bb.readFloat64(this.bb.__vector(this.bb_pos + offset) + index * 8) : 0;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.doubleListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 24);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @returns {Float64Array}
 */
ubii.dataStructures.DataStructure.prototype.doubleListArray = function() {
  var offset = this.bb.__offset(this.bb_pos, 24);
  return offset ? new Float64Array(this.bb.bytes().buffer, this.bb.bytes().byteOffset + this.bb.__vector(this.bb_pos + offset), this.bb.__vector_len(this.bb_pos + offset)) : null;
};

/**
 * @param {ubii.dataStructures.Vector2=} obj
 * @returns {ubii.dataStructures.Vector2|null}
 */
ubii.dataStructures.DataStructure.prototype.vector2 = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 26);
  return offset ? (obj || new ubii.dataStructures.Vector2).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Vector3=} obj
 * @returns {ubii.dataStructures.Vector3|null}
 */
ubii.dataStructures.DataStructure.prototype.vector3 = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 28);
  return offset ? (obj || new ubii.dataStructures.Vector3).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Vector4=} obj
 * @returns {ubii.dataStructures.Vector4|null}
 */
ubii.dataStructures.DataStructure.prototype.vector4 = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 30);
  return offset ? (obj || new ubii.dataStructures.Vector4).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Quaternion=} obj
 * @returns {ubii.dataStructures.Quaternion|null}
 */
ubii.dataStructures.DataStructure.prototype.quaternion = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 32);
  return offset ? (obj || new ubii.dataStructures.Quaternion).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Matrix3x2=} obj
 * @returns {ubii.dataStructures.Matrix3x2|null}
 */
ubii.dataStructures.DataStructure.prototype.matrix3x2 = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 34);
  return offset ? (obj || new ubii.dataStructures.Matrix3x2).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Matrix4x4=} obj
 * @returns {ubii.dataStructures.Matrix4x4|null}
 */
ubii.dataStructures.DataStructure.prototype.matrix4x4 = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 36);
  return offset ? (obj || new ubii.dataStructures.Matrix4x4).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Color=} obj
 * @returns {ubii.dataStructures.Color|null}
 */
ubii.dataStructures.DataStructure.prototype.color = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 38);
  return offset ? (obj || new ubii.dataStructures.Color).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.TouchEvent=} obj
 * @returns {ubii.dataStructures.TouchEvent|null}
 */
ubii.dataStructures.DataStructure.prototype.touchEvent = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 40);
  return offset ? (obj || new ubii.dataStructures.TouchEvent).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.KeyEvent=} obj
 * @returns {ubii.dataStructures.KeyEvent|null}
 */
ubii.dataStructures.DataStructure.prototype.keyEvent = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 42);
  return offset ? (obj || new ubii.dataStructures.KeyEvent).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.MouseEvent=} obj
 * @returns {ubii.dataStructures.MouseEvent|null}
 */
ubii.dataStructures.DataStructure.prototype.mouseEvent = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 44);
  return offset ? (obj || new ubii.dataStructures.MouseEvent).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.MyoEvent=} obj
 * @returns {ubii.dataStructures.MyoEvent|null}
 */
ubii.dataStructures.DataStructure.prototype.myoEvent = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 46);
  return offset ? (obj || new ubii.dataStructures.MyoEvent).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Pose2D=} obj
 * @returns {ubii.dataStructures.Pose2D|null}
 */
ubii.dataStructures.DataStructure.prototype.pose2D = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 48);
  return offset ? (obj || new ubii.dataStructures.Pose2D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Pose3D=} obj
 * @returns {ubii.dataStructures.Pose3D|null}
 */
ubii.dataStructures.DataStructure.prototype.pose3D = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 50);
  return offset ? (obj || new ubii.dataStructures.Pose3D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Object2D=} obj
 * @returns {ubii.dataStructures.Object2D|null}
 */
ubii.dataStructures.DataStructure.prototype.object2D = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 52);
  return offset ? (obj || new ubii.dataStructures.Object2D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Object3D=} obj
 * @returns {ubii.dataStructures.Object3D|null}
 */
ubii.dataStructures.DataStructure.prototype.object3D = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 54);
  return offset ? (obj || new ubii.dataStructures.Object3D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {number} index
 * @param {ubii.dataStructures.Object2D=} obj
 * @returns {ubii.dataStructures.Object2D}
 */
ubii.dataStructures.DataStructure.prototype.object2DList = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 56);
  return offset ? (obj || new ubii.dataStructures.Object2D).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.object2DListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 56);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {number} index
 * @param {ubii.dataStructures.Object3D=} obj
 * @returns {ubii.dataStructures.Object3D}
 */
ubii.dataStructures.DataStructure.prototype.object3DList = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 58);
  return offset ? (obj || new ubii.dataStructures.Object3D).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.object3DListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 58);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {ubii.dataStructures.Image2D=} obj
 * @returns {ubii.dataStructures.Image2D|null}
 */
ubii.dataStructures.DataStructure.prototype.image2D = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 60);
  return offset ? (obj || new ubii.dataStructures.Image2D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {number} index
 * @param {ubii.dataStructures.Image2D=} obj
 * @returns {ubii.dataStructures.Image2D}
 */
ubii.dataStructures.DataStructure.prototype.image2DList = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 62);
  return offset ? (obj || new ubii.dataStructures.Image2D).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
ubii.dataStructures.DataStructure.prototype.image2DListLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 62);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {ubii.sessions.Session=} obj
 * @returns {ubii.sessions.Session|null}
 */
ubii.dataStructures.DataStructure.prototype.session = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 64);
  return offset ? (obj || new ubii.sessions.Session).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.interactions.Interaction=} obj
 * @returns {ubii.interactions.Interaction|null}
 */
ubii.dataStructures.DataStructure.prototype.interaction = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 66);
  return offset ? (obj || new ubii.interactions.Interaction).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.dataStructures.DataStructure.startDataStructure = function(builder) {
  builder.startObject(32);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {boolean} bool
 */
ubii.dataStructures.DataStructure.addBool = function(builder, bool) {
  builder.addFieldInt8(0, +bool, +false);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} boolListOffset
 */
ubii.dataStructures.DataStructure.addBoolList = function(builder, boolListOffset) {
  builder.addFieldOffset(1, boolListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<boolean>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createBoolListVector = function(builder, data) {
  builder.startVector(1, data.length, 1);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addInt8(+data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startBoolListVector = function(builder, numElems) {
  builder.startVector(1, numElems, 1);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} stringOffset
 */
ubii.dataStructures.DataStructure.addString = function(builder, stringOffset) {
  builder.addFieldOffset(2, stringOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} stringListOffset
 */
ubii.dataStructures.DataStructure.addStringList = function(builder, stringListOffset) {
  builder.addFieldOffset(3, stringListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createStringListVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startStringListVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} byte
 */
ubii.dataStructures.DataStructure.addByte = function(builder, byte) {
  builder.addFieldInt8(4, byte, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} int32
 */
ubii.dataStructures.DataStructure.addInt32 = function(builder, int32) {
  builder.addFieldInt32(5, int32, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} int32ListOffset
 */
ubii.dataStructures.DataStructure.addInt32List = function(builder, int32ListOffset) {
  builder.addFieldOffset(6, int32ListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<number>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createInt32ListVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addInt32(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startInt32ListVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} float
 */
ubii.dataStructures.DataStructure.addFloat = function(builder, float) {
  builder.addFieldFloat32(7, float, 0.0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} floatListOffset
 */
ubii.dataStructures.DataStructure.addFloatList = function(builder, floatListOffset) {
  builder.addFieldOffset(8, floatListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<number>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createFloatListVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addFloat32(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startFloatListVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} double
 */
ubii.dataStructures.DataStructure.addDouble = function(builder, double) {
  builder.addFieldFloat64(9, double, 0.0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} doubleListOffset
 */
ubii.dataStructures.DataStructure.addDoubleList = function(builder, doubleListOffset) {
  builder.addFieldOffset(10, doubleListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<number>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createDoubleListVector = function(builder, data) {
  builder.startVector(8, data.length, 8);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addFloat64(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startDoubleListVector = function(builder, numElems) {
  builder.startVector(8, numElems, 8);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} vector2Offset
 */
ubii.dataStructures.DataStructure.addVector2 = function(builder, vector2Offset) {
  builder.addFieldStruct(11, vector2Offset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} vector3Offset
 */
ubii.dataStructures.DataStructure.addVector3 = function(builder, vector3Offset) {
  builder.addFieldStruct(12, vector3Offset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} vector4Offset
 */
ubii.dataStructures.DataStructure.addVector4 = function(builder, vector4Offset) {
  builder.addFieldStruct(13, vector4Offset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} quaternionOffset
 */
ubii.dataStructures.DataStructure.addQuaternion = function(builder, quaternionOffset) {
  builder.addFieldStruct(14, quaternionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} matrix3x2Offset
 */
ubii.dataStructures.DataStructure.addMatrix3x2 = function(builder, matrix3x2Offset) {
  builder.addFieldStruct(15, matrix3x2Offset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} matrix4x4Offset
 */
ubii.dataStructures.DataStructure.addMatrix4x4 = function(builder, matrix4x4Offset) {
  builder.addFieldStruct(16, matrix4x4Offset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} colorOffset
 */
ubii.dataStructures.DataStructure.addColor = function(builder, colorOffset) {
  builder.addFieldStruct(17, colorOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} touchEventOffset
 */
ubii.dataStructures.DataStructure.addTouchEvent = function(builder, touchEventOffset) {
  builder.addFieldOffset(18, touchEventOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} keyEventOffset
 */
ubii.dataStructures.DataStructure.addKeyEvent = function(builder, keyEventOffset) {
  builder.addFieldOffset(19, keyEventOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} mouseEventOffset
 */
ubii.dataStructures.DataStructure.addMouseEvent = function(builder, mouseEventOffset) {
  builder.addFieldOffset(20, mouseEventOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} myoEventOffset
 */
ubii.dataStructures.DataStructure.addMyoEvent = function(builder, myoEventOffset) {
  builder.addFieldOffset(21, myoEventOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} pose2DOffset
 */
ubii.dataStructures.DataStructure.addPose2D = function(builder, pose2DOffset) {
  builder.addFieldOffset(22, pose2DOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} pose3DOffset
 */
ubii.dataStructures.DataStructure.addPose3D = function(builder, pose3DOffset) {
  builder.addFieldOffset(23, pose3DOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} object2DOffset
 */
ubii.dataStructures.DataStructure.addObject2D = function(builder, object2DOffset) {
  builder.addFieldOffset(24, object2DOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} object3DOffset
 */
ubii.dataStructures.DataStructure.addObject3D = function(builder, object3DOffset) {
  builder.addFieldOffset(25, object3DOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} object2DListOffset
 */
ubii.dataStructures.DataStructure.addObject2DList = function(builder, object2DListOffset) {
  builder.addFieldOffset(26, object2DListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createObject2DListVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startObject2DListVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} object3DListOffset
 */
ubii.dataStructures.DataStructure.addObject3DList = function(builder, object3DListOffset) {
  builder.addFieldOffset(27, object3DListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createObject3DListVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startObject3DListVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} image2DOffset
 */
ubii.dataStructures.DataStructure.addImage2D = function(builder, image2DOffset) {
  builder.addFieldOffset(28, image2DOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} image2DListOffset
 */
ubii.dataStructures.DataStructure.addImage2DList = function(builder, image2DListOffset) {
  builder.addFieldOffset(29, image2DListOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createImage2DListVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.dataStructures.DataStructure.startImage2DListVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} sessionOffset
 */
ubii.dataStructures.DataStructure.addSession = function(builder, sessionOffset) {
  builder.addFieldOffset(30, sessionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} interactionOffset
 */
ubii.dataStructures.DataStructure.addInteraction = function(builder, interactionOffset) {
  builder.addFieldOffset(31, interactionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.endDataStructure = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.dataStructures.DataStructure.finishDataStructureBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.dataStructures.DataStructure.finishSizePrefixedDataStructureBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {boolean} bool
 * @param {flatbuffers.Offset} boolListOffset
 * @param {flatbuffers.Offset} stringOffset
 * @param {flatbuffers.Offset} stringListOffset
 * @param {number} byte
 * @param {number} int32
 * @param {flatbuffers.Offset} int32ListOffset
 * @param {number} float
 * @param {flatbuffers.Offset} floatListOffset
 * @param {number} double
 * @param {flatbuffers.Offset} doubleListOffset
 * @param {flatbuffers.Offset} vector2Offset
 * @param {flatbuffers.Offset} vector3Offset
 * @param {flatbuffers.Offset} vector4Offset
 * @param {flatbuffers.Offset} quaternionOffset
 * @param {flatbuffers.Offset} matrix3x2Offset
 * @param {flatbuffers.Offset} matrix4x4Offset
 * @param {flatbuffers.Offset} colorOffset
 * @param {flatbuffers.Offset} touchEventOffset
 * @param {flatbuffers.Offset} keyEventOffset
 * @param {flatbuffers.Offset} mouseEventOffset
 * @param {flatbuffers.Offset} myoEventOffset
 * @param {flatbuffers.Offset} pose2DOffset
 * @param {flatbuffers.Offset} pose3DOffset
 * @param {flatbuffers.Offset} object2DOffset
 * @param {flatbuffers.Offset} object3DOffset
 * @param {flatbuffers.Offset} object2DListOffset
 * @param {flatbuffers.Offset} object3DListOffset
 * @param {flatbuffers.Offset} image2DOffset
 * @param {flatbuffers.Offset} image2DListOffset
 * @param {flatbuffers.Offset} sessionOffset
 * @param {flatbuffers.Offset} interactionOffset
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.DataStructure.createDataStructure = function(builder, bool, boolListOffset, stringOffset, stringListOffset, byte, int32, int32ListOffset, float, floatListOffset, double, doubleListOffset, vector2Offset, vector3Offset, vector4Offset, quaternionOffset, matrix3x2Offset, matrix4x4Offset, colorOffset, touchEventOffset, keyEventOffset, mouseEventOffset, myoEventOffset, pose2DOffset, pose3DOffset, object2DOffset, object3DOffset, object2DListOffset, object3DListOffset, image2DOffset, image2DListOffset, sessionOffset, interactionOffset) {
  ubii.dataStructures.DataStructure.startDataStructure(builder);
  ubii.dataStructures.DataStructure.addBool(builder, bool);
  ubii.dataStructures.DataStructure.addBoolList(builder, boolListOffset);
  ubii.dataStructures.DataStructure.addString(builder, stringOffset);
  ubii.dataStructures.DataStructure.addStringList(builder, stringListOffset);
  ubii.dataStructures.DataStructure.addByte(builder, byte);
  ubii.dataStructures.DataStructure.addInt32(builder, int32);
  ubii.dataStructures.DataStructure.addInt32List(builder, int32ListOffset);
  ubii.dataStructures.DataStructure.addFloat(builder, float);
  ubii.dataStructures.DataStructure.addFloatList(builder, floatListOffset);
  ubii.dataStructures.DataStructure.addDouble(builder, double);
  ubii.dataStructures.DataStructure.addDoubleList(builder, doubleListOffset);
  ubii.dataStructures.DataStructure.addVector2(builder, vector2Offset);
  ubii.dataStructures.DataStructure.addVector3(builder, vector3Offset);
  ubii.dataStructures.DataStructure.addVector4(builder, vector4Offset);
  ubii.dataStructures.DataStructure.addQuaternion(builder, quaternionOffset);
  ubii.dataStructures.DataStructure.addMatrix3x2(builder, matrix3x2Offset);
  ubii.dataStructures.DataStructure.addMatrix4x4(builder, matrix4x4Offset);
  ubii.dataStructures.DataStructure.addColor(builder, colorOffset);
  ubii.dataStructures.DataStructure.addTouchEvent(builder, touchEventOffset);
  ubii.dataStructures.DataStructure.addKeyEvent(builder, keyEventOffset);
  ubii.dataStructures.DataStructure.addMouseEvent(builder, mouseEventOffset);
  ubii.dataStructures.DataStructure.addMyoEvent(builder, myoEventOffset);
  ubii.dataStructures.DataStructure.addPose2D(builder, pose2DOffset);
  ubii.dataStructures.DataStructure.addPose3D(builder, pose3DOffset);
  ubii.dataStructures.DataStructure.addObject2D(builder, object2DOffset);
  ubii.dataStructures.DataStructure.addObject3D(builder, object3DOffset);
  ubii.dataStructures.DataStructure.addObject2DList(builder, object2DListOffset);
  ubii.dataStructures.DataStructure.addObject3DList(builder, object3DListOffset);
  ubii.dataStructures.DataStructure.addImage2D(builder, image2DOffset);
  ubii.dataStructures.DataStructure.addImage2DList(builder, image2DListOffset);
  ubii.dataStructures.DataStructure.addSession(builder, sessionOffset);
  ubii.dataStructures.DataStructure.addInteraction(builder, interactionOffset);
  return ubii.dataStructures.DataStructure.endDataStructure(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;
