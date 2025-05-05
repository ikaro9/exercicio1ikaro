#include <stdio.h>

int diagonal(int m[4][4]){
    int soma = m[0][0] + m [1][1] + m[2][2] + m[3][3]; 
       return soma;
}

int main(){
    int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{8,7,6,5},{4,3,2,1}};
    int resultado = diagonal(matriz);
    printf("O resultado da soma da diagonal é %d\n",resultado);
    return 0;
}