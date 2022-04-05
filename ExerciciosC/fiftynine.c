#include <stdio.h>
#include <stdlib.h>

int main(void){

    char **strings;
    int n = 0;

    scanf("%d",&n);

    strings = (char **) malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        strings[i] = (char *) malloc(101 * sizeof(char));
        printf("Criando colunas\n");
    }

    for (int i = 0; i < n; i++){
        scanf("%s",&strings[i]);
        printf("%s\n",strings[i]);
    }
}
