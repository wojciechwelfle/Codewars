"""
Description:

Write a function that takes in a binary string and returns the equivalent decoded text (the text is ASCII encoded).

Each 8 bits on the binary string represent 1 character on the ASCII table.

The input string will always be a valid binary string.

Characters can be in the range from "00000000" to "11111111" (inclusive)

Note: In the case of an empty binary string your function should return an empty string.

"""


def binary_to_string(binary):
    res = ""
    for i in range(len(binary) // 8):
        sum = 0
        for j in range(8):
            sum += pow(2, 7 - j) * (ord(binary[i * 8 + j]) - ord('0'))
        res += chr(sum)
    return res
