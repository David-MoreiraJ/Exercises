#include <stdio.h>

int função(int a, int b) {
    return a * b;
}

int main (void) {

    int k, n1, n2 = 0;

    for (int cont = 0 ; cont < 3; cont++) {
            printf("me de o valor de k! \n");
            scanf("%d", &k);

        while( k > 0) {
            printf("Me diga um número inteiro!: \n");
            scanf("%d %d " &n1, &n2);
            printf("%d", n1 - n2);
            k--;
        }
    }

    return 0;
}
    
