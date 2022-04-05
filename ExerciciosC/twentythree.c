#include <stdio.h>


int main(void)
{
    char ch;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o %d caracter : ", i+1);
        scanf("%c", &ch);
        setbuf(stdin,NULL);
    }

    return 0;   
}
    
