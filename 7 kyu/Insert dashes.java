/*
    Description:
    Write a function insert_dash(num) / insertDash(num) / InsertDash(int num) that will insert dashes ('-')
    between each two odd digits in num. For example: if num is 454793 the output should be 4547-9-3.
    Don't count zero as an odd digit.

    Note that the number will always be non-negative (>= 0).
*/


class Solution1 {
    public static String insertDash(int num) {
        StringBuilder res = new StringBuilder();
        boolean isLastOdd = false;
        for (char c : String.valueOf(num).toCharArray()) {
            if (isLastOdd && (int) (c - '0') % 2 != 0) res.append("-");
            res.append(c);
            isLastOdd = (c - '0') % 2 != 0;
        }
        return res.toString();
    }
}