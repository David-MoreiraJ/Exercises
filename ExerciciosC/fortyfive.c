#include<stdio.h>

int main (void){

    int nl = 0;
    int nc = 0;

    char dummy;
    scanf("%d %d", &nl,&nc);
    //scanf("%c", &dummy);
    char matrix[nl][nc];

    for (int i=0;i<nl;i++) {
        for (int j=0;j<nc;j++){
            scanf("%c",&matrix[i][j]); 
            scanf("%c", &dummy);}
}
    
    return 0;
    }
