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
 * @constructor
 */
ubii.dataStructures.Object3D = function() {
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
 * @returns {ubii.dataStructures.Object3D}
 */
ubii.dataStructures.Object3D.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.Object3D=} obj
 * @returns {ubii.dataStructures.Object3D}
 */
ubii.dataStructures.Object3D.getRootAsObject3D = function(bb, obj) {
  return (obj || new ubii.dataStructures.Object3D).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.dataStructures.Object3D.prototype.id = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.dataStructures.Object3D.prototype.name = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {ubii.dataStructures.Pose3D=} obj
 * @returns {ubii.dataStructures.Pose3D|null}
 */
ubii.dataStructures.Object3D.prototype.pose = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? (obj || new ubii.dataStructures.Pose3D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Vector3=} obj
 * @returns {ubii.dataStructures.Vector3|null}
 */
ubii.dataStructures.Object3D.prototype.size = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? (obj || new ubii.dataStructures.Vector3).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.dataStructures.Object3D.prototype.userDataJson = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 12);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.dataStructures.Object3D.startObject3D = function(builder) {
  builder.startObject(5);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 */
ubii.dataStructures.Object3D.addId = function(builder, idOffset) {
  builder.addFieldOffset(0, idOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} nameOffset
 */
ubii.dataStructures.Object3D.addName = function(builder, nameOffset) {
  builder.addFieldOffset(1, nameOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} poseOffset
 */
ubii.dataStructures.Object3D.addPose = function(builder, poseOffset) {
  builder.addFieldOffset(2, poseOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} sizeOffset
 */
ubii.dataStructures.Object3D.addSize = function(builder, sizeOffset) {
  builder.addFieldStruct(3, sizeOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} userDataJsonOffset
 */
ubii.dataStructures.Object3D.addUserDataJson = function(builder, userDataJsonOffset) {
  builder.addFieldOffset(4, userDataJsonOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.Object3D.endObject3D = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.dataStructures.Object3D.finishObject3DBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 * @param {flatbuffers.Offset} nameOffset
 * @param {flatbuffers.Offset} poseOffset
 * @param {flatbuffers.Offset} sizeOffset
 * @param {flatbuffers.Offset} userDataJsonOffset
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.Object3D.createObject3D = function(builder, idOffset, nameOffset, poseOffset, sizeOffset, userDataJsonOffset) {
  ubii.dataStructures.Object3D.startObject3D(builder);
  ubii.dataStructures.Object3D.addId(builder, idOffset);
  ubii.dataStructures.Object3D.addName(builder, nameOffset);
  ubii.dataStructures.Object3D.addPose(builder, poseOffset);
  ubii.dataStructures.Object3D.addSize(builder, sizeOffset);
  ubii.dataStructures.Object3D.addUserDataJson(builder, userDataJsonOffset);
  return ubii.dataStructures.Object3D.endObject3D(builder);
}

// Exports for ECMAScript6 Modules
export {ubii};
