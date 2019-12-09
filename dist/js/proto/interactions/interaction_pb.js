// source: proto/interactions/interaction.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var proto_interactions_ioFormat_pb = require('../../proto/interactions/ioFormat_pb.js');
goog.object.extend(proto, proto_interactions_ioFormat_pb);
goog.exportSymbol('proto.ubii.interactions.Interaction', null, global);
goog.exportSymbol('proto.ubii.interactions.InteractionList', null, global);
goog.exportSymbol('proto.ubii.interactions.InteractionStatus', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.ubii.interactions.Interaction = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.interactions.Interaction.repeatedFields_, null);
};
goog.inherits(proto.ubii.interactions.Interaction, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.interactions.Interaction.displayName = 'proto.ubii.interactions.Interaction';
}
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.ubii.interactions.InteractionList = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.interactions.InteractionList.repeatedFields_, null);
};
goog.inherits(proto.ubii.interactions.InteractionList, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.interactions.InteractionList.displayName = 'proto.ubii.interactions.InteractionList';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.interactions.Interaction.repeatedFields_ = [4,5,8,9];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.interactions.Interaction.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.interactions.Interaction.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.interactions.Interaction} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.interactions.Interaction.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, ""),
    name: jspb.Message.getFieldWithDefault(msg, 2, ""),
    processingCallback: jspb.Message.getFieldWithDefault(msg, 3, ""),
    inputFormatsList: jspb.Message.toObjectList(msg.getInputFormatsList(),
    proto_interactions_ioFormat_pb.IOFormat.toObject, includeInstance),
    outputFormatsList: jspb.Message.toObjectList(msg.getOutputFormatsList(),
    proto_interactions_ioFormat_pb.IOFormat.toObject, includeInstance),
    onCreated: jspb.Message.getFieldWithDefault(msg, 6, ""),
    processFrequency: jspb.Message.getFloatingPointFieldWithDefault(msg, 7, 0.0),
    authorsList: (f = jspb.Message.getRepeatedField(msg, 8)) == null ? undefined : f,
    tagsList: (f = jspb.Message.getRepeatedField(msg, 9)) == null ? undefined : f,
    description: jspb.Message.getFieldWithDefault(msg, 10, ""),
    status: jspb.Message.getFieldWithDefault(msg, 11, 0)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.ubii.interactions.Interaction}
 */
proto.ubii.interactions.Interaction.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.interactions.Interaction;
  return proto.ubii.interactions.Interaction.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.interactions.Interaction} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.interactions.Interaction}
 */
proto.ubii.interactions.Interaction.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setId(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setName(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setProcessingCallback(value);
      break;
    case 4:
      var value = new proto_interactions_ioFormat_pb.IOFormat;
      reader.readMessage(value,proto_interactions_ioFormat_pb.IOFormat.deserializeBinaryFromReader);
      msg.addInputFormats(value);
      break;
    case 5:
      var value = new proto_interactions_ioFormat_pb.IOFormat;
      reader.readMessage(value,proto_interactions_ioFormat_pb.IOFormat.deserializeBinaryFromReader);
      msg.addOutputFormats(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setOnCreated(value);
      break;
    case 7:
      var value = /** @type {number} */ (reader.readFloat());
      msg.setProcessFrequency(value);
      break;
    case 8:
      var value = /** @type {string} */ (reader.readString());
      msg.addAuthors(value);
      break;
    case 9:
      var value = /** @type {string} */ (reader.readString());
      msg.addTags(value);
      break;
    case 10:
      var value = /** @type {string} */ (reader.readString());
      msg.setDescription(value);
      break;
    case 11:
      var value = /** @type {!proto.ubii.interactions.InteractionStatus} */ (reader.readEnum());
      msg.setStatus(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.ubii.interactions.Interaction.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.interactions.Interaction.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.interactions.Interaction} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.interactions.Interaction.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getName();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getProcessingCallback();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getInputFormatsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      4,
      f,
      proto_interactions_ioFormat_pb.IOFormat.serializeBinaryToWriter
    );
  }
  f = message.getOutputFormatsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      5,
      f,
      proto_interactions_ioFormat_pb.IOFormat.serializeBinaryToWriter
    );
  }
  f = message.getOnCreated();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
  f = message.getProcessFrequency();
  if (f !== 0.0) {
    writer.writeFloat(
      7,
      f
    );
  }
  f = message.getAuthorsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      8,
      f
    );
  }
  f = message.getTagsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      9,
      f
    );
  }
  f = message.getDescription();
  if (f.length > 0) {
    writer.writeString(
      10,
      f
    );
  }
  f = message.getStatus();
  if (f !== 0.0) {
    writer.writeEnum(
      11,
      f
    );
  }
};


/**
 * optional string id = 1;
 * @return {string}
 */
