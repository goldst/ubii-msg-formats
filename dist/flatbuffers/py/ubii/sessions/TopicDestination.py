# automatically generated by the FlatBuffers compiler, do not modify

# namespace: sessions


def TopicDestinationCreator(unionType, table):
    from flatbuffers.table import Table
    if not isinstance(table, Table):
        return None
    if unionType == TopicDestination().topic:
        tab = Table(table.Bytes, table.Pos)
        union = tab.String(table.Pos)
        return union
    if unionType == TopicDestination().topic_demux:
        import ubii.devices.TopicDemux
        return ubii.devices.TopicDemux.TopicDemuxT.InitFromBuf(table.Bytes, table.Pos)
    return None