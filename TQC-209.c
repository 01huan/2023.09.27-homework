#include <stdlib.h>
#include <stdio.h>

int main () {
    int i, j, direction;
    scanf("%d", &direction);
    switch (direction) {
        case 0:
            for (i=1; i<=5; i++) {
                for (j=1; j<=5; j++) {
                    printf("%d x %d = %d\t", i, j, i*j);
                }
                printf("\n");
            }
            break;
        case 1:
            for (i=1; i<=5; i++) {
                for (j=1; j<=5; j++) {
                    printf("%d x %d = %d\t", j, i, i*j);
                }
                printf("\n");
            }
            break;
        default:
            printf("error\n");
            break;
    }
}