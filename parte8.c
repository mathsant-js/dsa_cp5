#include <stdio.h>
#include <stdlib.h>

typedef struct No No;

struct No
{
    int valor;
    No *proximo;
};

No *inserirInicio(No *inicio, int valor)
{
    No* novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->proximo = inicio;
    inicio = novo;
}

void imprimirLista(No *inicio)
{
    No* atual = inicio;

    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

int buscar(No *inicio, int valor)
{
    No* atual = inicio;

    while (atual != NULL)
    {
        if (atual->valor == valor)
            return atual;
        atual = atual->proximo;
    }

    return NULL;
}

int listaVazia(No *inicio) {
    
}

int main() {
    No *inicio = NULL;
    int opcao, valor;

    do
    {
        printf("\n===== LISTA ENCADEADA =====\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Mostrar lista\n");
        printf("3 - Buscar valor\n");
        printf("4 - Mostrar primeiro elemento\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Valor: ");
            scanf("%d", &valor);

            inicio = inserirInicio(inicio, valor);
            break;
        case 2:
            imprimirLista(inicio);
            break;
        case 3:
            printf("Valor para buscar: ");
            scanf("%d", &valor);

            buscar(inicio, valor);
            break;
        case 4:
            // verificar se a lista está vazia e mostrar inicio->valor
            break;
        }
    } while (opcao != 0);
}