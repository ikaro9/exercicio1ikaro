#include <stdio.h>
#include <string.h>

void palindroma(char *p) {
    int inicio = 0;
    int fim = strlen(p) - 1;

    while (inicio < fim) {
        if (p[inicio] != p[fim]) {
            printf("Não é palíndroma\n");
            return;
        }
        inicio++;
        fim--;
    }

    printf("É palíndroma\n");
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    palindroma(palavra);
    return 0;
}
