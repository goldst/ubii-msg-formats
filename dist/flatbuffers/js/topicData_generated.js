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
ubii.general = ubii.general || {};

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
 * @const
 * @namespace
 */
ubii.topicData = ubii.topicData || {};

/**
 * @enum {number}
 */
ubii.topicData.TopicDataContent = {
  NONE: 0,
  topic_data_records: 1,
  error: 2
};

/**
 * @enum {string}
 */
ubii.topicData.TopicDataContentName = {
  '0': 'NONE',
  '1': 'topic_data_records',
  '2': 'error'
};

/**
 * @constructor
 */
ubii.topicData.TopicData = function() {
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
 * @returns {ubii.topicData.TopicData}
 */
ubii.topicData.TopicData.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.topicData.TopicData=} obj
 * @returns {ubii.topicData.TopicData}
 */
ubii.topicData.TopicData.getRootAsTopicData = function(bb, obj) {
  return (obj || new ubii.topicData.TopicData).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.topicData.TopicData=} obj
 * @returns {ubii.topicData.TopicData}
 */
ubii.topicData.TopicData.getSizePrefixedRootAsTopicData = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.topicData.TopicData).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @returns {ubii.topicData.TopicDataContent}
 */
ubii.topicData.TopicData.prototype.contentType = function() {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? /** @type {ubii.topicData.TopicDataContent} */ (this.bb.readUint8(this.bb_pos + offset)) : ubii.topicData.TopicDataContent.NONE;
};

/**
 * @param {flatbuffers.Table} obj
 * @returns {?flatbuffers.Table}
 */
ubii.topicData.TopicData.prototype.content = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__union(obj, this.bb_pos + offset) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.topicData.TopicData.startTopicData = function(builder) {
  builder.startObject(2);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {ubii.topicData.TopicDataContent} contentType
 */
ubii.topicData.TopicData.addContentType = function(builder, contentType) {
  builder.addFieldInt8(0, contentType, ubii.topicData.TopicDataContent.NONE);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} contentOffset
 */
ubii.topicData.TopicData.addContent = function(builder, contentOffset) {
  builder.addFieldOffset(1, contentOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.topicData.TopicData.endTopicData = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.topicData.TopicData.finishTopicDataBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.topicData.TopicData.finishSizePrefixedTopicDataBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {ubii.topicData.TopicDataContent} contentType
 * @param {flatbuffers.Offset} contentOffset
 * @returns {flatbuffers.Offset}
 */
ubii.topicData.TopicData.createTopicData = function(builder, contentType, contentOffset) {
  ubii.topicData.TopicData.startTopicData(builder);
  ubii.topicData.TopicData.addContentType(builder, contentType);
  ubii.topicData.TopicData.addContent(builder, contentOffset);
  return ubii.topicData.TopicData.endTopicData(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;
