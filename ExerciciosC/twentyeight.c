#include <stdio.h>
#include <string.h>

int main(void)
{
   int t = 3;
   char a[8], b[8];

   printf("Quantas rodadas? \n");
   scanf("%d", &t);

   while (t--) {
       printf("Pedra, papel e tesou...ra!\n");
       scanf("%s %s", a, b); 

       if (strcmp(a, b) == 0) {
               printf("Caso %d: De novo!\n", t); }
       else if (strcmp(a, "tesoura") == 0 && strcmp(b, "papel") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "papel") == 0 && strcmp(b, "pedra") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "lagarto") == 0 && strcmp(b, "spock") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "spock") == 0 && strcmp(b, "tesoura") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "papel") == 0 && strcmp(b, "spock") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "spock") == 0 && strcmp(b, "pedra") ==0) {
           printf("Caso %d: Bazinga!!\n"); }
       else if (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") ==0) {
           printf("Caso %d: Bazinga!!\n"); }

       else if (strcmp(b, "tesoura") == 0 && strcmp(a, "papel") ==0) {
           printf("Caso %d: Raj Trapaceou! \n" ); }
       else if (strcmp(b, "papel") == 0 && strcmp(a, "pedra") ==0) {
           printf("Caso %d: Raj Trapaceou! \n" ); }
       else if (strcmp(b, "pedra") == 0 && strcmp(a, "lagarto") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "lagarto") == 0 && strcmp(a, "spock") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "spock") == 0 && strcmp(a, "tesoura") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "tesoura") == 0 && strcmp(a, "lagarto") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "lagarto") == 0 && strcmp(a, "papel") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "papel") == 0 && strcmp(a, "spock") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "spock") == 0 && strcmp(a, "pedra") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }
       else if (strcmp(b, "pedra") == 0 && strcmp(a, "tesoura") ==0) {
           printf("Caso %d: Raj trapaceou!!\n"); }

   }
}
    
