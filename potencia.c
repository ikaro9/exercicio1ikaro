#include<stdio.h>
#include<locale.h>

int potencia(int base, int expoente){
    int resultado=1;
    int i;
    for(i=0;i<expoente;i++){
         resultado = resultado *base;
    }
    return resultado;
}
int main(){
    int b,e;
    printf("Digite a base da potencia��o\n");
    scanf("%d",&b);
    printf("Digite o expoente da potencia��o\n");
    scanf("%d",&e);
    int result = potencia(b,e);
    printf("O resultado da potencia��o � %d\n",result);
}