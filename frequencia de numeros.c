#include<stdio.h>
#include<string.h>


void frequencia(int *p){
 
    for(int i=0;i<10;i++){
        int vezes = 0;
        for(int j=0;j<10;j++){
        if(p[i] == p[j]){
            vezes++;
            printf("%d aparece %d vezes\n",p[i],vezes);
        }
    }

}
}

int main(){
    int vet[10];
    printf("Digite os números \n");
    for(int i=0;i<10;i++){
    scanf("%d",&vet[i]);
    }
    frequencia(vet);
    return 0;
}