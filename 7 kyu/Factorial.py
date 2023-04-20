"""
    Description:

    Your task is to write function factorial.

    https://en.wikipedia.org/wiki/Factorial
"""


def factorial(n):
    return 1 if n <= 1 else n * factorial(n - 1)