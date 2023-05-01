/*
    Description:
    Complete the solution so that the function will break up camel casing, using a space between words.

    Example
    "camelCasing"  =>  "camel Casing"
    "identifier"   =>  "identifier"
    ""             =>  ""
*/


class Solution2 {
    public static String camelCase(String input) {
        StringBuilder res = new StringBuilder();
        for (char c : input.toCharArray()) {
            if (Character.isUpperCase(c)) res.append(' ');
            res.append(c);
        }
        return res.toString();
    }
}