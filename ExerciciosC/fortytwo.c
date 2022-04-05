#include <stdio.h>
#include <stdlib.h>

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
    int b1 = 0;
    int t1 = 0;
    int caminho = 0;
    int bus = 0;
    int train = 0;
    int A, B, C, D;

    //printf("Digite o valor para: \n A(TARIFA UNICA) \n B(VIAGENS ILIMITADAS PARA UMA UNICA LINHA DE ONIBUS OU TREM) \n C(VIAGENS ILIMITADAS PARA APENAS UM MODAL DE TRANSPORTE) \n e D(VIAGENS ILIMITADAS PARA QUALQUER LINHA OU TRAJETO). \n");

    scanf("%d %d %d %d",&A, &B, &C, &D); // Recebe os valores para A, B, C e D.
    //printf("Digite o valor para as linhas de ônibus e trajestos de trem\n");
    scanf("%d %d", &bus,&train);

    int b[bus]; //O
    int t[train]; //T

    zera_vetor(b,bus);// Limpa o vetor
    zera_vetor(t,train);// Limpa o veotr
    
    //printf("preencha o vetor ônibus\n");
    for (int cont = 0; cont < bus; cont++){
        scanf("%d",&b[cont]);
        if(b[cont] * A < B) {
            b1 += (b[cont] * A);
        }
        else {
            b1 += B;
        }
    }

    //printf("preencha o vetor trem\n");
    for (int cont = 0; cont < train; cont++){
        scanf("%d",&t[cont]);
        if(t[cont] * A < B){
            t1 += (t[cont] * A);
        }
        else{
            t1 += B;
        }
    }
    if(t1 > C){
        t1 = C;
    }
    if(b1 > C){
        b1 = C;
    }

    caminho = b1 + t1;

    if(caminho > D){
        caminho = D;
    }

    printf("%d",caminho);

    return 0;
}
