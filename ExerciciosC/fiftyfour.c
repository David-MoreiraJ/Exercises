#include <stdio.h>

int main (void){

    char timedacasa[20];
    char timevisitante[20];
    int n = 0; // Número de eventos.

    scanf("%s",&timedacasa);
    scanf("%s",&timevisitante);
    scanf("%d",&n);

    int t[n];
    char c[n + 1];
    int j[n];
    char a[n + 1];
    char timepunido[n];
    int camisapunido[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %s",&t[i],&c[i],&j[i],&a[i]);
     }

    for (int i = 0; i < n; i++){
        if(a[i] == 'r'){
            if (c[i] == 'h'){
                printf("%s ", timedacasa);
            }
            if (c[i] == 'a'){
                printf("%s ", timevisitante);
            }
            printf("%d %d\n",j[i], t[i]);
        }
        else{
        }
    return 0;
}
