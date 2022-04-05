#include<stdio.h>
#include<string.h>

int main (void){
    
    int A = 0;
    int B =0;
    int K = 0;
    int cont = 0;

    scanf("%d %d %d",&A,&B,&K);
    //int i = A - 1;

    for (int i = 0 ; i < B + 1; i++);{
        if(i % K == 0){
            printf("%d\n",i);
            cont++;
        }
    }
    printf("%d\n",cont);

    return 0;
}
