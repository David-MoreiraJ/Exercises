#include<stdio.h>

int main (void){

    int a = 0;
    int l = 0;
    //int ponta = 0;
    int cruz = 0;
    int cont = 0;
    
    scanf("%d %d",&a, &l);
    l++;
    
    char matriz[a][l];
    int inteiros[a][l-1];
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < l; j++){
        scanf("%c",&matriz[i][j]);
        }
    }

    return 0;
}
