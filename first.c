#include <stdio.h>
#include <limits.h>  // For integer limits
#include <float.h>   // For floating-point limits

int main() {
    // Integer types
    printf("Maximum value of signed char: %d\n", SCHAR_MAX);
    printf("Maximum value of unsigned char: %u\n", UCHAR_MAX);
    printf("Maximum value of signed short: %d\n", SHRT_MAX);
    printf("Maximum value of unsigned short: %u\n", USHRT_MAX);
    printf("Maximum value of signed int: %d\n", INT_MAX);
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);
    printf("Maximum value of signed long: %ld\n", LONG_MAX);
    printf("Maximum value of unsigned long: %lu\n", ULONG_MAX);
    printf("Maximum value of signed long long: %lld\n", LLONG_MAX);
    printf("Maximum value of unsigned long long: %llu\n", ULLONG_MAX);

    // Floating-point types
    printf("Maximum value of float: %e\n", FLT_MAX);
    printf("Maximum value of double: %e\n", DBL_MAX);
    printf("Maximum value of long double: %Le\n", LDBL_MAX);

    return 0;
}

