#include <stdio.h>

void zera_vetor(int* vetor, int n){

    int i;
    for (i = 0; i< n ; i++){
        *(vetor+i)= 0;
    }
    return;
}

int main (void){

    int t = 0;
    int cont = 0;

    scanf("%d",&t);

    int a[t];
    int b[t];
    int c[50];

    zera_vetor(c, 50);

    scanf("%d %d",&a[cont],&b[cont]);

    for (int i = 0; i < t; i++){
        for (int j = 0; j < 50; j++){
            scanf("%d ",&c[j]);
        }
    }
    
    return 0;
}
