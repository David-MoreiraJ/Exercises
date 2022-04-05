#include <stdio.h>

int main (void){
    
    int divisor = 0;
    int menor = 0;
    int n = 0;
    int k = 0;
    scanf("%d",&n);
    char s[n];
    char r[n];
    char mesa[4] = {'b','a','t','e'};
    char alfa[28] = {'a', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','\0'}; 


    scanf("%d",&k);
    scanf("%s",&s);

    for(int i = 0; i < n; i++){
       if (s[i] > mesa[i]){
            menor += s[i] - mesa[i];
        }
        else{
            menor += mesa[i] - s[i];   
        }
    }

    divisor = menor;

    printf("%d",menor);


    return 0;
}
