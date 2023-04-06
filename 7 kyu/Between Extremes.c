/*
    Description:
    Given an array of numbers, return the difference between the largest and smallest values.

    For example:

    [23, 3, 19, 21, 16] should return 20 (i.e., 23 - 3).

    [1, 434, 555, 34, 112] should return 554 (i.e., 555 - 1).

    The array will contain a minimum of two elements. Input data range guarantees that max-min will cause no integer overflow.
*/

#include <stddef.h>

int between_extremes(size_t length, const int numbers[length]) {
    int min = numbers[0], max = numbers[0];
    for(size_t i = 0; i < length; i++) {
        if(numbers[i] < min) min = numbers[i];
        if(numbers[i] > max) max = numbers[i];
    }
    return max - min;
}
