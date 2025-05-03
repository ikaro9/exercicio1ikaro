#include <stdio.h>

typedef struct
{
    char nome[20];
    int matricula;
    double media;
} Aluno;

void cadastro(Aluno *p, int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        getchar();
        printf("Digite o nome do aluno: ");
            fgets(p[i].nome, sizeof(p[i].nome), stdin);
            printf("Digite a matricula: ");
            scanf("%d", &p[i].matricula);
            printf("Digite a media do aluno: ");
            scanf("%lf", &p[i].media);
        }
    }


    void mostrar(Aluno * v, int tamanho)
    {
        getchar();
        printf("Aprovados:\n");
        for (int i = 0; i < tamanho; i++)
        {
            if (v[i].media >= 7.0)
            {
                printf("%s", v[i].nome);
            }
        }
    }

    int main()
    {
        int n;
        printf("Digite quantos alunos serão cadastrados\n");
        scanf("%d", &n);
        Aluno vet[n];
        cadastro(vet, n);
        mostrar(vet, n);
        return 0;
    }