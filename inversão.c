#include <stdio.h>
#include <string.h>
void inverso(char *p)
{
    int i;
    int tamanho = strlen(p);
    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", p[i]);
    }
}

int main()
{
    char vet[10];
    printf("Digite o número que quer inverter\n");
    fgets(vet, sizeof(vet), stdin);

    inverso(vet);
    return 0;
}