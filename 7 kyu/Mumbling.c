/*
  Description:
  This time no story, no theory. The examples below show you how to write function accum:

  Examples:
  accum("abcd") -> "A-Bb-Ccc-Dddd"
  accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
  accum("cwAt") -> "C-Ww-Aaa-Tttt"
  The parameter of accum is a string which includes only letters from a..z and A..Z.
*/

#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int factorial(int n) {
    return n > 0 ? n * factorial(n - 1) : 1;
}

char *accum(const char *source) {
    if (source == NULL) return NULL;
    int stringSize = factorial((int) strlen(source)) + (int) strlen(source);

    char *string = calloc(stringSize, sizeof(char));
    if (string == NULL) return NULL;

    char *ptr = string;
    int counter = 1;
    while (*source) {
        for (int i = 0; i < counter; i++) {
            if (i == 0) islower(*source) ? (*ptr = (char) toupper(*source)) : (*ptr = *source);
            else isupper(*source) ? (*ptr = (char) tolower(*source)) : (*ptr = *source);
            ptr++;
        }
        *ptr++ = '-';
        source++, counter++;
    }
    *--ptr = '\0';
    return string;
}