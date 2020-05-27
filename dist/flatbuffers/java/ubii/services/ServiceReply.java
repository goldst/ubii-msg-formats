// automatically generated by the FlatBuffers compiler, do not modify

package ubii.services;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class ServiceReply extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static ServiceReply getRootAsServiceReply(ByteBuffer _bb) { return getRootAsServiceReply(_bb, new ServiceReply()); }
  public static ServiceReply getRootAsServiceReply(ByteBuffer _bb, ServiceReply obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public ServiceReply __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public ubii.services.ServiceData reply() { return reply(new ubii.services.ServiceData()); }
  public ubii.services.ServiceData reply(ubii.services.ServiceData obj) { int o = __offset(4); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }

  public static int createServiceReply(FlatBufferBuilder builder,
      int replyOffset) {
    builder.startTable(1);
    ServiceReply.addReply(builder, replyOffset);
    return ServiceReply.endServiceReply(builder);
  }

  public static void startServiceReply(FlatBufferBuilder builder) { builder.startTable(1); }
  public static void addReply(FlatBufferBuilder builder, int replyOffset) { builder.addOffset(0, replyOffset, 0); }
  public static int endServiceReply(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishServiceReplyBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedServiceReplyBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public ServiceReply get(int j) { return get(new ServiceReply(), j); }
    public ServiceReply get(ServiceReply obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}
