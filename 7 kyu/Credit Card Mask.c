/*
    Description:
    Usually when you buy something, you're asked whether your credit card number, phone number or answer to your most secret question is still correct. However, since someone could look over your shoulder, you don't want that shown on your screen. Instead, we mask it.

    Your task is to write a function maskify, which changes all but the last four characters into '#'.

    Examples
    maskify("4556364607935616") == "############5616"
    maskify(     "64607935616") ==      "#######5616"
    maskify(               "1") ==                "1"
    maskify(                "") ==                 ""

    // "What was the name of your first pet?"
    maskify("Skippy")                                   == "##ippy"
    maskify("Nananananananananananananananana Batman!") == "####################################man!"
*/


#include <stdlib.h>
#include <string.h>

char *maskify(char *masked, const char *string) {
    if (masked == NULL || string == NULL) return NULL;

    *masked = '\0';
    for (int i = 0; i < (int) strlen(string); ++i) {
        if (i < (int) strlen(string) - 4) *(masked + i) = '#';
        else *(masked + i) = *(string + i);
        *(masked + i + 1) = '\0';
    }

    return masked;
}