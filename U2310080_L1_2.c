#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Code_Owner_U2310080\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    printf("Largest number is: %d\n", largest);

    return 0;
}
