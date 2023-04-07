"""
    Description:
    Because my other two parts of the serie were pretty well received I decided to do another part.

    Puzzle Tiles
    You will get two Integer n(width) and m (height) and your task is to draw following pattern. Each line is seperated with '\n'.

    Both integers are equal or greater than 1. No need to check for invalid parameters.
    There are no whitespaces at the end of each line.
    For example, for width = 4 and height = 3, you should draw the following pattern:

       _( )__ _( )__ _( )__ _( )__
     _|     _|     _|     _|     _|
    (_   _ (_   _ (_   _ (_   _ (_
     |__( )_|__( )_|__( )_|__( )_|
     |_     |_     |_     |_     |_
      _) _   _) _   _) _   _) _   _)
     |__( )_|__( )_|__( )_|__( )_|
     _|     _|     _|     _|     _|
    (_   _ (_   _ (_   _ (_   _ (_
     |__( )_|__( )_|__( )_|__( )_|

    For more informations take a look in the test cases!
"""


def puzzle_tiles(width, height):
    puzzle = '  '
    for _ in range(width):
        puzzle += " _( )__"
    puzzle += '\n'
    for i in range(height):
        if i % 2 == 0:
            puzzle += ' _|'
            for _ in range(width):
                puzzle += "     _|"
            puzzle += '\n(_'
            for _ in range(width):
                puzzle += "   _ (_"
        else:
            puzzle += ' |_'
            for _ in range(width):
                puzzle += "     |_"
            puzzle += '\n  _)'
            for _ in range(width):
                puzzle += " _   _)"
        puzzle += '\n |'
        for _ in range(width):
            puzzle += "__( )_|"
        if i is not height - 1:
            puzzle += '\n'
    return puzzle


print(puzzle_tiles(3, 4))
