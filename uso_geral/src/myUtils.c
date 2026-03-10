#include <stdio.h>
#include <stddef.h>

// Imprime todos os intens de uma lista de numeros inteiros dado o ponteiro da lista e seu tamanho
void print_lista_int(int *lista, size_t tamanho) {
    printf_s("[");
    for(int i = 0; i < tamanho; i++) {
        if(i == tamanho - 1) printf_s("%d]", lista[i]);
        else {
            printf_s("%d, ", lista[i]);
        }
    }
}

// Imprime todos os intens de uma lista de numeros de ponto flutuantes dado o ponteiro da lista e seu tamanho
void print_lista_float(float *lista, size_t tamanho) {
    printf_s("[");
    for(int i = 0; i < tamanho; i++) {
        if(i == tamanho - 1) printf_s("%f]", lista[i]);
        else {
            printf_s("%f, ", lista[i]);
        }
    }
}