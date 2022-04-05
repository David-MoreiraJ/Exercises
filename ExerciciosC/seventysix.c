/*
Aluno: David Moreira Jacinto da Silva
Professor: Carlos Eduardo Leme de Nóbrega
Álgebra linear - Trabalho 3
*/
#include <stdio.h>
#include <math.h>

double funcao(double x){ // Calcula a função 

    return x * tan(x) - 3; // Y = x * tan(x) - A
}
 
double e=0.000001; // Precisão de "e" casas decimais.
double c; // Variável auxiliar.
 
void aproximacao(double a,double b){
 
    c = a;
 
    while ((b-a) >= e){
        c = (a+b)/2;
        if (funcao(c) == 0.0){
            printf("Raiz encontrada = %lf\n",c);
            break;
        }
        else if (funcao(c)*funcao(a) < 0){
                //printf("Root = %lf\n",c);
                b = c;
        }
        else{
                //printf("Root = %lf\n",c);
                a = c;
        }
    }
}
 
int main(void){

    int iteracoes = 5;  // Número de raízes a serem calculadas
    double Xleft,Xright,Salto;
    Xleft=0.5;      // Valor Xleft inicial
    Xright=1.5;     // Valor Xright inicial
    Salto = 2.67; // Salto aproximado para a região de busca da próxima raiz
 
    printf("Y = x * tan(x) - 3\n"); 
    printf("Xleft = %lf\n",Xleft);
    printf("Xright = %lf\n",Xright);
    for(int i = 0; i < iteracoes; i++){ 
        aproximacao(Xleft,Xright); // Realiza as estimativas até encontrar um valor onde a função corte o eixo X.
        //printf("\n");
        printf("A funcao corta o eixo X no ponto = %lf\n",c); // Exibe as raízes positivas
        Xleft += Salto; // Avança o valor Xleft para a direção da próxima raiz
        Xright += Salto; // Avança o valor de Xrighr para a direção da próxima raiz
    }
 
    return 0;
}
