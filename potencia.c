#include<stdio.h>
#include<locale.h>

int potencia(int base, int expoente){
    int temp = base;
    int resultado=1;
    int i;
    if(expoente == 0){
        resultado = 1;
    }
    if(expoente == 1){
        resultado = base;
    }
    for(i = 2;i<=expoente;i++){
        
        resultado = base*temp;
        base = resultado;
       
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