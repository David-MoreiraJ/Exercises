#include <stdio.h>


int main(void)
{
    char s[20];
    char c;
    int i = 0; 
    int cont = 0;
    
    
    printf("Qual palavra voc� quer ler?\n");
    scanf("%s", &s);

    printf("Qual letra voc� gostaria de encontrar nesta palavra?\n");
    scanf("%s", &c);

    for (i = 0; i < 20; i++) {
        if (s[i] == c) {
            cont++;
        }
    }
    
    printf("%d",cnt); 

    return 0;   
}
    
