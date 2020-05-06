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
ubii.servers = ubii.servers || {};

/**
 * @constructor
 */
ubii.servers.Server = function() {
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
 * @returns {ubii.servers.Server}
 */
ubii.servers.Server.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.servers.Server=} obj
 * @returns {ubii.servers.Server}
 */
ubii.servers.Server.getRootAsServer = function(bb, obj) {
  return (obj || new ubii.servers.Server).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.servers.Server=} obj
 * @returns {ubii.servers.Server}
 */
ubii.servers.Server.getSizePrefixedRootAsServer = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.servers.Server).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.id = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.name = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.ipEthernet = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.ipWlan = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.portServiceZmq = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 12);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.portServiceRest = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 14);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.portTopicDataZmq = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.portTopicDataWs = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 18);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.servers.Server.prototype.constantsJson = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 20);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.servers.Server.startServer = function(builder) {
  builder.startObject(9);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 */
ubii.servers.Server.addId = function(builder, idOffset) {
  builder.addFieldOffset(0, idOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} nameOffset
 */
ubii.servers.Server.addName = function(builder, nameOffset) {
  builder.addFieldOffset(1, nameOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} ipEthernetOffset
 */
ubii.servers.Server.addIpEthernet = function(builder, ipEthernetOffset) {
  builder.addFieldOffset(2, ipEthernetOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} ipWlanOffset
 */
ubii.servers.Server.addIpWlan = function(builder, ipWlanOffset) {
  builder.addFieldOffset(3, ipWlanOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} portServiceZmqOffset
 */
ubii.servers.Server.addPortServiceZmq = function(builder, portServiceZmqOffset) {
  builder.addFieldOffset(4, portServiceZmqOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} portServiceRestOffset
 */
ubii.servers.Server.addPortServiceRest = function(builder, portServiceRestOffset) {
  builder.addFieldOffset(5, portServiceRestOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} portTopicDataZmqOffset
 */
ubii.servers.Server.addPortTopicDataZmq = function(builder, portTopicDataZmqOffset) {
  builder.addFieldOffset(6, portTopicDataZmqOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} portTopicDataWsOffset
 */
ubii.servers.Server.addPortTopicDataWs = function(builder, portTopicDataWsOffset) {
  builder.addFieldOffset(7, portTopicDataWsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} constantsJsonOffset
 */
ubii.servers.Server.addConstantsJson = function(builder, constantsJsonOffset) {
  builder.addFieldOffset(8, constantsJsonOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.servers.Server.endServer = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.servers.Server.finishServerBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.servers.Server.finishSizePrefixedServerBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 * @param {flatbuffers.Offset} nameOffset
 * @param {flatbuffers.Offset} ipEthernetOffset
 * @param {flatbuffers.Offset} ipWlanOffset
 * @param {flatbuffers.Offset} portServiceZmqOffset
 * @param {flatbuffers.Offset} portServiceRestOffset
 * @param {flatbuffers.Offset} portTopicDataZmqOffset
 * @param {flatbuffers.Offset} portTopicDataWsOffset
 * @param {flatbuffers.Offset} constantsJsonOffset
 * @returns {flatbuffers.Offset}
 */
ubii.servers.Server.createServer = function(builder, idOffset, nameOffset, ipEthernetOffset, ipWlanOffset, portServiceZmqOffset, portServiceRestOffset, portTopicDataZmqOffset, portTopicDataWsOffset, constantsJsonOffset) {
  ubii.servers.Server.startServer(builder);
  ubii.servers.Server.addId(builder, idOffset);
  ubii.servers.Server.addName(builder, nameOffset);
  ubii.servers.Server.addIpEthernet(builder, ipEthernetOffset);
  ubii.servers.Server.addIpWlan(builder, ipWlanOffset);
  ubii.servers.Server.addPortServiceZmq(builder, portServiceZmqOffset);
  ubii.servers.Server.addPortServiceRest(builder, portServiceRestOffset);
  ubii.servers.Server.addPortTopicDataZmq(builder, portTopicDataZmqOffset);
  ubii.servers.Server.addPortTopicDataWs(builder, portTopicDataWsOffset);
  ubii.servers.Server.addConstantsJson(builder, constantsJsonOffset);
  return ubii.servers.Server.endServer(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;
