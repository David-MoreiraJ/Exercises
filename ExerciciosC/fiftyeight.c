/*
Aluno: David Moreira Jacinto da Silva
Professor: Carlos Eduardo Leme Nobrega
TRABALHO - 2
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

    double xl = 0.5; // Valor XLEFT, 
    double xr = 1.5; // Valor XRIGHT
    double xmid = 0;  // Valor XMEIO
    double divisor = 2.0; // Divisor
    double Fx;
    int cont = 0;

    while(cont < 3){ 
        if (cont == 1){
            xl = 1.5; xr = 2.5;
        }
        if(cont == 2){
            xl = 2.5; xr = 3.5;
        }
        xmid = (xl + xr) / divisor;
        Fx = pow(xmid,3) - (6 * pow(xmid,2)) + (11*xmid) - 6;
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