proto.ubii.interactions.Interaction.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setId = function(value) {
  return jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string name = 2;
 * @return {string}
 */
proto.ubii.interactions.Interaction.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setName = function(value) {
  return jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional string processing_callback = 3;
 * @return {string}
 */
proto.ubii.interactions.Interaction.prototype.getProcessingCallback = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setProcessingCallback = function(value) {
  return jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * repeated IOFormat input_formats = 4;
 * @return {!Array<!proto.ubii.interactions.IOFormat>}
 */
proto.ubii.interactions.Interaction.prototype.getInputFormatsList = function() {
  return /** @type{!Array<!proto.ubii.interactions.IOFormat>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto_interactions_ioFormat_pb.IOFormat, 4));
};


/**
 * @param {!Array<!proto.ubii.interactions.IOFormat>} value
 * @return {!proto.ubii.interactions.Interaction} returns this
*/
proto.ubii.interactions.Interaction.prototype.setInputFormatsList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 4, value);
};


/**
 * @param {!proto.ubii.interactions.IOFormat=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.interactions.IOFormat}
 */
proto.ubii.interactions.Interaction.prototype.addInputFormats = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 4, opt_value, proto.ubii.interactions.IOFormat, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.clearInputFormatsList = function() {
  return this.setInputFormatsList([]);
};


/**
 * repeated IOFormat output_formats = 5;
 * @return {!Array<!proto.ubii.interactions.IOFormat>}
 */
proto.ubii.interactions.Interaction.prototype.getOutputFormatsList = function() {
  return /** @type{!Array<!proto.ubii.interactions.IOFormat>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto_interactions_ioFormat_pb.IOFormat, 5));
};


/**
 * @param {!Array<!proto.ubii.interactions.IOFormat>} value
 * @return {!proto.ubii.interactions.Interaction} returns this
*/
proto.ubii.interactions.Interaction.prototype.setOutputFormatsList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 5, value);
};


/**
 * @param {!proto.ubii.interactions.IOFormat=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.interactions.IOFormat}
 */
proto.ubii.interactions.Interaction.prototype.addOutputFormats = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 5, opt_value, proto.ubii.interactions.IOFormat, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.clearOutputFormatsList = function() {
  return this.setOutputFormatsList([]);
};


/**
 * optional string on_created = 6;
 * @return {string}
 */
proto.ubii.interactions.Interaction.prototype.getOnCreated = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setOnCreated = function(value) {
  return jspb.Message.setProto3StringField(this, 6, value);
};


/**
 * optional float process_frequency = 7;
 * @return {number}
 */
proto.ubii.interactions.Interaction.prototype.getProcessFrequency = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 7, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setProcessFrequency = function(value) {
  return jspb.Message.setProto3FloatField(this, 7, value);
};


/**
 * repeated string authors = 8;
 * @return {!Array<string>}
 */
proto.ubii.interactions.Interaction.prototype.getAuthorsList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 8));
};


/**
 * @param {!Array<string>} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setAuthorsList = function(value) {
  return jspb.Message.setField(this, 8, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.addAuthors = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 8, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.clearAuthorsList = function() {
  return this.setAuthorsList([]);
};


/**
 * repeated string tags = 9;
 * @return {!Array<string>}
 */
proto.ubii.interactions.Interaction.prototype.getTagsList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 9));
};


/**
 * @param {!Array<string>} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setTagsList = function(value) {
  return jspb.Message.setField(this, 9, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.addTags = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 9, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.clearTagsList = function() {
  return this.setTagsList([]);
};


/**
 * optional string description = 10;
 * @return {string}
 */
proto.ubii.interactions.Interaction.prototype.getDescription = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 10, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setDescription = function(value) {
  return jspb.Message.setProto3StringField(this, 10, value);
};


/**
 * optional InteractionStatus status = 11;
 * @return {!proto.ubii.interactions.InteractionStatus}
 */
proto.ubii.interactions.Interaction.prototype.getStatus = function() {
  return /** @type {!proto.ubii.interactions.InteractionStatus} */ (jspb.Message.getFieldWithDefault(this, 11, 0));
};


/**
 * @param {!proto.ubii.interactions.InteractionStatus} value
 * @return {!proto.ubii.interactions.Interaction} returns this
 */
proto.ubii.interactions.Interaction.prototype.setStatus = function(value) {
  return jspb.Message.setProto3EnumField(this, 11, value);
};



/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.interactions.InteractionList.repeatedFields_ = [1];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.interactions.InteractionList.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.interactions.InteractionList.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.interactions.InteractionList} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.interactions.InteractionList.toObject = function(includeInstance, msg) {
  var f, obj = {
    elementsList: jspb.Message.toObjectList(msg.getElementsList(),
    proto.ubii.interactions.Interaction.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.ubii.interactions.InteractionList}
 */
proto.ubii.interactions.InteractionList.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.interactions.InteractionList;
  return proto.ubii.interactions.InteractionList.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.interactions.InteractionList} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.interactions.InteractionList}
 */
proto.ubii.interactions.InteractionList.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.ubii.interactions.Interaction;
      reader.readMessage(value,proto.ubii.interactions.Interaction.deserializeBinaryFromReader);
      msg.addElements(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.ubii.interactions.InteractionList.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.interactions.InteractionList.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.interactions.InteractionList} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.interactions.InteractionList.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getElementsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      proto.ubii.interactions.Interaction.serializeBinaryToWriter
    );
  }
};


/**
 * repeated Interaction elements = 1;
 * @return {!Array<!proto.ubii.interactions.Interaction>}
 */
proto.ubii.interactions.InteractionList.prototype.getElementsList = function() {
  return /** @type{!Array<!proto.ubii.interactions.Interaction>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ubii.interactions.Interaction, 1));
};


/**
 * @param {!Array<!proto.ubii.interactions.Interaction>} value
 * @return {!proto.ubii.interactions.InteractionList} returns this
*/
proto.ubii.interactions.InteractionList.prototype.setElementsList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.ubii.interactions.Interaction=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.interactions.Interaction}
 */
proto.ubii.interactions.InteractionList.prototype.addElements = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.ubii.interactions.Interaction, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.interactions.InteractionList} returns this
 */
proto.ubii.interactions.InteractionList.prototype.clearElementsList = function() {
  return this.setElementsList([]);
};


/**
 * @enum {number}
 */
proto.ubii.interactions.InteractionStatus = {
  CREATED: 0,
  INITIALIZED: 1,
  PROCESSING: 2,
  HALTED: 3
};

goog.object.extend(exports, proto.ubii.interactions);
