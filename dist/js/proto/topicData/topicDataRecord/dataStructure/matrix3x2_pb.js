// source: proto/topicData/topicDataRecord/dataStructure/matrix3x2.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!
/* eslint-disable */
// @ts-nocheck

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

goog.exportSymbol('proto.ubii.dataStructure.Matrix3x2', null, global);
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
proto.ubii.dataStructure.Matrix3x2 = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ubii.dataStructure.Matrix3x2, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.dataStructure.Matrix3x2.displayName = 'proto.ubii.dataStructure.Matrix3x2';
}



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
proto.ubii.dataStructure.Matrix3x2.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.dataStructure.Matrix3x2.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.dataStructure.Matrix3x2} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.Matrix3x2.toObject = function(includeInstance, msg) {
  var f, obj = {
    m00: jspb.Message.getFloatingPointFieldWithDefault(msg, 1, 0.0),
    m01: jspb.Message.getFloatingPointFieldWithDefault(msg, 2, 0.0),
    m10: jspb.Message.getFloatingPointFieldWithDefault(msg, 3, 0.0),
    m11: jspb.Message.getFloatingPointFieldWithDefault(msg, 4, 0.0),
    m20: jspb.Message.getFloatingPointFieldWithDefault(msg, 5, 0.0),
    m21: jspb.Message.getFloatingPointFieldWithDefault(msg, 6, 0.0)
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
 * @return {!proto.ubii.dataStructure.Matrix3x2}
 */
proto.ubii.dataStructure.Matrix3x2.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.dataStructure.Matrix3x2;
  return proto.ubii.dataStructure.Matrix3x2.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.dataStructure.Matrix3x2} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.dataStructure.Matrix3x2}
 */
proto.ubii.dataStructure.Matrix3x2.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setM00(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setM01(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setM10(value);
      break;
    case 4:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setM11(value);
      break;
    case 5:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setM20(value);
      break;
    case 6:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setM21(value);
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
proto.ubii.dataStructure.Matrix3x2.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.dataStructure.Matrix3x2.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.dataStructure.Matrix3x2} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.Matrix3x2.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getM00();
  if (f !== 0.0) {
    writer.writeDouble(
      1,
      f
    );
  }
  f = message.getM01();
  if (f !== 0.0) {
    writer.writeDouble(
      2,
      f
    );
  }
  f = message.getM10();
  if (f !== 0.0) {
    writer.writeDouble(
      3,
      f
    );
  }
  f = message.getM11();
  if (f !== 0.0) {
    writer.writeDouble(
      4,
      f
    );
  }
  f = message.getM20();
  if (f !== 0.0) {
    writer.writeDouble(
      5,
      f
    );
  }
  f = message.getM21();
  if (f !== 0.0) {
    writer.writeDouble(
      6,
      f
    );
  }
};


/**
 * optional double m00 = 1;
 * @return {number}
 */
proto.ubii.dataStructure.Matrix3x2.prototype.getM00 = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 1, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.dataStructure.Matrix3x2} returns this
 */
proto.ubii.dataStructure.Matrix3x2.prototype.setM00 = function(value) {
  return jspb.Message.setProto3FloatField(this, 1, value);
};


/**
 * optional double m01 = 2;
 * @return {number}
 */
proto.ubii.dataStructure.Matrix3x2.prototype.getM01 = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 2, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.dataStructure.Matrix3x2} returns this
 */
proto.ubii.dataStructure.Matrix3x2.prototype.setM01 = function(value) {
  return jspb.Message.setProto3FloatField(this, 2, value);
};


/**
 * optional double m10 = 3;
 * @return {number}
 */
proto.ubii.dataStructure.Matrix3x2.prototype.getM10 = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 3, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.dataStructure.Matrix3x2} returns this
 */
proto.ubii.dataStructure.Matrix3x2.prototype.setM10 = function(value) {
  return jspb.Message.setProto3FloatField(this, 3, value);
};


/**
 * optional double m11 = 4;
 * @return {number}
 */
proto.ubii.dataStructure.Matrix3x2.prototype.getM11 = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 4, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.dataStructure.Matrix3x2} returns this
 */
proto.ubii.dataStructure.Matrix3x2.prototype.setM11 = function(value) {
  return jspb.Message.setProto3FloatField(this, 4, value);
};


/**
 * optional double m20 = 5;
 * @return {number}
 */
proto.ubii.dataStructure.Matrix3x2.prototype.getM20 = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 5, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.dataStructure.Matrix3x2} returns this
 */
proto.ubii.dataStructure.Matrix3x2.prototype.setM20 = function(value) {
  return jspb.Message.setProto3FloatField(this, 5, value);
};


/**
 * optional double m21 = 6;
 * @return {number}
 */
proto.ubii.dataStructure.Matrix3x2.prototype.getM21 = function() {
  return /** @type {number} */ (jspb.Message.getFloatingPointFieldWithDefault(this, 6, 0.0));
};


/**
 * @param {number} value
 * @return {!proto.ubii.dataStructure.Matrix3x2} returns this
 */
proto.ubii.dataStructure.Matrix3x2.prototype.setM21 = function(value) {
  return jspb.Message.setProto3FloatField(this, 6, value);
};


goog.object.extend(exports, proto.ubii.dataStructure);
