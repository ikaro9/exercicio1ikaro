#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[20];
    int codigo;
    int quantidade;
    double preco;
} Produto;

void adicionar(Produto p[], int *qtd, int *codigoAtual) {
    if (*qtd >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    getchar(); // limpar o \n
    printf("Digite o nome: ");
    fgets(p[*qtd].nome, sizeof(p[*qtd].nome), stdin);

    // Remover \n do nome, se houver
    size_t len = strlen(p[*qtd].nome);
    if (len > 0 && p[*qtd].nome[len - 1] == '\n') {
        p[*qtd].nome[len - 1] = '\0';
    }

    p[*qtd].codigo = (*codigoAtual)++;
    printf("Digite a quantidade: ");
    scanf("%d", &p[*qtd].quantidade);
    printf("Digite o preço: ");
    scanf("%lf", &p[*qtd].preco);

    (*qtd)++;
}

void listar(Produto p[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Nome: %s\n", p[i].nome);
        printf("Código: %d\n", p[i].codigo);
        printf("Quantidade: %d\n", p[i].quantidade);
        printf("Preço: %.2lf\n", p[i].preco);
    }
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int quantidade = 0;
    int codigo = 1;
    int opcao;

    do {
        printf("\n1 - Adicionar Produto\n2 - Listar Produtos\n0 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                adicionar(produtos, &quantidade, &codigo);
                break;
            case 2:
                listar(produtos, quantidade);
                break;
            case 0:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
