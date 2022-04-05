/*
Aluno: David Moreira Jacinto da Silva
Professor: Carlos Eduardo Leme Nobrega
TRABALHO - 3
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

    double xl = 0.5; // Valor XLEFT.
    double xr = 1.5; // Valor XRIGHT.
    double xmid = 0;  // Valor XMEIO.
    double divisor = 2.0; // Divisor.
    double A = 3; // Último número não nulo da minha matrícula.
    double Fx; // Y = x * tan(x) - A.
    int cont = 0; // Váriavel auxiliar, determina quantos valores de X serão calculados...

    while(cont < 3){ 
        if (cont == 1){
            xl = 3.5; xr = 4.5;
        }
        if(cont == 2){
            xl = 6.5; xr = 7.5;
        }
        xmid = (xl + xr) / divisor; // Computa um novo valor XMID.
        Fx = (xmid * tan(xmid) - A);
       if(abs(Fx) <= 0.000000001){
           printf("X%d = %lf\n",cont + 1,xmid);
           cont++;
           continue;
       }
       else if(xmid > 0){
            xr = Fx;
        }
        else{
            xl = Fx;
        }
    }
    return 0;
}
