#include <stdio.h>


int main(void)

{
    char s[20];
    char vogais[5] = "aeiou";
    char consoantes[28] = "bcdfghjklmnpqrstvxyz";
    int i = 0;

    printf("Me d� uma palavra!\n");
    scanf("%c", &s);

    printf("Vogais :");

    for (i = 0; i < 20; i++) {
        while (i < 20) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            printf("%c", s[i]); 
            }
        }
        
    }
    printf("\n");
    printf("Consoantes:");

   for (i = 0; i < 20; i++) {
       if  (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' ); { 
           printf("%c", s[i]); 
       }
            
   }

    return 0;
}
    
