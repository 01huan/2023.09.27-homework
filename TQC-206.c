#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    for (a; a<=b; a++) {
        if (a % 2 != 0) {
            sum += a;
        }
    }
    printf("%d\n", sum);
}