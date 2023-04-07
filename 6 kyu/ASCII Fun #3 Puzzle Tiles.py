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
