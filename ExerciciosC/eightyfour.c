#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int comparador(const void *a, const void *b){
    return strcmp(a,b);
}
 
int main(void){
  
    int N;
    int k = 0;
    int cont1 = 0; 
    int cont2 = 0; 
    int cont3 = 0;
    int cont4 = 0;
    char **array1;
    char **array2;
    char *tmp;
    
    scanf(" %d", &N);

    array1 = malloc(N * sizeof(char*));
    array2 = malloc(N * sizeof(char*));
    tmp =  malloc(11 *sizeof(char));

    for(int i = 0; i < 11; i++){
        array1[i] = malloc(11 * sizeof(char));
        array2[i] = malloc(11 * sizeof(char));
    }
  
    for(int i = 0; i < N; i++){
        scanf(" %s", tmp);
        if(tmp[0] == '!'){
            strcpy(array2[cont2], tmp);
            cont2++;
        }
        else{
            strcpy(array1[cont1], tmp);
            cont1++;
        }
    }
  
    qsort(array1, cont1, sizeof(array1[0]), comparador);
    qsort(array2, cont2, sizeof(array2[0]), comparador);
 
    for(k = 0; k < cont1; k++){
        for(int j = cont4; j < cont2; j++){
            if(strcmp(array1[k], &array2[j][1]) < 0){
                cont4 = j;
                break;
            }
            else if(strcmp(array1[k], &array2[j][1]) == 0){
                cont3 = 1;
                break;
            }
        }
        if(cont3 == 1) {
            break;
        }
    }
  
    if(cont3 == 1){
        printf("%s\n", array1[k]);
    }
    else{
        printf("satisfiable\n");
    }
    for(int i = 0; i < 11; i++){
        free(array1[i]);
        free(array2[i]);
    }
    free(array1);
    free(array2);
    free(tmp);
 
    return 0;
}
