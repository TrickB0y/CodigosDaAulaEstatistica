#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct VetorInt
{
    /* data */
    int *lista;
    size_t comprimento;
} VetorInt;

// Função construtura do tipo vetor inteiro.
// ...
// Recebe o tamanho que o vetor que será contruido e retorna o ponteiro aonde ele esta localizado ou retorna NULL em caso de falha.
VetorInt *constructorVetorInt(size_t comprimento) {
    if(comprimento == 0)
    {
        printf_s("Erro: o comprimento não pode ser 0.\n");
        return NULL;
    }

    VetorInt *pointerVetor = (struct VetorInt *) calloc(1, sizeof(*pointerVetor));
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

// Função destrutura do tipo vetor.
// ...
// Recebe o ponteiro do vetor apaga todos os valores para 0 e libera seu espaço ocupado.
void destructorVetorInt(struct VetorInt *vetor) {
    for(int i = 0; i < vetor->comprimento; i++) {
        vetor->lista[i] = 0;
    }
    free(vetor->lista);
    vetor->comprimento = 0;
    free(vetor);
}

// Função para alterar valor de um item do vetor inteiro.
// ...
// saida com codigo -10 = index fora dos limites do tamanho do vetor.
// ...
// Recebe o ponteiro do vetor de inteiros a ser alterado o index a posição que será alterada e o valor inteiro que sera inserido no espaço. encerra o programa com um codigo em caso de erro *olhar possiveis codigos.
void setItemVetorInt(struct VetorInt *vetor, size_t index, int valor) {
    if(index >= vetor->comprimento) {
        printf_s("Erro: index fora dos limites do vetor.\n");
        exit(-10);
    }
    vetor->lista[index] = valor;
}

// Função para retornar o valor de um item do vetor inteiro.
// ...
// saida com codigo -10 = index fora dos limites do tamanho do vetor.
// ...
// Recebe o ponteiro do vetor de inteiros que se deseja retornar o valor e a posição do valor a ser retornada. encerra o programa com um codigo em caso de erro *olhar possiveis codigos.
int getItemVetorInt(struct VetorInt *vetor, size_t index) {
    if(index >= vetor->comprimento) {
        printf_s("Erro: index fora dos limites do vetor.\n");
        exit(-10);
    }
    return vetor->lista[index];
}

// Função para retornar o tamanho do vetor.
// ...
// Recebe o ponteiro do vetor e retorna o seu tamanho.
size_t getComprimentoVetorInt(struct VetorInt *vetor) {
    return vetor->comprimento;
}

// Função que apaga um item do vetor e retorna seu valor.
// ...
// saida com codigo -10 = index fora dos limites do tamanho do vetor.
// saida com codigo -11 = falha ao alocar memoria do vetor.
// ...
// Recebe o ponteiro do vetor e o indexador da posição desejada. encerra o programa com um codigo em caso de erro *olhar possiveis codigos.
int popItemVetorInt(struct VetorInt *vetor, size_t index) {
    if(index >= vetor->comprimento) {
        printf_s("Erro: index fora dos limites do vetor.\n");
        exit(-10);
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
        exit(-11);
    }
    vetor->lista = ponteiroTemporario;
    vetor->comprimento = novoTamanho;
    return popped;
}

// Função que adiciona mais um item ao vetor na sua ultima posição.
// ...
// saida com codigo -11 = falha ao alocar memoria do vetor.
// ...
// Recebe o ponteiro do vetor e o valor do novo item que sera inserido. encerra o programa com um codigo em caso de erro *olhar possiveis codigos.
void appendItemVetorInt(struct VetorInt *vetor, int valor) {
    size_t novoTamanho = vetor->comprimento + 1;
    int *ponteiroTemporario = (int *) realloc(vetor->lista, (novoTamanho * sizeof(int)));
    if(ponteiroTemporario == NULL) {
        free(ponteiroTemporario);
        printf_s("Erro: falha ao alocar memoria de vetor.\n");
        exit(-11);
    }
    vetor->lista = ponteiroTemporario;
    vetor->comprimento = novoTamanho;
    vetor->lista[novoTamanho - 1] = valor;
}

// Função que imprime todos os items de um vetor entre "[]" e separados por ", ".
// ...
// Recebe o ponteiro do vetor e imprime os valores formatados.
void printVetorint(struct VetorInt *vetor) {
    printf_s("[");
    for(int i = 0; i < vetor->comprimento; i++) {
        if(i == vetor->comprimento - 1) printf_s("%d]", vetor->lista[i]);
        else {
            printf_s("%d, ", vetor->lista[i]);
        }
    }
}

// Função construtura do tipo vetor inteiro já populada com dados apartir de uma array já existente.
// ...
// Recebe o ponteiro da array já existente o tamanho da mesma array e retorna o ponteiro aonde ele esta localizado ou retorna NULL em caso de falha.
VetorInt *criarVetorIntDeArray(int *array, size_t comprimento) {
    if(comprimento == 0)
    {
        printf_s("Erro: o comprimento não pode ser 0.\n");
        return NULL;
    }

    VetorInt *pointerVetor = (struct VetorInt *) calloc(1, sizeof(*pointerVetor));
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
    VetorInt *minha_lista = criarVetorIntDeArray(array, (sizeof(array) / sizeof(array[0])));

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