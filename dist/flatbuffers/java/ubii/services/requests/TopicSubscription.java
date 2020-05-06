// automatically generated by the FlatBuffers compiler, do not modify

package ubii.services.requests;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class TopicSubscription extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static TopicSubscription getRootAsTopicSubscription(ByteBuffer _bb) { return getRootAsTopicSubscription(_bb, new TopicSubscription()); }
  public static TopicSubscription getRootAsTopicSubscription(ByteBuffer _bb, TopicSubscription obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public TopicSubscription __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String clientId() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer clientIdAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public ByteBuffer clientIdInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 4, 1); }
  public String subscribeTopics(int j) { int o = __offset(6); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int subscribeTopicsLength() { int o = __offset(6); return o != 0 ? __vector_len(o) : 0; }
  public StringVector subscribeTopicsVector() { return subscribeTopicsVector(new StringVector()); }
  public StringVector subscribeTopicsVector(StringVector obj) { int o = __offset(6); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public String unsubscribeTopics(int j) { int o = __offset(8); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int unsubscribeTopicsLength() { int o = __offset(8); return o != 0 ? __vector_len(o) : 0; }
  public StringVector unsubscribeTopicsVector() { return unsubscribeTopicsVector(new StringVector()); }
  public StringVector unsubscribeTopicsVector(StringVector obj) { int o = __offset(8); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public String subscribeTopicRegexp() { int o = __offset(10); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer subscribeTopicRegexpAsByteBuffer() { return __vector_as_bytebuffer(10, 1); }
  public ByteBuffer subscribeTopicRegexpInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 10, 1); }
  public String unsubscribeTopicRegexp() { int o = __offset(12); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer unsubscribeTopicRegexpAsByteBuffer() { return __vector_as_bytebuffer(12, 1); }
  public ByteBuffer unsubscribeTopicRegexpInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 12, 1); }

  public static int createTopicSubscription(FlatBufferBuilder builder,
      int client_idOffset,
      int subscribe_topicsOffset,
      int unsubscribe_topicsOffset,
      int subscribe_topic_regexpOffset,
      int unsubscribe_topic_regexpOffset) {
    builder.startTable(5);
    TopicSubscription.addUnsubscribeTopicRegexp(builder, unsubscribe_topic_regexpOffset);
    TopicSubscription.addSubscribeTopicRegexp(builder, subscribe_topic_regexpOffset);
    TopicSubscription.addUnsubscribeTopics(builder, unsubscribe_topicsOffset);
    TopicSubscription.addSubscribeTopics(builder, subscribe_topicsOffset);
    TopicSubscription.addClientId(builder, client_idOffset);
    return TopicSubscription.endTopicSubscription(builder);
  }

  public static void startTopicSubscription(FlatBufferBuilder builder) { builder.startTable(5); }
  public static void addClientId(FlatBufferBuilder builder, int clientIdOffset) { builder.addOffset(0, clientIdOffset, 0); }
  public static void addSubscribeTopics(FlatBufferBuilder builder, int subscribeTopicsOffset) { builder.addOffset(1, subscribeTopicsOffset, 0); }
  public static int createSubscribeTopicsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startSubscribeTopicsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addUnsubscribeTopics(FlatBufferBuilder builder, int unsubscribeTopicsOffset) { builder.addOffset(2, unsubscribeTopicsOffset, 0); }
  public static int createUnsubscribeTopicsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startUnsubscribeTopicsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addSubscribeTopicRegexp(FlatBufferBuilder builder, int subscribeTopicRegexpOffset) { builder.addOffset(3, subscribeTopicRegexpOffset, 0); }
  public static void addUnsubscribeTopicRegexp(FlatBufferBuilder builder, int unsubscribeTopicRegexpOffset) { builder.addOffset(4, unsubscribeTopicRegexpOffset, 0); }
  public static int endTopicSubscription(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishTopicSubscriptionBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedTopicSubscriptionBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public TopicSubscription get(int j) { return get(new TopicSubscription(), j); }
    public TopicSubscription get(TopicSubscription obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

