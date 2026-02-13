#include <stdio.h>

int main() {
    int num;

    printf("Code_Owner_U2310080\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}
