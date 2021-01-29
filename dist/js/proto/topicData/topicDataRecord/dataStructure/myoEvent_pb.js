// source: proto/topicData/topicDataRecord/dataStructure/myoEvent.proto
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

var proto_topicData_topicDataRecord_dataStructure_vector8_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/vector8_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_dataStructure_vector8_pb);
var proto_topicData_topicDataRecord_dataStructure_vector3_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/vector3_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_dataStructure_vector3_pb);
var proto_topicData_topicDataRecord_dataStructure_quaternion_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/quaternion_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_dataStructure_quaternion_pb);
var proto_topicData_topicDataRecord_dataStructure_handGestureType_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/handGestureType_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_dataStructure_handGestureType_pb);
goog.exportSymbol('proto.ubii.dataStructure.MyoEvent', null, global);
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
proto.ubii.dataStructure.MyoEvent = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ubii.dataStructure.MyoEvent, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.dataStructure.MyoEvent.displayName = 'proto.ubii.dataStructure.MyoEvent';
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
proto.ubii.dataStructure.MyoEvent.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.dataStructure.MyoEvent.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.dataStructure.MyoEvent} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.MyoEvent.toObject = function(includeInstance, msg) {
  var f, obj = {
    emg: (f = msg.getEmg()) && proto_topicData_topicDataRecord_dataStructure_vector8_pb.Vector8.toObject(includeInstance, f),
    orientation: (f = msg.getOrientation()) && proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.toObject(includeInstance, f),
    gyroscope: (f = msg.getGyroscope()) && proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.toObject(includeInstance, f),
    accelerometer: (f = msg.getAccelerometer()) && proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.toObject(includeInstance, f),
    gesture: jspb.Message.getFieldWithDefault(msg, 5, 0)
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
 * @return {!proto.ubii.dataStructure.MyoEvent}
 */
proto.ubii.dataStructure.MyoEvent.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.dataStructure.MyoEvent;
  return proto.ubii.dataStructure.MyoEvent.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.dataStructure.MyoEvent} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.dataStructure.MyoEvent}
 */
proto.ubii.dataStructure.MyoEvent.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector8_pb.Vector8;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector8_pb.Vector8.deserializeBinaryFromReader);
      msg.setEmg(value);
      break;
    case 2:
      var value = new proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.deserializeBinaryFromReader);
      msg.setOrientation(value);
      break;
    case 3:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.deserializeBinaryFromReader);
      msg.setGyroscope(value);
      break;
    case 4:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.deserializeBinaryFromReader);
      msg.setAccelerometer(value);
      break;
    case 5:
      var value = /** @type {!proto.ubii.dataStructure.HandGestureType} */ (reader.readEnum());
      msg.setGesture(value);
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
proto.ubii.dataStructure.MyoEvent.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.dataStructure.MyoEvent.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.dataStructure.MyoEvent} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.MyoEvent.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getEmg();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector8_pb.Vector8.serializeBinaryToWriter
    );
  }
  f = message.getOrientation();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.serializeBinaryToWriter
    );
  }
  f = message.getGyroscope();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.serializeBinaryToWriter
    );
  }
  f = message.getAccelerometer();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.serializeBinaryToWriter
    );
  }
  f = message.getGesture();
  if (f !== 0.0) {
    writer.writeEnum(
      5,
      f
    );
  }
};


/**
 * optional Vector8 emg = 1;
 * @return {?proto.ubii.dataStructure.Vector8}
 */
proto.ubii.dataStructure.MyoEvent.prototype.getEmg = function() {
  return /** @type{?proto.ubii.dataStructure.Vector8} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector8_pb.Vector8, 1));
};


/**
 * @param {?proto.ubii.dataStructure.Vector8|undefined} value
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
*/
proto.ubii.dataStructure.MyoEvent.prototype.setEmg = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
 */
proto.ubii.dataStructure.MyoEvent.prototype.clearEmg = function() {
  return this.setEmg(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.ubii.dataStructure.MyoEvent.prototype.hasEmg = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Quaternion orientation = 2;
 * @return {?proto.ubii.dataStructure.Quaternion}
 */
proto.ubii.dataStructure.MyoEvent.prototype.getOrientation = function() {
  return /** @type{?proto.ubii.dataStructure.Quaternion} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion, 2));
};


/**
 * @param {?proto.ubii.dataStructure.Quaternion|undefined} value
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
*/
proto.ubii.dataStructure.MyoEvent.prototype.setOrientation = function(value) {
  return jspb.Message.setWrapperField(this, 2, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
 */
proto.ubii.dataStructure.MyoEvent.prototype.clearOrientation = function() {
  return this.setOrientation(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.ubii.dataStructure.MyoEvent.prototype.hasOrientation = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional Vector3 gyroscope = 3;
 * @return {?proto.ubii.dataStructure.Vector3}
 */
proto.ubii.dataStructure.MyoEvent.prototype.getGyroscope = function() {
  return /** @type{?proto.ubii.dataStructure.Vector3} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3, 3));
};


/**
 * @param {?proto.ubii.dataStructure.Vector3|undefined} value
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
*/
proto.ubii.dataStructure.MyoEvent.prototype.setGyroscope = function(value) {
  return jspb.Message.setWrapperField(this, 3, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
 */
proto.ubii.dataStructure.MyoEvent.prototype.clearGyroscope = function() {
  return this.setGyroscope(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.ubii.dataStructure.MyoEvent.prototype.hasGyroscope = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional Vector3 accelerometer = 4;
 * @return {?proto.ubii.dataStructure.Vector3}
 */
proto.ubii.dataStructure.MyoEvent.prototype.getAccelerometer = function() {
  return /** @type{?proto.ubii.dataStructure.Vector3} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3, 4));
};


/**
 * @param {?proto.ubii.dataStructure.Vector3|undefined} value
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
*/
proto.ubii.dataStructure.MyoEvent.prototype.setAccelerometer = function(value) {
  return jspb.Message.setWrapperField(this, 4, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
 */
proto.ubii.dataStructure.MyoEvent.prototype.clearAccelerometer = function() {
  return this.setAccelerometer(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.ubii.dataStructure.MyoEvent.prototype.hasAccelerometer = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional HandGestureType gesture = 5;
 * @return {!proto.ubii.dataStructure.HandGestureType}
 */
proto.ubii.dataStructure.MyoEvent.prototype.getGesture = function() {
  return /** @type {!proto.ubii.dataStructure.HandGestureType} */ (jspb.Message.getFieldWithDefault(this, 5, 0));
};


/**
 * @param {!proto.ubii.dataStructure.HandGestureType} value
 * @return {!proto.ubii.dataStructure.MyoEvent} returns this
 */
proto.ubii.dataStructure.MyoEvent.prototype.setGesture = function(value) {
  return jspb.Message.setProto3EnumField(this, 5, value);
};


goog.object.extend(exports, proto.ubii.dataStructure);
