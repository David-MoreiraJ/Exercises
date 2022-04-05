#include <stdio.h>

int main(void)
{
    int n; 
    int v[n];
    int x;
    
    printf("Quantos alunos compareceram a aula? \n");
    scanf("%d", &n);

    printf("Assinaturas da lista de presenca : \n");
    while ( n > 0) {
        scanf("%d", &v[0]);
        n--; }
    printf("%d", v[0]);
    

    return 0;

    
}
    
