#include<stdio.h>

int main(void){
    
    int n = 0;
    int a = 0;
    int a1 = 1;
    int b = 0;
    int b1 = 1;
    int divisor = 1;
    
    //printf("Qual será o número de testes??\n");
    scanf("%d",&n);

   //printf("Diga o valor de seu A e B, respectivamente.\n");
    scanf("%d %d",&a ,&b);

    if (a < b){
        a1 = 1;
        b1 = 1;
        while (n > 0){
            if (a1 % divisor == 0 && b1 % divisor == 0){
                printf("%d\n",divisor);
                n--;
                a1++;
            }
            if (a1 >= b1 && b1 < b){
                b1++;
            }
            if (b1 == b){
                n = 0;
            }
            divisor++;
        }
    }

    else {
        while (n > 0){
            if (a1 % divisor == 0 && b1 % divisor == 0){
                printf("%d\n",divisor);
                n--;
                b1++;
            }
            if (b1 >= a1 && a1 < a){
                a1++;
            }
            if (a1 == a){
                n = 0;
            }
            divisor++;
        }
    }
    return 0;
}
