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
    No *novo = malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return inicio;
    }

    novo->valor = valor;
    novo->proximo = inicio;

    return novo;
}

void imprimirLista(No *inicio)
{
    No *atual = inicio;

    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

No *buscar(No *inicio, int valor)
{
    No *atual = inicio;

    while (atual != NULL)
    {
        if (atual->valor == valor)
            return atual;

        atual = atual->proximo;
    }

    return NULL;
}

int listaVazia(No *inicio)
{
    return inicio == NULL;
}

int main()
{
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
            if (listaVazia(inicio)) {
                printf("Nao ha valor para imprimir, porque a lista esta vazia.\n");
            } else {
                imprimirLista(inicio);
            }
            break;

        case 3:
            if (listaVazia(inicio)) {
                printf("Nao ha valor para procurar, porque a lista esta vazia.\n");
            } else {
                printf("Valor para buscar: ");
                scanf("%d", &valor);

                No *resultado = buscar(inicio, valor);

                if (resultado != NULL)
                    printf("Valor encontrado: %d\n", resultado->valor);
                else
                    printf("Valor nao encontrado.\n");
            }
            break;

        case 4:
            if (listaVazia(inicio))
                printf("Nao ha primeiro elemento, porque a lista está vazia.\n");
            else
                printf("Primeiro elemento: %d\n", inicio->valor);

            break;

        case 0:
            printf("Encerrando...\n");
            break;

        default:
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}