#include <stdio.h>


int fibonacci_recursivo(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
    }
}

int main()
{
    int numero;

    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &numero);

    while (numero < 0)
    {
        printf("Por favor, digite um n�mero n�o negativo.\n");
        scanf("%d", &numero);
    }
    int resultado = fibonacci_recursivo(numero);
    printf("O %d-�simo n�mero de Fibonacci �: %d\n", numero, resultado);

    return 0;
}