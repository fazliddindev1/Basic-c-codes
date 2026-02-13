#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1;

    printf("Code_Owner_U2310080\n");
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for (i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to power %d is %lld\n", base, exponent, result);

    return 0;
}
