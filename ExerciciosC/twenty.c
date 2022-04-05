#include <stdio.h>

int main(void)
{
    int i; 
    int vetor[15];
    int media[2];
    int aux = 0;

   for (i = 0; i <= 15; i++) {
       printf("Me de o valor do seu vetor na posi��o %d \n", i);
       scanf("%d", &vetor[i]); }

   for (i = 0; i < 5; i ++) {
       aux += vetor[i];
   }
   aux = aux / 5;
   media[0] = aux;
   aux = 0;
       
   for (i = 5; i < 10; i++) {
       aux += vetor[i];
   }

   aux = aux / 5;
   media[1] = aux;
   aux = 0;

   for (i = 10; i <15; i++) {
       aux += vetor[i];
   }

   aux = aux / 5;
   media[2] = aux;
   
   i = 0;

   while ( i < 3) {
       printf("%d \n", media[i]);
       i++; }
   
}
    
