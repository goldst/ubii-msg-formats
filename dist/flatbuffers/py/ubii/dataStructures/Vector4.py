# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Vector4(object):
    __slots__ = ['_tab']

    # Vector4
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Vector4
    def X(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # Vector4
    def Y(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # Vector4
    def Z(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(8))
    # Vector4
    def W(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(12))

def CreateVector4(builder, x, y, z, w):
    builder.Prep(4, 16)
    builder.PrependFloat32(w)
    builder.PrependFloat32(z)
    builder.PrependFloat32(y)
    builder.PrependFloat32(x)
    return builder.Offset()


class Vector4T(object):

    # Vector4T
    def __init__(self):
        self.x = 0.0  # type: float
        self.y = 0.0  # type: float
        self.z = 0.0  # type: float
        self.w = 0.0  # type: float

    @classmethod
    def InitFromBuf(cls, buf, pos):
        vector4 = Vector4()
        vector4.Init(buf, pos)
        return cls.InitFromObj(vector4)

    @classmethod
    def InitFromObj(cls, vector4):
        x = Vector4T()
        x._UnPack(vector4)
        return x

    # Vector4T
    def _UnPack(self, vector4):
        if vector4 is None:
            return
        self.x = vector4.X()
        self.y = vector4.Y()
        self.z = vector4.Z()
        self.w = vector4.W()

    # Vector4T
    def Pack(self, builder):
        return CreateVector4(builder, self.x, self.y, self.z, self.w)