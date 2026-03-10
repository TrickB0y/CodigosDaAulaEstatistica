#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct VetorInt
{
    /* data */
    int *lista;
    size_t comprimento;
};

struct VetorInt *constructorVetorInt(size_t comprimento) {
    if(comprimento == 0)
    {
        printf_s("Erro: o comprimento não pode ser 0.\n");
        return NULL;
    }

    struct VetorInt *pointerVetor = (struct VetorInt *) calloc(1, sizeof(*pointerVetor));
    if(pointerVetor == NULL) {
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        free(pointerVetor);
        return NULL;
    }

    pointerVetor->lista = (int *) calloc(comprimento, sizeof(int));
    if(pointerVetor->lista == NULL) {
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        free(pointerVetor->lista);
        return NULL;
    }
    pointerVetor->comprimento = comprimento;

    return pointerVetor;
}

void destructorVetorInt(struct VetorInt *vetor) {
    for(int i = 0; i < vetor->comprimento; i++) {
        vetor->lista[i] = 0;
    }
    free(vetor->lista);
    vetor->comprimento = 0;
    free(vetor);
}

void setItemVetorInt(struct VetorInt *vetor, size_t index, int valor) {
    if(index >= vetor->comprimento) {
        printf_s("Erro: index fora dos limites do vetor.\n");
        return;
    }
    vetor->lista[index] = valor;
}

int getItemVetorInt(struct VetorInt *vetor, size_t index) {
    if(index >= vetor->comprimento) {
        printf_s("Erro: index fora dos limites do vetor.\n");
        return 0;
    }
    return vetor->lista[index];
}

size_t getComprimentoVetorInt(struct VetorInt *vetor) {
    return vetor->comprimento;
}

int popItemVetorInt(struct VetorInt *vetor, size_t index) {
    if(index >= vetor->comprimento) {
        printf_s("Erro: index fora dos limites do vetor.\n");
        return 0;
    }
    int popped = vetor->lista[index];
    for(int i = index; i < vetor->comprimento - 1; i++) {
        vetor->lista[i] = vetor->lista[i + 1];
    }
    size_t novoTamanho = vetor->comprimento - 1;
    int *ponteiroTemporario = (int *) realloc(vetor->lista, (novoTamanho * sizeof(int)));
    if(ponteiroTemporario == NULL) {
        free(ponteiroTemporario);
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        return 0;
    }
    vetor->lista = ponteiroTemporario;
    vetor->comprimento = novoTamanho;
    return popped;
}

void appendItemVetorInt(struct VetorInt *vetor, int valor) {
    size_t novoTamanho = vetor->comprimento + 1;
    int *ponteiroTemporario = (int *) realloc(vetor->lista, (novoTamanho * sizeof(int)));
    if(ponteiroTemporario == NULL) {
        free(ponteiroTemporario);
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        return;
    }
    vetor->lista = ponteiroTemporario;
    vetor->comprimento = novoTamanho;
    vetor->lista[novoTamanho - 1] = valor;
}

void printVetorint(struct VetorInt *vetor) {
    printf_s("[");
    for(int i = 0; i < vetor->comprimento; i++) {
        if(i == vetor->comprimento - 1) printf_s("%d]", vetor->lista[i]);
        else {
            printf_s("%d, ", vetor->lista[i]);
        }
    }
}

struct VetorInt *criarVetorIntDeArray(int *array, size_t comprimento) {
    if(comprimento == 0)
    {
        printf_s("Erro: o comprimento não pode ser 0.\n");
        return NULL;
    }

    struct VetorInt *pointerVetor = (struct VetorInt *) calloc(1, sizeof(*pointerVetor));
    if(pointerVetor == NULL) {
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        free(pointerVetor);
        return NULL;
    }

    pointerVetor->lista = (int *) calloc(comprimento, sizeof(int));
    if(pointerVetor->lista == NULL) {
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        free(pointerVetor->lista);
        return NULL;
    }
    pointerVetor->comprimento = comprimento;

    for(int i = 0; i < comprimento; i++) {
        pointerVetor->lista[i] = array[i];
    }

    return pointerVetor;
}

int main(void) {
    int array[] = {
        2, 4, 5, 6, 7, 5, 6
    };
    struct VetorInt *minha_lista = criarVetorIntDeArray(array, (sizeof(array) / sizeof(array[0])));

    printf_s("%zd\n", getComprimentoVetorInt(minha_lista));
    printVetorint(minha_lista);
    printf_s("\n");
    
    printf_s("popped: %d\n", popItemVetorInt(minha_lista, 4));
    
    printf_s("%zd\n", getComprimentoVetorInt(minha_lista));
    printVetorint(minha_lista);
    printf_s("\n");

    appendItemVetorInt(minha_lista, 9);

    printf_s("%zd\n", getComprimentoVetorInt(minha_lista));
    printVetorint(minha_lista);
    printf_s("\n");

    destructorVetorInt(minha_lista);
    
    return 0;
}