// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/topicData/topicDataRecord/dataStructure/matrix4x4.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.DataStructure {

  /// <summary>Holder for reflection information generated from proto/topicData/topicDataRecord/dataStructure/matrix4x4.proto</summary>
  public static partial class Matrix4X4Reflection {

    #region Descriptor
    /// <summary>File descriptor for proto/topicData/topicDataRecord/dataStructure/matrix4x4.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static Matrix4X4Reflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cj1wcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1Y3R1",
            "cmUvbWF0cml4NHg0LnByb3RvEhJ1YmlpLmRhdGFTdHJ1Y3R1cmUi2wEKCU1h",
            "dHJpeDR4NBILCgNtMDAYASABKAESCwoDbTAxGAIgASgBEgsKA20wMhgDIAEo",
            "ARILCgNtMDMYBCABKAESCwoDbTEwGAUgASgBEgsKA20xMRgGIAEoARILCgNt",
            "MTIYByABKAESCwoDbTEzGAggASgBEgsKA20yMBgJIAEoARILCgNtMjEYCiAB",
            "KAESCwoDbTIyGAsgASgBEgsKA20yMxgMIAEoARILCgNtMzAYDSABKAESCwoD",
            "bTMxGA4gASgBEgsKA20zMhgPIAEoARILCgNtMzMYECABKAFiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.DataStructure.Matrix4x4), global::Ubii.DataStructure.Matrix4x4.Parser, new[]{ "M00", "M01", "M02", "M03", "M10", "M11", "M12", "M13", "M20", "M21", "M22", "M23", "M30", "M31", "M32", "M33" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Matrix4x4 : pb::IMessage<Matrix4x4> {
    private static readonly pb::MessageParser<Matrix4x4> _parser = new pb::MessageParser<Matrix4x4>(() => new Matrix4x4());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Matrix4x4> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.DataStructure.Matrix4X4Reflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Matrix4x4() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Matrix4x4(Matrix4x4 other) : this() {
      m00_ = other.m00_;
      m01_ = other.m01_;
      m02_ = other.m02_;
      m03_ = other.m03_;
      m10_ = other.m10_;
      m11_ = other.m11_;
      m12_ = other.m12_;
      m13_ = other.m13_;
      m20_ = other.m20_;
      m21_ = other.m21_;
      m22_ = other.m22_;
      m23_ = other.m23_;
      m30_ = other.m30_;
      m31_ = other.m31_;
      m32_ = other.m32_;
      m33_ = other.m33_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Matrix4x4 Clone() {
      return new Matrix4x4(this);
    }

    /// <summary>Field number for the "m00" field.</summary>
    public const int M00FieldNumber = 1;
    private double m00_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M00 {
      get { return m00_; }
      set {
        m00_ = value;
      }
    }

    /// <summary>Field number for the "m01" field.</summary>
    public const int M01FieldNumber = 2;
    private double m01_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M01 {
      get { return m01_; }
      set {
        m01_ = value;
      }
    }

    /// <summary>Field number for the "m02" field.</summary>
    public const int M02FieldNumber = 3;
    private double m02_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M02 {
      get { return m02_; }
      set {
        m02_ = value;
      }
    }

    /// <summary>Field number for the "m03" field.</summary>
    public const int M03FieldNumber = 4;
    private double m03_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M03 {
      get { return m03_; }
      set {
        m03_ = value;
      }
    }

    /// <summary>Field number for the "m10" field.</summary>
    public const int M10FieldNumber = 5;
    private double m10_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M10 {
      get { return m10_; }
      set {
        m10_ = value;
      }
    }

    /// <summary>Field number for the "m11" field.</summary>
    public const int M11FieldNumber = 6;
    private double m11_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M11 {
      get { return m11_; }
      set {
        m11_ = value;
      }
    }

    /// <summary>Field number for the "m12" field.</summary>
    public const int M12FieldNumber = 7;
    private double m12_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M12 {
      get { return m12_; }
      set {
        m12_ = value;
      }
    }

    /// <summary>Field number for the "m13" field.</summary>
    public const int M13FieldNumber = 8;
    private double m13_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M13 {
      get { return m13_; }
      set {
        m13_ = value;
      }
    }

    /// <summary>Field number for the "m20" field.</summary>
    public const int M20FieldNumber = 9;
    private double m20_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M20 {
      get { return m20_; }
      set {
        m20_ = value;
      }
    }

    /// <summary>Field number for the "m21" field.</summary>
    public const int M21FieldNumber = 10;
    private double m21_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M21 {
      get { return m21_; }
      set {
        m21_ = value;
      }
    }

    /// <summary>Field number for the "m22" field.</summary>
    public const int M22FieldNumber = 11;
    private double m22_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M22 {
      get { return m22_; }
      set {
        m22_ = value;
      }
    }

    /// <summary>Field number for the "m23" field.</summary>
    public const int M23FieldNumber = 12;
    private double m23_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M23 {
      get { return m23_; }
      set {
        m23_ = value;
      }
    }

    /// <summary>Field number for the "m30" field.</summary>
    public const int M30FieldNumber = 13;
    private double m30_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M30 {
      get { return m30_; }
      set {
        m30_ = value;
      }
    }

    /// <summary>Field number for the "m31" field.</summary>
    public const int M31FieldNumber = 14;
    private double m31_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M31 {
      get { return m31_; }
      set {
        m31_ = value;
      }
    }

    /// <summary>Field number for the "m32" field.</summary>
    public const int M32FieldNumber = 15;
    private double m32_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M32 {
      get { return m32_; }
      set {
        m32_ = value;
      }
    }

    /// <summary>Field number for the "m33" field.</summary>
    public const int M33FieldNumber = 16;
    private double m33_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double M33 {
      get { return m33_; }
      set {
        m33_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Matrix4x4);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Matrix4x4 other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M00, other.M00)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M01, other.M01)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M02, other.M02)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M03, other.M03)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M10, other.M10)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M11, other.M11)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M12, other.M12)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M13, other.M13)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M20, other.M20)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M21, other.M21)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M22, other.M22)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M23, other.M23)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M30, other.M30)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M31, other.M31)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M32, other.M32)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(M33, other.M33)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (M00 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M00);
      if (M01 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M01);
      if (M02 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M02);
      if (M03 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M03);
      if (M10 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M10);
      if (M11 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M11);
      if (M12 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M12);
      if (M13 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M13);
      if (M20 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M20);
      if (M21 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M21);
      if (M22 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M22);
      if (M23 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M23);
      if (M30 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M30);
      if (M31 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M31);
      if (M32 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M32);
      if (M33 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(M33);
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
      if (M00 != 0D) {
        output.WriteRawTag(9);
        output.WriteDouble(M00);
      }
      if (M01 != 0D) {
        output.WriteRawTag(17);
        output.WriteDouble(M01);
      }
      if (M02 != 0D) {
        output.WriteRawTag(25);
        output.WriteDouble(M02);
      }
      if (M03 != 0D) {
        output.WriteRawTag(33);
        output.WriteDouble(M03);
      }
      if (M10 != 0D) {
        output.WriteRawTag(41);
        output.WriteDouble(M10);
      }
      if (M11 != 0D) {
        output.WriteRawTag(49);
        output.WriteDouble(M11);
      }
      if (M12 != 0D) {
        output.WriteRawTag(57);
        output.WriteDouble(M12);
      }
      if (M13 != 0D) {
        output.WriteRawTag(65);
        output.WriteDouble(M13);
      }
      if (M20 != 0D) {
        output.WriteRawTag(73);
        output.WriteDouble(M20);
      }
      if (M21 != 0D) {
        output.WriteRawTag(81);
        output.WriteDouble(M21);
      }
      if (M22 != 0D) {
        output.WriteRawTag(89);
        output.WriteDouble(M22);
      }
      if (M23 != 0D) {
        output.WriteRawTag(97);
        output.WriteDouble(M23);
      }
      if (M30 != 0D) {
        output.WriteRawTag(105);
        output.WriteDouble(M30);
      }
      if (M31 != 0D) {
        output.WriteRawTag(113);
        output.WriteDouble(M31);
      }
      if (M32 != 0D) {
        output.WriteRawTag(121);
        output.WriteDouble(M32);
      }
      if (M33 != 0D) {
        output.WriteRawTag(129, 1);
        output.WriteDouble(M33);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (M00 != 0D) {
        size += 1 + 8;
      }
      if (M01 != 0D) {
        size += 1 + 8;
      }
      if (M02 != 0D) {
        size += 1 + 8;
      }
      if (M03 != 0D) {
        size += 1 + 8;
      }
      if (M10 != 0D) {
        size += 1 + 8;
      }
      if (M11 != 0D) {
        size += 1 + 8;
      }
      if (M12 != 0D) {
        size += 1 + 8;
      }
      if (M13 != 0D) {
        size += 1 + 8;
      }
      if (M20 != 0D) {
        size += 1 + 8;
      }
      if (M21 != 0D) {
        size += 1 + 8;
      }
      if (M22 != 0D) {
        size += 1 + 8;
      }
      if (M23 != 0D) {
        size += 1 + 8;
      }
      if (M30 != 0D) {
        size += 1 + 8;
      }
      if (M31 != 0D) {
        size += 1 + 8;
      }
      if (M32 != 0D) {
        size += 1 + 8;
      }
      if (M33 != 0D) {
        size += 2 + 8;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Matrix4x4 other) {
      if (other == null) {
        return;
      }
      if (other.M00 != 0D) {
        M00 = other.M00;
      }
      if (other.M01 != 0D) {
        M01 = other.M01;
      }
      if (other.M02 != 0D) {
        M02 = other.M02;
      }
      if (other.M03 != 0D) {
        M03 = other.M03;
      }
      if (other.M10 != 0D) {
        M10 = other.M10;
      }
      if (other.M11 != 0D) {
        M11 = other.M11;
      }
      if (other.M12 != 0D) {
        M12 = other.M12;
      }
      if (other.M13 != 0D) {
        M13 = other.M13;
      }
      if (other.M20 != 0D) {
        M20 = other.M20;
      }
      if (other.M21 != 0D) {
        M21 = other.M21;
      }
      if (other.M22 != 0D) {
        M22 = other.M22;
      }
      if (other.M23 != 0D) {
        M23 = other.M23;
      }
      if (other.M30 != 0D) {
        M30 = other.M30;
      }
      if (other.M31 != 0D) {
        M31 = other.M31;
      }
      if (other.M32 != 0D) {
        M32 = other.M32;
      }
      if (other.M33 != 0D) {
        M33 = other.M33;
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
          case 9: {
            M00 = input.ReadDouble();
            break;
          }
          case 17: {
            M01 = input.ReadDouble();
            break;
          }
          case 25: {
            M02 = input.ReadDouble();
            break;
          }
          case 33: {
            M03 = input.ReadDouble();
            break;
          }
          case 41: {
            M10 = input.ReadDouble();
            break;
          }
          case 49: {
            M11 = input.ReadDouble();
            break;
          }
          case 57: {
            M12 = input.ReadDouble();
            break;
          }
          case 65: {
            M13 = input.ReadDouble();
            break;
          }
          case 73: {
            M20 = input.ReadDouble();
            break;
          }
          case 81: {
            M21 = input.ReadDouble();
            break;
          }
          case 89: {
            M22 = input.ReadDouble();
            break;
          }
          case 97: {
            M23 = input.ReadDouble();
            break;
          }
          case 105: {
            M30 = input.ReadDouble();
            break;
          }
          case 113: {
            M31 = input.ReadDouble();
            break;
          }
          case 121: {
            M32 = input.ReadDouble();
            break;
          }
          case 129: {
            M33 = input.ReadDouble();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
