#include <stdio.h>

void main() {
    int a, b;

    a=5;
    b=10;

    b += a;
    printf("hasil b += adalah %d\n", b);

    b -= a;
    printf("hasil b -= adalah %d\n", b);

    b *= a;
    printf("hasil b *= adalah %d\n", b);

    b /= a;
    printf("hasil b /= adalah %d\n", b);

    b %= a;
    printf("hasil b %= adalah %d\n", b);

}