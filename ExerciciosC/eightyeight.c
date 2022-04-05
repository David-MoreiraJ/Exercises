#include <stdio.h>
#include <stdlib.h>

int main (void){

    int HoraInicial, MinutoInicial,HoraFinal,MinutoFinal,HoraResultado,MinutoResultado;

    printf("Digite a hora inicial, minuto inicial, hora final e minuto final de um jogo.\n");
    scanf("%d %d %d %d",&HoraInicial,&MinutoInicial,&HoraFinal,&MinutoFinal);

    HoraResultado = abs(HoraInicial - HoraFinal);
    MinutoResultado = MinutoFinal - MinutoInicial;
    if(MinutoResultado < 0){
        HoraResultado--;
        MinutoResultado = MinutoResultado + 60;
    }
    if(HoraResultado == 0){
        HoraResultado = 24;
    }
    printf("O jogo durou %d hora(s) e %d minuto(s).\n",HoraResultado,MinutoResultado);

    return 0;
}
