#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n = 0;
    int empates = 1;
    int **placar;
    int *estimativa;
    int contal = 0;
    int contar = 0;

    scanf("%d",&n);

    placar = (int **) malloc (n * sizeof(int *));
    estimativa = (int *) malloc (2 * sizeof(int));
    
    estimativa[0] = 0;
    estimativa[1] = 0;

    for (int i = 0; i < n; i++) {
        placar[i] = (int *) malloc (2 * sizeof(int));
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d",&placar[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            contal = placar[i][j] - estimativa[0];
            contar = placar[i][j + 1] - estimativa[1];
            while(contal > 0 && contar > 0 && estimativa[0] < estimativa[1]){
                estimativa[0]++;
                contal--;
                if(estimativa[0] == estimativa[1]){
                    empates++;
                }
            }
            while(contal > 0 && contar > 0 && estimativa[1] < estimativa[0]){
                estimativa[1]++;
                contar--;
                if(estimativa[0] == estimativa[1]){
                    empates++;
                }
            }
            while(contal > 0 && contar > 0 && estimativa[0] == estimativa[1]){
                estimativa[0]++;
                estimativa[1]++;
                contal--;
                contar--;
                if(estimativa[0] == estimativa[1]){
                    empates++;
                }
            }
            while(contal > 0 && contar == 0){
                estimativa[0]++;
                contal--;
                    if(estimativa[0] == estimativa[1]){
                    empates++;
                }                   
            }
            while(contar > 0 && contal == 0){
                estimativa[1]++;
                contar--;
                if(estimativa[0] == estimativa[1]){
                    empates++;
                }
            }
        }
    }
    printf("%d",empates);

    for(int i = 0; i < n; i++){
        free(placar[i]);
    }
    free(estimativa);

    return 0;
}
