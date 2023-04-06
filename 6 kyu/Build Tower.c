/*
    Description:
    Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

    For example, a tower with 3 floors looks like this:

    [
      "  *  ",
      " *** ",
      "*****"
    ]
    And a tower with 6 floors looks like this:

    [
      "     *     ",
      "    ***    ",
      "   *****   ",
      "  *******  ",
      " ********* ",
      "***********"
    ]
*/

void build_tower(unsigned n, char tower[n][2 * n - 1]) {
    for (unsigned i = 0; i < n; i++) {
        unsigned j = 0;
        for (; j < n - i - 1; j++) {
            tower[i][j] = ' ';
            tower[i][2 * n - j - 2] = ' ';
        }
        for (unsigned k = j; k < j + 2 * i + 1; k++) {
            tower[i][k] = '*';
        }
    }
}
