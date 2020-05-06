// automatically generated by the FlatBuffers compiler, do not modify

package ubii.servers;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Server extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static Server getRootAsServer(ByteBuffer _bb) { return getRootAsServer(_bb, new Server()); }
  public static Server getRootAsServer(ByteBuffer _bb, Server obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public Server __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String id() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer idAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public ByteBuffer idInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 4, 1); }
  public String name() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer nameAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer nameInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public String ipEthernet() { int o = __offset(8); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer ipEthernetAsByteBuffer() { return __vector_as_bytebuffer(8, 1); }
  public ByteBuffer ipEthernetInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 8, 1); }
  public String ipWlan() { int o = __offset(10); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer ipWlanAsByteBuffer() { return __vector_as_bytebuffer(10, 1); }
  public ByteBuffer ipWlanInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 10, 1); }
  public String portServiceZmq() { int o = __offset(12); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer portServiceZmqAsByteBuffer() { return __vector_as_bytebuffer(12, 1); }
  public ByteBuffer portServiceZmqInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 12, 1); }
  public String portServiceRest() { int o = __offset(14); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer portServiceRestAsByteBuffer() { return __vector_as_bytebuffer(14, 1); }
  public ByteBuffer portServiceRestInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 14, 1); }
  public String portTopicDataZmq() { int o = __offset(16); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer portTopicDataZmqAsByteBuffer() { return __vector_as_bytebuffer(16, 1); }
  public ByteBuffer portTopicDataZmqInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 16, 1); }
  public String portTopicDataWs() { int o = __offset(18); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer portTopicDataWsAsByteBuffer() { return __vector_as_bytebuffer(18, 1); }
  public ByteBuffer portTopicDataWsInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 18, 1); }
  public String constantsJson() { int o = __offset(20); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer constantsJsonAsByteBuffer() { return __vector_as_bytebuffer(20, 1); }
  public ByteBuffer constantsJsonInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 20, 1); }

  public static int createServer(FlatBufferBuilder builder,
      int idOffset,
      int nameOffset,
      int ip_ethernetOffset,
      int ip_wlanOffset,
      int port_service_zmqOffset,
      int port_service_restOffset,
      int port_topic_data_zmqOffset,
      int port_topic_data_wsOffset,
      int constants_jsonOffset) {
    builder.startTable(9);
    Server.addConstantsJson(builder, constants_jsonOffset);
    Server.addPortTopicDataWs(builder, port_topic_data_wsOffset);
    Server.addPortTopicDataZmq(builder, port_topic_data_zmqOffset);
    Server.addPortServiceRest(builder, port_service_restOffset);
    Server.addPortServiceZmq(builder, port_service_zmqOffset);
    Server.addIpWlan(builder, ip_wlanOffset);
    Server.addIpEthernet(builder, ip_ethernetOffset);
    Server.addName(builder, nameOffset);
    Server.addId(builder, idOffset);
    return Server.endServer(builder);
  }

  public static void startServer(FlatBufferBuilder builder) { builder.startTable(9); }
  public static void addId(FlatBufferBuilder builder, int idOffset) { builder.addOffset(0, idOffset, 0); }
  public static void addName(FlatBufferBuilder builder, int nameOffset) { builder.addOffset(1, nameOffset, 0); }
  public static void addIpEthernet(FlatBufferBuilder builder, int ipEthernetOffset) { builder.addOffset(2, ipEthernetOffset, 0); }
  public static void addIpWlan(FlatBufferBuilder builder, int ipWlanOffset) { builder.addOffset(3, ipWlanOffset, 0); }
  public static void addPortServiceZmq(FlatBufferBuilder builder, int portServiceZmqOffset) { builder.addOffset(4, portServiceZmqOffset, 0); }
  public static void addPortServiceRest(FlatBufferBuilder builder, int portServiceRestOffset) { builder.addOffset(5, portServiceRestOffset, 0); }
  public static void addPortTopicDataZmq(FlatBufferBuilder builder, int portTopicDataZmqOffset) { builder.addOffset(6, portTopicDataZmqOffset, 0); }
  public static void addPortTopicDataWs(FlatBufferBuilder builder, int portTopicDataWsOffset) { builder.addOffset(7, portTopicDataWsOffset, 0); }
  public static void addConstantsJson(FlatBufferBuilder builder, int constantsJsonOffset) { builder.addOffset(8, constantsJsonOffset, 0); }
  public static int endServer(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishServerBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedServerBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public Server get(int j) { return get(new Server(), j); }
    public Server get(Server obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

