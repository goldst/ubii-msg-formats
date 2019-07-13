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

var proto_topicData_topicDataRecord_dataStructure_vector3_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/vector3_pb.js');
var proto_topicData_topicDataRecord_dataStructure_quaternion_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/quaternion_pb.js');
goog.exportSymbol('proto.ubii.dataStructure.Pose', null, global);

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
proto.ubii.dataStructure.Pose = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ubii.dataStructure.Pose, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.dataStructure.Pose.displayName = 'proto.ubii.dataStructure.Pose';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.dataStructure.Pose.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.dataStructure.Pose.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.dataStructure.Pose} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.Pose.toObject = function(includeInstance, msg) {
  var f, obj = {
    vector3: (f = msg.getVector3()) && proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.toObject(includeInstance, f),
    quaternion: (f = msg.getQuaternion()) && proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.toObject(includeInstance, f)
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
 * @return {!proto.ubii.dataStructure.Pose}
 */
proto.ubii.dataStructure.Pose.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.dataStructure.Pose;
  return proto.ubii.dataStructure.Pose.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.dataStructure.Pose} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.dataStructure.Pose}
 */
proto.ubii.dataStructure.Pose.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.deserializeBinaryFromReader);
      msg.setVector3(value);
      break;
    case 2:
      var value = new proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.deserializeBinaryFromReader);
      msg.setQuaternion(value);
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
proto.ubii.dataStructure.Pose.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.dataStructure.Pose.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.dataStructure.Pose} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.Pose.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getVector3();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.serializeBinaryToWriter
    );
  }
  f = message.getQuaternion();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.serializeBinaryToWriter
    );
  }
};


/**
 * optional Vector3 vector3 = 1;
 * @return {?proto.ubii.dataStructure.Vector3}
 */
proto.ubii.dataStructure.Pose.prototype.getVector3 = function() {
  return /** @type{?proto.ubii.dataStructure.Vector3} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3, 1));
};


/** @param {?proto.ubii.dataStructure.Vector3|undefined} value */
proto.ubii.dataStructure.Pose.prototype.setVector3 = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


proto.ubii.dataStructure.Pose.prototype.clearVector3 = function() {
  this.setVector3(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.dataStructure.Pose.prototype.hasVector3 = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Quaternion quaternion = 2;
 * @return {?proto.ubii.dataStructure.Quaternion}
 */
proto.ubii.dataStructure.Pose.prototype.getQuaternion = function() {
  return /** @type{?proto.ubii.dataStructure.Quaternion} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion, 2));
};


/** @param {?proto.ubii.dataStructure.Quaternion|undefined} value */
proto.ubii.dataStructure.Pose.prototype.setQuaternion = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


proto.ubii.dataStructure.Pose.prototype.clearQuaternion = function() {
  this.setQuaternion(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.dataStructure.Pose.prototype.hasQuaternion = function() {
  return jspb.Message.getField(this, 2) != null;
};


goog.object.extend(exports, proto.ubii.dataStructure);
