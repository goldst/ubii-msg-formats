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
 * @const
 * @namespace
 */
ubii.sessions = ubii.sessions || {};

/**
 * @constructor
 */
ubii.sessions.IOMapping = function() {
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
 * @returns {ubii.sessions.IOMapping}
 */
ubii.sessions.IOMapping.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.sessions.IOMapping=} obj
 * @returns {ubii.sessions.IOMapping}
 */
ubii.sessions.IOMapping.getRootAsIOMapping = function(bb, obj) {
  return (obj || new ubii.sessions.IOMapping).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.sessions.IOMapping=} obj
 * @returns {ubii.sessions.IOMapping}
 */
ubii.sessions.IOMapping.getSizePrefixedRootAsIOMapping = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.sessions.IOMapping).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.sessions.IOMapping.prototype.interactionId = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {number} index
 * @param {ubii.sessions.InteractionInputMapping=} obj
 * @returns {ubii.sessions.InteractionInputMapping}
 */
ubii.sessions.IOMapping.prototype.inputMappings = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? (obj || new ubii.sessions.InteractionInputMapping).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
ubii.sessions.IOMapping.prototype.inputMappingsLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {number} index
 * @param {ubii.sessions.InteractionOutputMapping=} obj
 * @returns {ubii.sessions.InteractionOutputMapping}
 */
ubii.sessions.IOMapping.prototype.outputMappings = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? (obj || new ubii.sessions.InteractionOutputMapping).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
ubii.sessions.IOMapping.prototype.outputMappingsLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.sessions.IOMapping.startIOMapping = function(builder) {
  builder.startObject(3);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} interactionIdOffset
 */
ubii.sessions.IOMapping.addInteractionId = function(builder, interactionIdOffset) {
  builder.addFieldOffset(0, interactionIdOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} inputMappingsOffset
 */
ubii.sessions.IOMapping.addInputMappings = function(builder, inputMappingsOffset) {
  builder.addFieldOffset(1, inputMappingsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.sessions.IOMapping.createInputMappingsVector = function(builder, data) {
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
ubii.sessions.IOMapping.startInputMappingsVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} outputMappingsOffset
 */
ubii.sessions.IOMapping.addOutputMappings = function(builder, outputMappingsOffset) {
  builder.addFieldOffset(2, outputMappingsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.sessions.IOMapping.createOutputMappingsVector = function(builder, data) {
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
ubii.sessions.IOMapping.startOutputMappingsVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.sessions.IOMapping.endIOMapping = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.sessions.IOMapping.finishIOMappingBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.sessions.IOMapping.finishSizePrefixedIOMappingBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} interactionIdOffset
 * @param {flatbuffers.Offset} inputMappingsOffset
 * @param {flatbuffers.Offset} outputMappingsOffset
 * @returns {flatbuffers.Offset}
 */
ubii.sessions.IOMapping.createIOMapping = function(builder, interactionIdOffset, inputMappingsOffset, outputMappingsOffset) {
  ubii.sessions.IOMapping.startIOMapping(builder);
  ubii.sessions.IOMapping.addInteractionId(builder, interactionIdOffset);
  ubii.sessions.IOMapping.addInputMappings(builder, inputMappingsOffset);
  ubii.sessions.IOMapping.addOutputMappings(builder, outputMappingsOffset);
  return ubii.sessions.IOMapping.endIOMapping(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;
