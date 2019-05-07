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

var proto_devices_component_pb = require('../../proto/devices/component_pb.js');
goog.exportSymbol('proto.ubii.devices.Device', null, global);
goog.exportSymbol('proto.ubii.devices.Device.DeviceType', null, global);
goog.exportSymbol('proto.ubii.devices.DeviceList', null, global);

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
proto.ubii.devices.Device = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.devices.Device.repeatedFields_, null);
};
goog.inherits(proto.ubii.devices.Device, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.devices.Device.displayName = 'proto.ubii.devices.Device';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.devices.Device.repeatedFields_ = [4];



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
proto.ubii.devices.Device.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.devices.Device.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.devices.Device} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.Device.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, ""),
    name: jspb.Message.getFieldWithDefault(msg, 2, ""),
    deviceType: jspb.Message.getFieldWithDefault(msg, 3, 0),
    componentsList: jspb.Message.toObjectList(msg.getComponentsList(),
    proto_devices_component_pb.Component.toObject, includeInstance),
    clientId: jspb.Message.getFieldWithDefault(msg, 5, "")
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
 * @return {!proto.ubii.devices.Device}
 */
proto.ubii.devices.Device.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.devices.Device;
  return proto.ubii.devices.Device.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.devices.Device} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.devices.Device}
 */
proto.ubii.devices.Device.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = /** @type {!proto.ubii.devices.Device.DeviceType} */ (reader.readEnum());
      msg.setDeviceType(value);
      break;
    case 4:
      var value = new proto_devices_component_pb.Component;
      reader.readMessage(value,proto_devices_component_pb.Component.deserializeBinaryFromReader);
      msg.addComponents(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.setClientId(value);
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
proto.ubii.devices.Device.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.devices.Device.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.devices.Device} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.Device.serializeBinaryToWriter = function(message, writer) {
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
  f = message.getDeviceType();
  if (f !== 0.0) {
    writer.writeEnum(
      3,
      f
    );
  }
  f = message.getComponentsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      4,
      f,
      proto_devices_component_pb.Component.serializeBinaryToWriter
    );
  }
  f = message.getClientId();
  if (f.length > 0) {
    writer.writeString(
      5,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.ubii.devices.Device.DeviceType = {
  PARTICIPANT: 0,
  WATCHER: 1
};

/**
 * optional string id = 1;
 * @return {string}
 */
proto.ubii.devices.Device.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.ubii.devices.Device.prototype.setId = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string name = 2;
 * @return {string}
 */
proto.ubii.devices.Device.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.ubii.devices.Device.prototype.setName = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional DeviceType device_type = 3;
 * @return {!proto.ubii.devices.Device.DeviceType}
 */
proto.ubii.devices.Device.prototype.getDeviceType = function() {
  return /** @type {!proto.ubii.devices.Device.DeviceType} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {!proto.ubii.devices.Device.DeviceType} value */
proto.ubii.devices.Device.prototype.setDeviceType = function(value) {
  jspb.Message.setProto3EnumField(this, 3, value);
};


/**
 * repeated Component components = 4;
 * @return {!Array<!proto.ubii.devices.Component>}
 */
proto.ubii.devices.Device.prototype.getComponentsList = function() {
  return /** @type{!Array<!proto.ubii.devices.Component>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto_devices_component_pb.Component, 4));
};


/** @param {!Array<!proto.ubii.devices.Component>} value */
proto.ubii.devices.Device.prototype.setComponentsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 4, value);
};


/**
 * @param {!proto.ubii.devices.Component=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.devices.Component}
 */
proto.ubii.devices.Device.prototype.addComponents = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 4, opt_value, proto.ubii.devices.Component, opt_index);
};


proto.ubii.devices.Device.prototype.clearComponentsList = function() {
  this.setComponentsList([]);
};


/**
 * optional string client_id = 5;
 * @return {string}
 */
proto.ubii.devices.Device.prototype.getClientId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 5, ""));
};


/** @param {string} value */
proto.ubii.devices.Device.prototype.setClientId = function(value) {
  jspb.Message.setProto3StringField(this, 5, value);
};



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
proto.ubii.devices.DeviceList = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.devices.DeviceList.repeatedFields_, null);
};
goog.inherits(proto.ubii.devices.DeviceList, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.devices.DeviceList.displayName = 'proto.ubii.devices.DeviceList';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.devices.DeviceList.repeatedFields_ = [1];



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
proto.ubii.devices.DeviceList.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.devices.DeviceList.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.devices.DeviceList} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.DeviceList.toObject = function(includeInstance, msg) {
  var f, obj = {
    elementsList: jspb.Message.toObjectList(msg.getElementsList(),
    proto.ubii.devices.Device.toObject, includeInstance)
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
 * @return {!proto.ubii.devices.DeviceList}
 */
proto.ubii.devices.DeviceList.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.devices.DeviceList;
  return proto.ubii.devices.DeviceList.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.devices.DeviceList} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.devices.DeviceList}
 */
proto.ubii.devices.DeviceList.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.ubii.devices.Device;
      reader.readMessage(value,proto.ubii.devices.Device.deserializeBinaryFromReader);
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
proto.ubii.devices.DeviceList.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.devices.DeviceList.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.devices.DeviceList} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.DeviceList.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getElementsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      proto.ubii.devices.Device.serializeBinaryToWriter
    );
  }
};


/**
 * repeated Device elements = 1;
 * @return {!Array<!proto.ubii.devices.Device>}
 */
proto.ubii.devices.DeviceList.prototype.getElementsList = function() {
  return /** @type{!Array<!proto.ubii.devices.Device>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ubii.devices.Device, 1));
};


/** @param {!Array<!proto.ubii.devices.Device>} value */
proto.ubii.devices.DeviceList.prototype.setElementsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.ubii.devices.Device=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.devices.Device}
 */
proto.ubii.devices.DeviceList.prototype.addElements = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.ubii.devices.Device, opt_index);
};


proto.ubii.devices.DeviceList.prototype.clearElementsList = function() {
  this.setElementsList([]);
};


goog.object.extend(exports, proto.ubii.devices);
