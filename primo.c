#include <stdio.h>
#include <locale.h>

void ehprimo(int n)
{
    int i;
    int cont = 0;

    for (i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        printf("%d É PRIMO\n", n);
    }
    else
    {
        printf("%d NÃO É PRIMO\n", n);
    }
}

int main()
{
    int num, num2;
    setlocale(LC_ALL, "portuguese");
    printf("Digite o inicio do intervalo que deseja verificar\n");
    scanf("%d", &num);
    printf("Digite o inicio do intervalo que deseja verificar\n");
    scanf("%d", &num2);
    int j;
    for (j = num; j <= num2; j++)
    {
        ehprimo(j);
    }
    return 0;
}