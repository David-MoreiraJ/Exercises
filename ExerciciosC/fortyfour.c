#include <stdio.h>

int main() {
    int T, N, cont_zero = 0;
    int soma_valores = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        int a[N];
        for(int j = 0; j < N; j++){ 
            scanf("%d", &a[j]);
            if(a[j] == 0){          
                cont_zero++;
            }
            soma_valores += a[j];
        }
        soma_valores += cont_zero;  
        
        if(soma_valores == 0){
            cont_zero++;
        }
        printf("%d\n", cont_zero);
        cont_zero = 0;
        soma_valores = 0;
    }
    return 0;
}
