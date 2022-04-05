#include <stdio.h>

int main(void)
{
   int A[10];
   int B[10];
   int i;

   for (i = 0; i < 10; i++) {
       printf("Diga um numero para ser depositado na posicao %d, e ser multiplicado por 10. \n", i);
       scanf("%d", &A[i]);
       B[i] = A[i] * 10;
   }

   for (i = 0; i < 10; i++) {
       printf("Valor %d de A = %d \n -- Valor %d de B = %d \n", i, A[i], i, B[i]);
   }

    return 0;
}
