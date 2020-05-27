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
ubii.devices = ubii.devices || {};

/**
 * @enum {number}
 */
ubii.devices.IOType = {
  INPUT: 0,
  OUTPUT: 1
};

/**
 * @enum {string}
 */
ubii.devices.IOTypeName = {
  '0': 'INPUT',
  '1': 'OUTPUT'
};

/**
 * @constructor
 */
ubii.devices.Component = function() {
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
 * @returns {ubii.devices.Component}
 */
ubii.devices.Component.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.devices.Component=} obj
 * @returns {ubii.devices.Component}
 */
ubii.devices.Component.getRootAsComponent = function(bb, obj) {
  return (obj || new ubii.devices.Component).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.devices.Component=} obj
 * @returns {ubii.devices.Component}
 */
ubii.devices.Component.getSizePrefixedRootAsComponent = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.devices.Component).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Component.prototype.id = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Component.prototype.name = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {number} index
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array}
 */
ubii.devices.Component.prototype.tags = function(index, optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__string(this.bb.__vector(this.bb_pos + offset) + index * 4, optionalEncoding) : null;
};

/**
 * @returns {number}
 */
ubii.devices.Component.prototype.tagsLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Component.prototype.description = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Component.prototype.deviceId = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 12);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Component.prototype.topic = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 14);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Component.prototype.messageFormat = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @returns {ubii.devices.IOType}
 */
ubii.devices.Component.prototype.ioType = function() {
  var offset = this.bb.__offset(this.bb_pos, 18);
  return offset ? /** @type {ubii.devices.IOType} */ (this.bb.readInt8(this.bb_pos + offset)) : ubii.devices.IOType.INPUT;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.devices.Component.startComponent = function(builder) {
  builder.startObject(8);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 */
ubii.devices.Component.addId = function(builder, idOffset) {
  builder.addFieldOffset(0, idOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} nameOffset
 */
ubii.devices.Component.addName = function(builder, nameOffset) {
  builder.addFieldOffset(1, nameOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} tagsOffset
 */
ubii.devices.Component.addTags = function(builder, tagsOffset) {
  builder.addFieldOffset(2, tagsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Component.createTagsVector = function(builder, data) {
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
ubii.devices.Component.startTagsVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} descriptionOffset
 */
ubii.devices.Component.addDescription = function(builder, descriptionOffset) {
  builder.addFieldOffset(3, descriptionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} deviceIdOffset
 */
ubii.devices.Component.addDeviceId = function(builder, deviceIdOffset) {
  builder.addFieldOffset(4, deviceIdOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} topicOffset
 */
ubii.devices.Component.addTopic = function(builder, topicOffset) {
  builder.addFieldOffset(5, topicOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} messageFormatOffset
 */
ubii.devices.Component.addMessageFormat = function(builder, messageFormatOffset) {
  builder.addFieldOffset(6, messageFormatOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {ubii.devices.IOType} ioType
 */
ubii.devices.Component.addIoType = function(builder, ioType) {
  builder.addFieldInt8(7, ioType, ubii.devices.IOType.INPUT);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Component.endComponent = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.devices.Component.finishComponentBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.devices.Component.finishSizePrefixedComponentBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 * @param {flatbuffers.Offset} nameOffset
 * @param {flatbuffers.Offset} tagsOffset
 * @param {flatbuffers.Offset} descriptionOffset
 * @param {flatbuffers.Offset} deviceIdOffset
 * @param {flatbuffers.Offset} topicOffset
 * @param {flatbuffers.Offset} messageFormatOffset
 * @param {ubii.devices.IOType} ioType
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Component.createComponent = function(builder, idOffset, nameOffset, tagsOffset, descriptionOffset, deviceIdOffset, topicOffset, messageFormatOffset, ioType) {
  ubii.devices.Component.startComponent(builder);
  ubii.devices.Component.addId(builder, idOffset);
  ubii.devices.Component.addName(builder, nameOffset);
  ubii.devices.Component.addTags(builder, tagsOffset);
  ubii.devices.Component.addDescription(builder, descriptionOffset);
  ubii.devices.Component.addDeviceId(builder, deviceIdOffset);
  ubii.devices.Component.addTopic(builder, topicOffset);
  ubii.devices.Component.addMessageFormat(builder, messageFormatOffset);
  ubii.devices.Component.addIoType(builder, ioType);
  return ubii.devices.Component.endComponent(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;