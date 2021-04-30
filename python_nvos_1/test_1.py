'''
每周一题
    两个二进制字符串（ 字符串非空且只包含数字 1 和 0），返回它们的和（用二进制表示）。
示例 1:
    输入: a = "11", b = "1"
    输出: "100"
示例 2:
    输入: a = "1010", b = "1011"
    输出: "10101"
'''


class Solution(object):

    def add_binary(self, a, b):
        a1 = int(a, 2)
        b1 = int(b, 2)
        c = a1 + b1
        c1 = bin(c)[2:]

        return c1


if __name__ == "__main__":
    a = Solution()
    a.add_binary("1000", "1010")
