// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/topicData/topicData.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.TopicData {

  /// <summary>Holder for reflection information generated from proto/topicData/topicData.proto</summary>
  public static partial class TopicDataReflection {

    #region Descriptor
    /// <summary>File descriptor for proto/topicData/topicData.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static TopicDataReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ch9wcm90by90b3BpY0RhdGEvdG9waWNEYXRhLnByb3RvEg51YmlpLnRvcGlj",
            "RGF0YRo1cHJvdG8vdG9waWNEYXRhL3RvcGljRGF0YVJlY29yZC90b3BpY0Rh",
            "dGFSZWNvcmQucHJvdG8aGXByb3RvL2dlbmVyYWwvZXJyb3IucHJvdG8imAEK",
            "CVRvcGljRGF0YRIZChFkZXZpY2VfaWRlbnRpZmllchgBIAEoCRI8ChF0b3Bp",
            "Y19kYXRhX3JlY29yZBgCIAEoCzIfLnViaWkudG9waWNEYXRhLlRvcGljRGF0",
            "YVJlY29yZEgAEioKBWVycm9yGAMgASgLMhkudWJpaS5zZXJ2aWNlLnJlcGx5",
            "LkVycm9ySABCBgoEdHlwZWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Ubii.TopicData.TopicDataRecordReflection.Descriptor, global::Ubii.Service.Reply.ErrorReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.TopicData.TopicData), global::Ubii.TopicData.TopicData.Parser, new[]{ "DeviceIdentifier", "TopicDataRecord", "Error" }, new[]{ "Type" }, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class TopicData : pb::IMessage<TopicData> {
    private static readonly pb::MessageParser<TopicData> _parser = new pb::MessageParser<TopicData>(() => new TopicData());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<TopicData> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.TopicData.TopicDataReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TopicData() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TopicData(TopicData other) : this() {
      deviceIdentifier_ = other.deviceIdentifier_;
      switch (other.TypeCase) {
        case TypeOneofCase.TopicDataRecord:
          TopicDataRecord = other.TopicDataRecord.Clone();
          break;
        case TypeOneofCase.Error:
          Error = other.Error.Clone();
          break;
      }

      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TopicData Clone() {
      return new TopicData(this);
    }

    /// <summary>Field number for the "device_identifier" field.</summary>
    public const int DeviceIdentifierFieldNumber = 1;
    private string deviceIdentifier_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string DeviceIdentifier {
      get { return deviceIdentifier_; }
      set {
        deviceIdentifier_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "topic_data_record" field.</summary>
    public const int TopicDataRecordFieldNumber = 2;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.TopicData.TopicDataRecord TopicDataRecord {
      get { return typeCase_ == TypeOneofCase.TopicDataRecord ? (global::Ubii.TopicData.TopicDataRecord) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.TopicDataRecord;
      }
    }

    /// <summary>Field number for the "error" field.</summary>
    public const int ErrorFieldNumber = 3;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.Service.Reply.Error Error {
      get { return typeCase_ == TypeOneofCase.Error ? (global::Ubii.Service.Reply.Error) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Error;
      }
    }

    private object type_;
    /// <summary>Enum of possible cases for the "type" oneof.</summary>
    public enum TypeOneofCase {
      None = 0,
      TopicDataRecord = 2,
      Error = 3,
    }
    private TypeOneofCase typeCase_ = TypeOneofCase.None;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TypeOneofCase TypeCase {
      get { return typeCase_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearType() {
      typeCase_ = TypeOneofCase.None;
      type_ = null;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as TopicData);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(TopicData other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (DeviceIdentifier != other.DeviceIdentifier) return false;
      if (!object.Equals(TopicDataRecord, other.TopicDataRecord)) return false;
      if (!object.Equals(Error, other.Error)) return false;
      if (TypeCase != other.TypeCase) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (DeviceIdentifier.Length != 0) hash ^= DeviceIdentifier.GetHashCode();
      if (typeCase_ == TypeOneofCase.TopicDataRecord) hash ^= TopicDataRecord.GetHashCode();
      if (typeCase_ == TypeOneofCase.Error) hash ^= Error.GetHashCode();
      hash ^= (int) typeCase_;
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (DeviceIdentifier.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(DeviceIdentifier);
      }
      if (typeCase_ == TypeOneofCase.TopicDataRecord) {
        output.WriteRawTag(18);
        output.WriteMessage(TopicDataRecord);
      }
      if (typeCase_ == TypeOneofCase.Error) {
        output.WriteRawTag(26);
        output.WriteMessage(Error);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (DeviceIdentifier.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(DeviceIdentifier);
      }
      if (typeCase_ == TypeOneofCase.TopicDataRecord) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(TopicDataRecord);
      }
      if (typeCase_ == TypeOneofCase.Error) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Error);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(TopicData other) {
      if (other == null) {
        return;
      }
      if (other.DeviceIdentifier.Length != 0) {
        DeviceIdentifier = other.DeviceIdentifier;
      }
      switch (other.TypeCase) {
        case TypeOneofCase.TopicDataRecord:
          if (TopicDataRecord == null) {
            TopicDataRecord = new global::Ubii.TopicData.TopicDataRecord();
          }
          TopicDataRecord.MergeFrom(other.TopicDataRecord);
          break;
        case TypeOneofCase.Error:
          if (Error == null) {
            Error = new global::Ubii.Service.Reply.Error();
          }
          Error.MergeFrom(other.Error);
          break;
      }

      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            DeviceIdentifier = input.ReadString();
            break;
          }
          case 18: {
            global::Ubii.TopicData.TopicDataRecord subBuilder = new global::Ubii.TopicData.TopicDataRecord();
            if (typeCase_ == TypeOneofCase.TopicDataRecord) {
              subBuilder.MergeFrom(TopicDataRecord);
            }
            input.ReadMessage(subBuilder);
            TopicDataRecord = subBuilder;
            break;
          }
          case 26: {
            global::Ubii.Service.Reply.Error subBuilder = new global::Ubii.Service.Reply.Error();
            if (typeCase_ == TypeOneofCase.Error) {
              subBuilder.MergeFrom(Error);
            }
            input.ReadMessage(subBuilder);
            Error = subBuilder;
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code