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

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    while (numero < 0)
    {
        printf("Por favor, digite um número não negativo.\n");
        scanf("%d", &numero);
    }
    int resultado = fibonacci_recursivo(numero);
    printf("O %d-ésimo número de Fibonacci é: %d\n", numero, resultado);

    return 0;
}