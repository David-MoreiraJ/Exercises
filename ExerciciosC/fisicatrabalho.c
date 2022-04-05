#include <stdio.h>

int main (void) {

    double k = 1; // Constante elástica
    double m = 1; // Massa
    double v = 0; // Velocidade inicial
    double x = 1; // Posição inicial
    double a = 5; // Aceleração
    double gama = 1; // Resistência do ar
    double t = 0.0; // Tempo inicial
    double tempomax = 20.0; // Limite de tempo
    double salto = 0.1; // Passos / Avanço do programa

    while(t < tempomax){
        a = -k - (v * gama) / m; // Calcula a aceleração
        v = v + a * salto; // Calcula a velocidade
        x = x + v * salto; // Calcula a posição
        t = t + salto;
        printf("%lf  /  %lf  /  %lf  /  %lf\n",t,x,v,a);
    }

    return 0;
}
