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
ubii.devices.DeviceType = {
  PARTICIPANT: 0,
  WATCHER: 1
};

/**
 * @enum {string}
 */
ubii.devices.DeviceTypeName = {
  '0': 'PARTICIPANT',
  '1': 'WATCHER'
};

/**
 * @constructor
 */
ubii.devices.Device = function() {
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
 * @returns {ubii.devices.Device}
 */
ubii.devices.Device.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.devices.Device=} obj
 * @returns {ubii.devices.Device}
 */
ubii.devices.Device.getRootAsDevice = function(bb, obj) {
  return (obj || new ubii.devices.Device).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.devices.Device=} obj
 * @returns {ubii.devices.Device}
 */
ubii.devices.Device.getSizePrefixedRootAsDevice = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.devices.Device).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Device.prototype.id = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Device.prototype.name = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {number} index
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array}
 */
ubii.devices.Device.prototype.tags = function(index, optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__string(this.bb.__vector(this.bb_pos + offset) + index * 4, optionalEncoding) : null;
};

/**
 * @returns {number}
 */
ubii.devices.Device.prototype.tagsLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Device.prototype.description = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.devices.Device.prototype.clientId = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 12);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @returns {ubii.devices.DeviceType}
 */
ubii.devices.Device.prototype.deviceType = function() {
  var offset = this.bb.__offset(this.bb_pos, 14);
  return offset ? /** @type {ubii.devices.DeviceType} */ (this.bb.readInt8(this.bb_pos + offset)) : ubii.devices.DeviceType.PARTICIPANT;
};

/**
 * @param {number} index
 * @param {ubii.devices.Component=} obj
 * @returns {ubii.devices.Component}
 */
ubii.devices.Device.prototype.components = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? (obj || new ubii.devices.Component).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
ubii.devices.Device.prototype.componentsLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.devices.Device.startDevice = function(builder) {
  builder.startObject(7);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 */
ubii.devices.Device.addId = function(builder, idOffset) {
  builder.addFieldOffset(0, idOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} nameOffset
 */
ubii.devices.Device.addName = function(builder, nameOffset) {
  builder.addFieldOffset(1, nameOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} tagsOffset
 */
ubii.devices.Device.addTags = function(builder, tagsOffset) {
  builder.addFieldOffset(2, tagsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Device.createTagsVector = function(builder, data) {
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
ubii.devices.Device.startTagsVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} descriptionOffset
 */
ubii.devices.Device.addDescription = function(builder, descriptionOffset) {
  builder.addFieldOffset(3, descriptionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} clientIdOffset
 */
ubii.devices.Device.addClientId = function(builder, clientIdOffset) {
  builder.addFieldOffset(4, clientIdOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {ubii.devices.DeviceType} deviceType
 */
ubii.devices.Device.addDeviceType = function(builder, deviceType) {
  builder.addFieldInt8(5, deviceType, ubii.devices.DeviceType.PARTICIPANT);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} componentsOffset
 */
ubii.devices.Device.addComponents = function(builder, componentsOffset) {
  builder.addFieldOffset(6, componentsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Device.createComponentsVector = function(builder, data) {
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
ubii.devices.Device.startComponentsVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Device.endDevice = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.devices.Device.finishDeviceBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.devices.Device.finishSizePrefixedDeviceBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 * @param {flatbuffers.Offset} nameOffset
 * @param {flatbuffers.Offset} tagsOffset
 * @param {flatbuffers.Offset} descriptionOffset
 * @param {flatbuffers.Offset} clientIdOffset
 * @param {ubii.devices.DeviceType} deviceType
 * @param {flatbuffers.Offset} componentsOffset
 * @returns {flatbuffers.Offset}
 */
ubii.devices.Device.createDevice = function(builder, idOffset, nameOffset, tagsOffset, descriptionOffset, clientIdOffset, deviceType, componentsOffset) {
  ubii.devices.Device.startDevice(builder);
  ubii.devices.Device.addId(builder, idOffset);
  ubii.devices.Device.addName(builder, nameOffset);
  ubii.devices.Device.addTags(builder, tagsOffset);
  ubii.devices.Device.addDescription(builder, descriptionOffset);
  ubii.devices.Device.addClientId(builder, clientIdOffset);
  ubii.devices.Device.addDeviceType(builder, deviceType);
  ubii.devices.Device.addComponents(builder, componentsOffset);
  return ubii.devices.Device.endDevice(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;
