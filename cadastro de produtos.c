#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[20];
    int codigo;
    int quantidade;
    double preco;
} Produto;

void limparQuebraDeLinha(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }
}
void adicionar(Produto p[], int *quantidade, int *codigoAtual) {
    if (*quantidade >= MAX) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    getchar();
    printf("Digite o nome: ");
    fgets(p[*quantidade].nome, sizeof(p[*quantidade].nome), stdin);
    limparQuebraDeLinha(p[*quantidade].nome);
    p[*quantidade].codigo = (*codigoAtual)++;
    printf("Digite a quantidade: ");
    scanf("%d", &p[*quantidade].quantidade);
    printf("Digite o preço: ");
    scanf("%lf", &p[*quantidade].preco);

    (*quantidade)++;
}
void buscar(Produto p[], int q){
int codigo;
printf("Digite o código do produto a ser buscado: ");
scanf("%d", &codigo);
for (int i = 0; i < q; i++) {
    if (codigo == p[i].codigo) {
        printf("Nome: %s\n", p[i].nome);
            printf("Código: %d\n", p[i].codigo);
            printf("Quantidade: %d\n", p[i].quantidade);
            printf("Preço: %.2lf\n", p[i].preco);
            return;       
  }
 }
 printf("Produto não encontrado\n");
}

void listar(Produto p[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Produto %d\n", i + 1);
        printf("Nome: %s\n", p[i].nome);
        printf("Código: %d\n", p[i].codigo);
        printf("Quantidade: %d\n", p[i].quantidade);
        printf("Preço: %.2lf\n", p[i].preco);
    }
}

int main() {
    Produto produtos[MAX];
    int quantidade = 0;
    int codigo = 1;
    int opcao;

    do {
        printf("1 - Adicionar Produto\n2 - Listar Produtos\n3 - Buscar Produtos\n0 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                adicionar(produtos, &quantidade, &codigo);
                break;
            case 2:
                listar(produtos, quantidade);
                break;
            case 3: 
               buscar(produtos,quantidade);    
            case 0:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
