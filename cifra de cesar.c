#include <stdio.h>

void cifraCesar(char *texto, int deslocamento) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = (texto[i] - 'a' + deslocamento) % 26 + 'a';
        }
    }
}

int main() {
    char mensagem[] = "Ol�, tudo bem, prazer em conhecer voc�";
    int deslocamento = 3;

    cifraCesar(mensagem, deslocamento);
    printf("Mensagem Cifrada: %s\n", mensagem);
    return 0;
}
