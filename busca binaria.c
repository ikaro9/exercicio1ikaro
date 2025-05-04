#include<stdio.h>
#define TAM 10

int buscabinaria(int *p,int valor,int fim){
    int inicio = 0;
    int meio = (inicio+fim)/2;
    while(inicio<=fim){
        if(p[meio] == valor){
            return meio;
        }
        else{
            if(valor<p[meio]){
                fim = meio-1;
            }
            else{
                inicio=meio+1;
            }
        }
        meio = (inicio+fim)/2;
    }
    return -1;
}

int main(){
    int vet[TAM] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    printf("Digite o valor a ser procurado\n");
    scanf("%d",&num);
    int ind = buscabinaria(vet,num,TAM - 1);
   if(ind != -1){
    printf("O valor %d foi encontrado na posição %d\n",num,ind);
   }
   else{
    printf("O valor %d não foi encontrado no vetor\n",num);
   }
    return 0;
}