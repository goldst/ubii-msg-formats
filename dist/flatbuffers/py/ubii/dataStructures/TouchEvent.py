# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class TouchEvent(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsTouchEvent(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = TouchEvent()
        x.Init(buf, n + offset)
        return x

    # TouchEvent
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # TouchEvent
    def Type(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # TouchEvent
    def Position(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Vector2 import Vector2
            obj = Vector2()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

def TouchEventStart(builder): builder.StartObject(2)
def TouchEventAddType(builder, type): builder.PrependInt8Slot(0, type, 0)
def TouchEventAddPosition(builder, position): builder.PrependStructSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(position), 0)
def TouchEventEnd(builder): return builder.EndObject()

import ubii.dataStructures.Vector2
try:
    from typing import Optional
except:
    pass

class TouchEventT(object):

    # TouchEventT
    def __init__(self):
        self.type = 0  # type: int
        self.position = None  # type: Optional[ubii.dataStructures.Vector2.Vector2T]

    @classmethod
    def InitFromBuf(cls, buf, pos):
        touchEvent = TouchEvent()
        touchEvent.Init(buf, pos)
        return cls.InitFromObj(touchEvent)

    @classmethod
    def InitFromObj(cls, touchEvent):
        x = TouchEventT()
        x._UnPack(touchEvent)
        return x

    # TouchEventT
    def _UnPack(self, touchEvent):
        if touchEvent is None:
            return
        self.type = touchEvent.Type()
        if touchEvent.Position() is not None:
            self.position = ubii.dataStructures.Vector2.Vector2T.InitFromObj(touchEvent.Position())

    # TouchEventT
    def Pack(self, builder):
        TouchEventStart(builder)
        TouchEventAddType(builder, self.type)
        if self.position is not None:
            position = self.position.Pack(builder)
            TouchEventAddPosition(builder, position)
        touchEvent = TouchEventEnd(builder)
        return touchEvent
