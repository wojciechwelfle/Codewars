"""
Description:
    In this kata, your job is to create a class Dictionary which you can add words to and their entries. Example:

    >>> d = Dictionary()

    >>> d.newentry('Apple', 'A fruit that grows on trees')

    >>> print(d.look('Apple'))
    A fruit that grows on trees

    >>> print(d.look('Banana'))
    Can't find entry for Banana
    Good luck and happy coding!
"""


class Dictionary:
    def __init__(self):
        self.dict = {}

    def newentry(self, word, definition):
        self.dict[word] = definition

    def look(self, key):
        return self.dict.get(key) if self.dict.get(key) is not None else f"Can't find entry for {key}"


# sample test
d = Dictionary()
d.newentry("Apple", "A fruit")
print(d.look("Apple"))
