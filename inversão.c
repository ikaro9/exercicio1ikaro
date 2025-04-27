#include<stdio.h>
void inverso(char *p){
   int i;
   for(i =9;i>=0;i--){
    printf(" %c",p[i]);
   }
}




int main(){
    char vet[10];
   fgets(vet,sizeof(vet),stdin);
 
   inverso(vet);
    return 0;
}