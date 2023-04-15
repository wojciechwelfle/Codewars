/*
    Description:
    Take the following IPv4 address: 128.32.10.1. This address has 4 octets where each octet is a single byte (or 8 bits).

    1st octet 128 has the binary representation: 10000000
    2nd octet 32 has the binary representation: 00100000
    3rd octet 10 has the binary representation: 00001010
    4th octet 1 has the binary representation: 00000001
    So 128.32.10.1 == 10000000.00100000.00001010.00000001

    Because the above IP address has 32 bits, we can represent it as the 32 bit number: 2149583361.

    Write a function ip_to_int32(ip) ( JS: ipToInt32(ip) ) that takes an IPv4 address and returns a 32 bit number.

    Example
    "128.32.10.1" => 2149583361
*/

#include <stdint.h>
#include <stdlib.h>

union bit_set {
    uint32_t res;
    uint8_t bytes[4];
};

uint32_t ip_to_uint32(const char *ip) {
    union bit_set setter;
    char *buff = calloc(9, sizeof(char));
    for(int i = 0; i < 4; i++) {
        for(int j = 0; *ip != '.' || !*ip; j++) {
            *(buff + j) = *ip++;
            *(buff + j + 1) = '\0';
        }
        setter.bytes[3 - i] = atoi(buff);
        ip++;
    }
    return setter.res;
}
