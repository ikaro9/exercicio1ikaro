#include<stdio.h>
#define LINHAS 3
#define COLUNAS 3
void soma(int m1[LINHAS][COLUNAS],int m2[LINHAS][COLUNAS]){
    int aux[LINHAS][COLUNAS];
    for(int i = 0;i<LINHAS;i++){
        for(int j = 0;j<COLUNAS;j++){
         aux[i][j] = m1[i][j]+m2[i][j];
        }
    }
    for(int i = 0;i<LINHAS;i++){
        for(int j = 0;j<COLUNAS;j++){
    printf("%d ",aux[i][j]);
}
    }
}

int main(){
    int m1[LINHAS][COLUNAS] = {{2,3,4},{6,7,8},{10,9,8}};
    int m2[LINHAS][COLUNAS] = {{9,7,5},{0,9,4},{2,4,6}};
    soma(m1,m2);
    return 0;
}
