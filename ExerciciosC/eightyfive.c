#include<stdio.h>
#include<stdlib.h>

int main(void){

   int N;
   scanf("%d",&N);
   long int *X;
   long int diferenca = 0;

   X = malloc(N * sizeof(long int));

   for(int i = 0;i < N;i++){
       scanf("%ld",&X[i]);
   }


   for(int i = 0;i < N - 1;i++){
       if(X[i] >= X[i + 1]){
           diferenca += X[i] - X[i + 1];
           X[i + 1] += X[i] - X[i + 1];
       }   
   }

   free(X);

   printf("%ld\n",diferenca);
    
    return 0;
}
