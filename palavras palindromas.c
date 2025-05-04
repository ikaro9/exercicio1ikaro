#include <stdio.h>
#include <string.h>

void palindroma(char *p) {
    int inicio = 0;
    int fim = strlen(p) - 1;

    while (inicio < fim) {
        if (p[inicio] != p[fim]) {
            printf("N�o � pal�ndroma\n");
            return;
        }
        inicio++;
        fim--;
    }

    printf("� pal�ndroma\n");
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    palindroma(palavra);
    return 0;
}
