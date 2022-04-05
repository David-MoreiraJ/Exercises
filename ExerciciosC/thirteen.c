#include <stdio.h>
#include <stdlib.h>

int main (void) {

int magic;
int guess;

magic = rand();

printf("Advinhe o numero magico: \n");
scanf( "%d", &guess);

if (guess == magic) {
    printf("**Certo!** \n");
    printf("%d e o numero magico! \n", magic); 
}

else {
    printf("**Errado!** \n");
    if (guess > magic)
        printf("%d e muito alto! \n", guess);
    else
        printf("%d e muito baixo! \n", guess); 
}

}
