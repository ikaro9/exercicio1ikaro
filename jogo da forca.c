#include <stdio.h>
#include <string.h>
void forca(char *p, char letra, int *erros)
{
    int achou = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] == letra)
        {
            printf("A letra %c está contida na %d posição da palavra\n", letra, i + 1);
            achou = 1;
        }
    }
    if (!achou)
    {
        printf("A letra %c não esta contida na palavra\n",letra);
        (*erros)++;
    }
}

void chute(char *t, char *palav)
{
    printf("Digite a palavra\n");
    fgets(t, 100, stdin);
    t[strcspn(t, "\n")] = '\0';
    if (strcmp(palav, t) == 0)
    {
        printf("Parabéns você acertou\n");
    }
    else
    {
        printf("Errou!\n");
    }
}
int main()
{
    char palavra[100];
    int errar = 0;
    int qerros = 8;
    char l;
    int opcao;
    char plv[100];

    printf("Digite a palavra\n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    while (errar != qerros)
    {
        printf("Escolha uma opção:\n1 - Tentar uma letra\n2 - Chutar a palavra\n0 - Sair\n\n");
        scanf("%d", &opcao);
        getchar();
        switch (opcao)
        {
        case 1:
            printf("Digite a letra\n");
            scanf(" %c", &l);
            forca(palavra, l, &errar);
            break;

        case 2:
            chute(plv, palavra);
            break;
        case 0:
            return 0;
        default:
            printf("Opção inválida\n");
        }
    }
    printf("Você perdeu! A palavra era %s", palavra);
}
