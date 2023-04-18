/*
    Solution:
    Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.

    Examples
    "the-stealth-warrior" gets converted to "theStealthWarrior"

    "The_Stealth_Warrior" gets converted to "TheStealthWarrior"

    "The_Stealth-Warrior" gets converted to "TheStealthWarrior"
*/


class Solution {
    static String toCamelCase(String s) {
        StringBuilder res = new StringBuilder();
        boolean isNewLetter = false;
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                if (isNewLetter) {
                    res.append(Character.toUpperCase(c));
                    isNewLetter = false;
                } else {
                    res.append(c);
                }
            } else {
                isNewLetter = true;
            }
        }
        return res.toString();
    }
}
