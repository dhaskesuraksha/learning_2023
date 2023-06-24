#include <stdio.h>
typedef unsigned long long ull;
void printExponent(double num) {
    ull *ptr = (ull *)&num; 
    ull expbit = (*ptr >> 52) & 0x7FF; 

    // Print exponent in hexadecimal format
    printf("Exponent in hexadecimal: 0x%llX\n", expbit);

    // Print exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%lld", (expbit >> i) & 0x01);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
