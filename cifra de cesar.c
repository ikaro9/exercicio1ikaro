#include <stdio.h>

void cifraCesar(char *texto, int deslocamento) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = (texto[i] - 'a' + deslocamento) % 26 + 'a';
        }
    }
}

int main() {
    char mensagem[] = "Olá, tudo bem, prazer em conhecer você";
    int deslocamento = 3;

    cifraCesar(mensagem, deslocamento);
    printf("Mensagem Cifrada: %s\n", mensagem);
    return 0;
}
