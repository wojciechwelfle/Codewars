/*
    Description:
    Trolls are attacking your comment section!

    A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

    Your task is to write a function that takes a string and return a new string with all vowels removed.

    For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

    Note: for this kata y isn't considered a vowel.
*/

#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str) {
    char *res = calloc((int) strlen(str) + 1, sizeof(char));
    if (res == NULL) return NULL;
    memcpy(res, str, strlen(str) + 1);
    char *ptr = res;
    while ((ptr = strpbrk(ptr, "aeiouAEIOU")) != NULL) {
        for (int i = 0; i < (int) strlen(ptr); ++i) {
            *(ptr + i) = *(ptr + i + 1);
        }
    }
    return res;
}
