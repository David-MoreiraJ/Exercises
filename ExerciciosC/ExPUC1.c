#include <stdio.h>

int main(void)
{
    int k = 10;
    int cont = 0; 
    int n1 = 0; 
    int n2 = 0; 
    int adj = 0;

    printf("Starting... \n");

    for (cont = 0; cont < 3; cont++) {
        while (k > 0 && adj < 100) {

            printf("%d - Me diga um numero inteiro: ",k);
            scanf("%d", &n1);
            printf("\n");
            k--;

            if (n1 > n2 && k < 9) {
                if (n1 - n2 > adj) {
                adj = n1 - n2;
                }     
            }

            else if (n2 < n1 && k < 9) { 
                if (n2 - n1 > adj) {
                adj = n2 - n1;
                }
            }
            
            printf("O adjacente e: %d \n", adj);

            printf("%d - Me diga um numero inteiro: ",k);
            scanf("%d", &n2);
            printf("\n");
            k--;

            if (n1 > n2) {
                if (n1 - n2 > adj) {
                adj = n1 - n2;
                }     
            }
            else { 
                if (n2 - n1 > adj) {
                adj = n2 - n1;
                }               
            }
            
            printf("O adjancente e: %d \n", adj);
            n1 = n2;
 
        }
        printf("Esta foi a maior diferenca entre adjacentes: %d \n", adj);
        printf("\n");
        k = 10;
        adj = 0;
    }
}
    
