#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, gcd, lcm, i;
    scanf("%d %d", &a, &b);
    for (i=1; i<=a; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            gcd = i;
        }
    }
    lcm = a * b / gcd;
    printf("%d\n%d\n", gcd, lcm);
}