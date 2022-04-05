#include<stdio.h>

int main (void){

    int A = 0;
    int B = 0;
    int C = 0;

    scanf("%d %d %d",&A, &B, &C);

    if (A + B + C == 17){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
