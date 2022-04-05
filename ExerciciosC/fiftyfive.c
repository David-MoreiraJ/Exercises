#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int crescente(const void * a, const void * b){
    if (*(int*)a == *(int*)b) {
        return 0;
    }
    else{
        if (*(int*)a < *(int*)b) {
            return -1;
        }
        else{
            return 1;
        }
    }
}

void zera_vetor(int* vetor, int n)
{
    int i;
    for (i = 0; i< n ; i++)
    {
        *(vetor+i) = 0;
    }
    return;
}

int main (void){

    int s = 0; // N de senhas.
    int t = 0; // Tentativas antes do cooldown.
    int x = 0;
    int correta;
    int tmaior = 0;
    int tmenor = 0;
    int tentativas = 0;

    scanf("%d %d",&s,&t);
    
    char senhas[s][101];
    char senha[101];
    char verdadeira[101];
    int tamanho [s];
    zera_vetor(tamanho,s);

    for (int i = 0; i < s; i++){
        scanf("%s",&senha);
        for(int j = 0; senha[j] != '\0'; j++){
            senhas[x][j] = senha[j];
            tamanho[i] = strlen(senha);
        }
        x++;
    }
    scanf("%s",&verdadeira);
    correta = strlen(verdadeira);
    //printf("%d %s",correta,verdadeira);
    qsort(tamanho, s, sizeof(int),crescente);

    for (int i = 0; i < s; i++){
        tmenor++;
        tentativas++;

        if (correta == tamanho[i]){
            printf("%d ",tmenor);
            break;
        }

        if (tentativas == t){
            tmenor += 5;
            tentativas = 0;
        }
    }

    tentativas = 0;
    for (int i = 0; i < s; i++){
        tmaior++;
        tentativas++;

        if(tamanho[i] == correta && tamanho[i + 1] != correta){
            printf("%d ",tmaior);
            break;
        }
        if (tentativas == t){
            tmaior += 5;
            tentativas = 0;
        }
    }

    return 0;
}
