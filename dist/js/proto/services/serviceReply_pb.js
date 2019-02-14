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

var proto_general_success_pb = require('../../proto/general/success_pb.js');
var proto_general_error_pb = require('../../proto/general/error_pb.js');
var proto_clients_client_pb = require('../../proto/clients/client_pb.js');
var proto_devices_device_pb = require('../../proto/devices/device_pb.js');
var proto_servers_server_pb = require('../../proto/servers/server_pb.js');
goog.exportSymbol('proto.ubii.services.ServiceReply', null, global);

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
proto.ubii.services.ServiceReply = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.ubii.services.ServiceReply.oneofGroups_);
};
goog.inherits(proto.ubii.services.ServiceReply, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.services.ServiceReply.displayName = 'proto.ubii.services.ServiceReply';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.ubii.services.ServiceReply.oneofGroups_ = [[1,2,3,4,5]];

/**
 * @enum {number}
 */
proto.ubii.services.ServiceReply.TypeCase = {
  TYPE_NOT_SET: 0,
  SUCCESS: 1,
  ERROR: 2,
  CLIENT_SPECIFICATION: 3,
  DEVICE_SPECIFICATION: 4,
  SERVER_SPECIFICATION: 5
};

/**
 * @return {proto.ubii.services.ServiceReply.TypeCase}
 */
proto.ubii.services.ServiceReply.prototype.getTypeCase = function() {
  return /** @type {proto.ubii.services.ServiceReply.TypeCase} */(jspb.Message.computeOneofCase(this, proto.ubii.services.ServiceReply.oneofGroups_[0]));
};



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
proto.ubii.services.ServiceReply.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.services.ServiceReply.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.services.ServiceReply} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.services.ServiceReply.toObject = function(includeInstance, msg) {
  var f, obj = {
    success: (f = msg.getSuccess()) && proto_general_success_pb.Success.toObject(includeInstance, f),
    error: (f = msg.getError()) && proto_general_error_pb.Error.toObject(includeInstance, f),
    clientSpecification: (f = msg.getClientSpecification()) && proto_clients_client_pb.Client.toObject(includeInstance, f),
    deviceSpecification: (f = msg.getDeviceSpecification()) && proto_devices_device_pb.Device.toObject(includeInstance, f),
    serverSpecification: (f = msg.getServerSpecification()) && proto_servers_server_pb.Server.toObject(includeInstance, f)
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
 * @return {!proto.ubii.services.ServiceReply}
 */
proto.ubii.services.ServiceReply.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.services.ServiceReply;
  return proto.ubii.services.ServiceReply.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.services.ServiceReply} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.services.ServiceReply}
 */
proto.ubii.services.ServiceReply.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto_general_success_pb.Success;
      reader.readMessage(value,proto_general_success_pb.Success.deserializeBinaryFromReader);
      msg.setSuccess(value);
      break;
    case 2:
      var value = new proto_general_error_pb.Error;
      reader.readMessage(value,proto_general_error_pb.Error.deserializeBinaryFromReader);
      msg.setError(value);
      break;
    case 3:
      var value = new proto_clients_client_pb.Client;
      reader.readMessage(value,proto_clients_client_pb.Client.deserializeBinaryFromReader);
      msg.setClientSpecification(value);
      break;
    case 4:
      var value = new proto_devices_device_pb.Device;
      reader.readMessage(value,proto_devices_device_pb.Device.deserializeBinaryFromReader);
      msg.setDeviceSpecification(value);
      break;
    case 5:
      var value = new proto_servers_server_pb.Server;
      reader.readMessage(value,proto_servers_server_pb.Server.deserializeBinaryFromReader);
      msg.setServerSpecification(value);
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
proto.ubii.services.ServiceReply.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.services.ServiceReply.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.services.ServiceReply} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.services.ServiceReply.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getSuccess();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto_general_success_pb.Success.serializeBinaryToWriter
    );
  }
  f = message.getError();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto_general_error_pb.Error.serializeBinaryToWriter
    );
  }
  f = message.getClientSpecification();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto_clients_client_pb.Client.serializeBinaryToWriter
    );
  }
  f = message.getDeviceSpecification();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto_devices_device_pb.Device.serializeBinaryToWriter
    );
  }
  f = message.getServerSpecification();
  if (f != null) {
    writer.writeMessage(
      5,
      f,
      proto_servers_server_pb.Server.serializeBinaryToWriter
    );
  }
};


/**
 * optional ubii.general.Success success = 1;
 * @return {?proto.ubii.general.Success}
 */
proto.ubii.services.ServiceReply.prototype.getSuccess = function() {
  return /** @type{?proto.ubii.general.Success} */ (
    jspb.Message.getWrapperField(this, proto_general_success_pb.Success, 1));
};


/** @param {?proto.ubii.general.Success|undefined} value */
proto.ubii.services.ServiceReply.prototype.setSuccess = function(value) {
  jspb.Message.setOneofWrapperField(this, 1, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearSuccess = function() {
  this.setSuccess(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasSuccess = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional ubii.general.Error error = 2;
 * @return {?proto.ubii.general.Error}
 */
proto.ubii.services.ServiceReply.prototype.getError = function() {
  return /** @type{?proto.ubii.general.Error} */ (
    jspb.Message.getWrapperField(this, proto_general_error_pb.Error, 2));
};


/** @param {?proto.ubii.general.Error|undefined} value */
proto.ubii.services.ServiceReply.prototype.setError = function(value) {
  jspb.Message.setOneofWrapperField(this, 2, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearError = function() {
  this.setError(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasError = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional ubii.clients.Client client_specification = 3;
 * @return {?proto.ubii.clients.Client}
 */
proto.ubii.services.ServiceReply.prototype.getClientSpecification = function() {
  return /** @type{?proto.ubii.clients.Client} */ (
    jspb.Message.getWrapperField(this, proto_clients_client_pb.Client, 3));
};


/** @param {?proto.ubii.clients.Client|undefined} value */
proto.ubii.services.ServiceReply.prototype.setClientSpecification = function(value) {
  jspb.Message.setOneofWrapperField(this, 3, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearClientSpecification = function() {
  this.setClientSpecification(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasClientSpecification = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional ubii.devices.Device device_specification = 4;
 * @return {?proto.ubii.devices.Device}
 */
proto.ubii.services.ServiceReply.prototype.getDeviceSpecification = function() {
  return /** @type{?proto.ubii.devices.Device} */ (
    jspb.Message.getWrapperField(this, proto_devices_device_pb.Device, 4));
};


/** @param {?proto.ubii.devices.Device|undefined} value */
proto.ubii.services.ServiceReply.prototype.setDeviceSpecification = function(value) {
  jspb.Message.setOneofWrapperField(this, 4, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearDeviceSpecification = function() {
  this.setDeviceSpecification(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasDeviceSpecification = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional ubii.servers.Server server_specification = 5;
 * @return {?proto.ubii.servers.Server}
 */
proto.ubii.services.ServiceReply.prototype.getServerSpecification = function() {
  return /** @type{?proto.ubii.servers.Server} */ (
    jspb.Message.getWrapperField(this, proto_servers_server_pb.Server, 5));
};


/** @param {?proto.ubii.servers.Server|undefined} value */
proto.ubii.services.ServiceReply.prototype.setServerSpecification = function(value) {
  jspb.Message.setOneofWrapperField(this, 5, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearServerSpecification = function() {
  this.setServerSpecification(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasServerSpecification = function() {
  return jspb.Message.getField(this, 5) != null;
};


goog.object.extend(exports, proto.ubii.services);
