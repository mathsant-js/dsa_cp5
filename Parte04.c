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

int main(void)
{

    No *inicio = NULL;

    inicio = inserirInicio(inicio, 30);
    imprimirLista(inicio);

    inicio = inserirInicio(inicio, 20);
    imprimirLista(inicio);

    inicio = inserirInicio(inicio, 10);
    imprimirLista(inicio);

    return 0;
}