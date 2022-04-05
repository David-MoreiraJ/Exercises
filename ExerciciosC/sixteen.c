#include <stdio.h>
#include <math.h>

int main (void) {

    int i, j;
    
    i = 1;
    while (i < 5) {
        for (j = 1; j < 5; j++) {
            if (i == j)
                printf( " 1 ");
            else printf(" 0 ");
        }
        printf("\n");
        i++;
    }
    return 0;
}
