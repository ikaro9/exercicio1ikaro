#include <stdio.h>
#include<string.h>
#define MAX 100

typedef struct{
    char nome[20];
    int numero;
}Contato;

void limparQuebraDeLinha(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }
}

void adicionar(Contato c[], int *quantidade) {
    if (*quantidade >= MAX) {
        printf("Limite de contatos atingido!\n");
        return;
    }
    getchar();
    printf("Digite o nome: ");
    fgets(c[*quantidade].nome, sizeof(c[*quantidade].nome), stdin);
     limparQuebraDeLinha(c[*quantidade].nome);
    
    printf("Digite o numero: ");
    scanf("%d", &c[*quantidade].numero);
  
    (*quantidade)++;
}

void listar(Contato c[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Contato %d\n", i + 1);
        printf("Nome: %s\n", c[i].nome);
        printf("Número: %d\n", c[i].numero);
    }
}

void buscar(Contato c[], int q){
    char nome[20];
    getchar();
    printf("Digite o nome do contato a ser buscado: ");
    fgets(nome,sizeof(nome),stdin);
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
    }
    for (int i = 0; i < q; i++) {
            if (strcmp(nome, c[i].nome) == 0) {
                printf("Nome: %s\n", c[i].nome);
                printf("Número: %d\n", c[i].numero);
                return;
            }
        }
     printf("Contato não encontrado\n");
    }

    int main() {
        Contato contatos[MAX];
        int quantidade = 0;
        int opcao;
    
        do {
            printf("1 - Adicionar contato\n2 - Listar contatos\n3 - Buscar contatos\n0 - Sair\n");
            scanf("%d", &opcao);
            switch(opcao) {
                case 1:
                    adicionar(contatos, &quantidade);
                    break;
                case 2:
                    listar(contatos, quantidade);
                    break;
                case 3: 
                   buscar(contatos,quantidade);    
                   break;
                case 0:
                    break;
                default:
                    printf("Opção inválida.\n");
            }
        } while (opcao != 0);
    
        return 0;
    }
    