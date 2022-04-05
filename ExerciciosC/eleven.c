#include <stdio.h>
#include <stdlib.h>

int main (void) {

int magic;
int guess;

magic = rand();

printf("Advinhe o numero magico: \n");
scanf( "%d", &guess);

if (guess == magic)
    printf("**Certo!** \n");
else
    printf("**Errado!** \n");

}
