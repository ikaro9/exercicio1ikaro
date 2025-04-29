#include <stdio.h>

void intercecao(int *p, int tamanhoP, int *l, int tamanhoL)
{
    printf("Os elementos em comum são: ");
    for (int i = 0; i < tamanhoP; i++)
    {
        for (int j = 0; j < tamanhoL; j++)
        {
            if (p[i] == l[j])
            {
                printf("%d ", p[i]);
                break;
            }
        }
    }
}

int main()
{
    int vet[3], vet2[3];
    int tamanhoA = sizeof(vet) / sizeof(vet[0]);
    int tamanhoB = sizeof(vet2) / sizeof(vet2[0]);
    printf("Digite os valores do vetor 1\n");
    for (int i = 0; i < tamanhoA; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("Digite os valores do vetor 2\n");
    for (int i = 0; i < tamanhoB; i++)
    {
        scanf("%d", &vet2[i]);
    }
    intercecao(vet, tamanhoA, vet2, tamanhoB);
    return 0;
}