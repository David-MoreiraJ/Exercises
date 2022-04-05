#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int l;
    int x;

    printf("Qual o valor do lado do seu quadrado \n");
    scanf("%d", &l);

    x = l * l;
    
    printf("%d", x);

    return 0;
}
