# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers

class KeyEvent(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsKeyEvent(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = KeyEvent()
        x.Init(buf, n + offset)
        return x

    # KeyEvent
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # KeyEvent
    def Type(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # KeyEvent
    def Key(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

def KeyEventStart(builder): builder.StartObject(2)
def KeyEventAddType(builder, type): builder.PrependInt8Slot(0, type, 0)
def KeyEventAddKey(builder, key): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(key), 0)
def KeyEventEnd(builder): return builder.EndObject()
