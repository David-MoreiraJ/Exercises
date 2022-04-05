#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int cmp_strR(const void *a,const void *b){
    return strcmp(a,b);
}
 
int main(){
 
    int N,i,j,ans=0;
    char data[200000][12]={0};
    char tmp,len,*tmp_str;
 
    scanf("%d",&N);
 
    for(i=0;i<N;i++){
        scanf("%s",data[i]);
        len = strlen(data[i]);
        for(j=0;j<len/2;j++){
            tmp=data[i][j];
            data[i][j]=data[i][len-1-j];
            data[i][len-1-j]=tmp;
        }
    }
 
    qsort(data,N,12,cmp_strR);
 
    for(i=0;i<N-2;i++){
        tmp_str = data[i];
        if(!strncmp(tmp_str,data[i+1],strlen(tmp_str))){
            if(data[i+1][strlen(tmp_str)]=='!'){
                ans = 1;
                break;
            }
        }
    }
 
    if(ans==1){
        len = strlen(tmp_str);
        for(j=0;j<len/2;j++){
            tmp=tmp_str[j];
            tmp_str[j]=tmp_str[len-1-j];
            tmp_str[len-1-j]=tmp;
        }
        printf("%s",tmp_str);
    }else{
        printf("satisfiable\n");
    }
  
    return 0;
}
