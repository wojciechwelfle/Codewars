/*
    Description:
    altERnaTIng cAsE <=> ALTerNAtiNG CaSe
    Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:

    StringUtils.toAlternativeString("hello world") == "HELLO WORLD"
    StringUtils.toAlternativeString("HELLO WORLD") == "hello world"
    StringUtils.toAlternativeString("hello WORLD") == "HELLO world"
    StringUtils.toAlternativeString("HeLLo WoRLD") == "hEllO wOrld"
    StringUtils.toAlternativeString("12345") == "12345" // Non-alphabetical characters are unaffected
    StringUtils.toAlternativeString("1a2b3c4d5e") == "1A2B3C4D5E"
    StringUtils.toAlternativeString("StringUtils.toAlternatingCase") == "sTRINGuTILS.TOaLTERNATINGcASE"
    As usual, your function/method should be pure, i.e. it should not mutate the original string.
 */


class StringUtils {
    public static String toAlternativeString(String string) {
        StringBuilder res = new StringBuilder();
        string.chars().forEach(i -> {
            if (Character.isUpperCase(i)) res.append((char) Character.toLowerCase(i));
            else if (Character.isLowerCase(i)) res.append((char) Character.toUpperCase(i));
            else res.append((char) i);
        });
        return res.toString();
    }
}
