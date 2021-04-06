import pytest

from sqlite3 import connect
'''本文档用以学习pytest'''

@pytest.mark.finished'''用pytest -m file 来标记后续需要运行的方法'''
def test_passing():
    assert (1, 2, 3) == (1, 2, 3)

@pytest.mark.unfinished
def test_raises():
    assert (1, 2, 4) == (1, 3, 5)


@pytest.mark.parametrize('passwd',
                      ['123456',
                       'abcdefdfs',
                       'as52345fasdf4'])
def test_passwd_length(passwd):
    assert len(passwd) >= 8