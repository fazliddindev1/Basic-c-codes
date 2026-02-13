#include <stdio.h>

int main() {
    printf("Code_Owner_U2310080\n");
    int num, i, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime number.\n", num);
        printf("Well Done !!!\n");
    } else {
        printf("%d is NOT a Prime number.\n", num);
        printf("Try another one !!!\n");
    }

    return 0;
}
