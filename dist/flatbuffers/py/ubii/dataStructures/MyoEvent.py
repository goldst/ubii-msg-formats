# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class MyoEvent(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsMyoEvent(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = MyoEvent()
        x.Init(buf, n + offset)
        return x

    # MyoEvent
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # MyoEvent
    def Emg(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Vector8 import Vector8
            obj = Vector8()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # MyoEvent
    def Orientation(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Quaternion import Quaternion
            obj = Quaternion()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # MyoEvent
    def Gyroscope(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Vector3 import Vector3
            obj = Vector3()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # MyoEvent
    def Accelerometer(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            x = o + self._tab.Pos
            from ubii.dataStructures.Vector3 import Vector3
            obj = Vector3()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # MyoEvent
    def Gesture(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

def MyoEventStart(builder): builder.StartObject(5)
def MyoEventAddEmg(builder, emg): builder.PrependStructSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(emg), 0)
def MyoEventAddOrientation(builder, orientation): builder.PrependStructSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(orientation), 0)
def MyoEventAddGyroscope(builder, gyroscope): builder.PrependStructSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(gyroscope), 0)
def MyoEventAddAccelerometer(builder, accelerometer): builder.PrependStructSlot(3, flatbuffers.number_types.UOffsetTFlags.py_type(accelerometer), 0)
def MyoEventAddGesture(builder, gesture): builder.PrependInt8Slot(4, gesture, 0)
def MyoEventEnd(builder): return builder.EndObject()

import ubii.dataStructures.Quaternion
import ubii.dataStructures.Vector3
import ubii.dataStructures.Vector8
try:
    from typing import Optional
except:
    pass

class MyoEventT(object):

    # MyoEventT
    def __init__(self):
        self.emg = None  # type: Optional[ubii.dataStructures.Vector8.Vector8T]
        self.orientation = None  # type: Optional[ubii.dataStructures.Quaternion.QuaternionT]
        self.gyroscope = None  # type: Optional[ubii.dataStructures.Vector3.Vector3T]
        self.accelerometer = None  # type: Optional[ubii.dataStructures.Vector3.Vector3T]
        self.gesture = 0  # type: int

    @classmethod
    def InitFromBuf(cls, buf, pos):
        myoEvent = MyoEvent()
        myoEvent.Init(buf, pos)
        return cls.InitFromObj(myoEvent)

    @classmethod
    def InitFromObj(cls, myoEvent):
        x = MyoEventT()
        x._UnPack(myoEvent)
        return x

    # MyoEventT
    def _UnPack(self, myoEvent):
        if myoEvent is None:
            return
        if myoEvent.Emg() is not None:
            self.emg = ubii.dataStructures.Vector8.Vector8T.InitFromObj(myoEvent.Emg())
        if myoEvent.Orientation() is not None:
            self.orientation = ubii.dataStructures.Quaternion.QuaternionT.InitFromObj(myoEvent.Orientation())
        if myoEvent.Gyroscope() is not None:
            self.gyroscope = ubii.dataStructures.Vector3.Vector3T.InitFromObj(myoEvent.Gyroscope())
        if myoEvent.Accelerometer() is not None:
            self.accelerometer = ubii.dataStructures.Vector3.Vector3T.InitFromObj(myoEvent.Accelerometer())
        self.gesture = myoEvent.Gesture()

    # MyoEventT
    def Pack(self, builder):
        MyoEventStart(builder)
        if self.emg is not None:
            emg = self.emg.Pack(builder)
            MyoEventAddEmg(builder, emg)
        if self.orientation is not None:
            orientation = self.orientation.Pack(builder)
            MyoEventAddOrientation(builder, orientation)
        if self.gyroscope is not None:
            gyroscope = self.gyroscope.Pack(builder)
            MyoEventAddGyroscope(builder, gyroscope)
        if self.accelerometer is not None:
            accelerometer = self.accelerometer.Pack(builder)
            MyoEventAddAccelerometer(builder, accelerometer)
        MyoEventAddGesture(builder, self.gesture)
        myoEvent = MyoEventEnd(builder)
        return myoEvent