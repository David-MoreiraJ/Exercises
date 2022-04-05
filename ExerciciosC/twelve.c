#include <stdio.h>
#include <stdlib.h>

void main (void) {

    int a, b;

    printf("Me diga dois numeros!: ");
    scanf ("%d %d \n ", &a, &b);

    if (b) printf("%d\n", a/b);
    else printf("Nao pode dividir por zero \n");

}
