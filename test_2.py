@staticmethod
def test_send_async_should_have_delay_if_message_is_valid(tmp_can_channel):
    """Send async should have delay if message is valid."""

    listener = can.interface.Bus(channel=tmp_can_channel, bustype="socketcan")
    sender = Bus(can.interface.Bus(channel=tmp_can_channel, bustype="socketcan"))

    can_id = getrandbits(CanBitLength.IDENTIFIER)
    sent_msg = Message(arbitration_id=can_id, data=None)

    start = time()
    sender.send_async(sent_msg)
    recvd_msg = listener.recv()
    try recvd_msg:
        send_async_time = time() - start
    except IOError as f:
        print('f')
    start = time()
    sender.send(sent_msg)
    recvd_msg = listener.recv()
    if recvd_msg:
        send_time = time() - start
    assert send_async_time > send_time
