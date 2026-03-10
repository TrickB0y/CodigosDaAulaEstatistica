#include <stdio.h>
#include <stddef.h>

#include "../include/myUtils.h"

// funções sort
//..
//Função bubble sort int debug
void debug_bubble_sort_int(int *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf_s("I = %d\n", i);
        for(int j = 0; j < tamanho; j++) {
            printf_s("    J = %d\n", j);
            if((j + 1) < tamanho ) {
                printf_s("        Antes: ");
                print_lista_int(lista, tamanho);
                if(lista[j] > lista[j + 1]) {
                    int holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                    printf_s("        Depois: ");
                    print_lista_int(lista, tamanho);
                }
                else {
                    printf_s("        Depois: ");
                    print_lista_int(lista, tamanho);
                }
            }
        }
    }
}

//Função bubble sort int
void bubble_sort_int(int *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) {
            if((j + 1) < tamanho ) {
                if(lista[j] > lista[j + 1]) {
                    int holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                }
            }
        }
    }
}

//Função bubble sort float debug
void debug_bubble_sort_float(float *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf_s("I = %d\n", i);
        for(int j = 0; j < tamanho; j++) {
            printf_s("    J = %d\n", j);
            if((j + 1) < tamanho ) {
                printf_s("        Antes: ");
                print_lista_float(lista, tamanho);
                if(lista[j] > lista[j + 1]) {
                    float holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                    printf_s("        Depois: ");
                    print_lista_float(lista, tamanho);
                }
                else {
                    printf_s("        Depois: ");
                    print_lista_float(lista, tamanho);
                }
            }
        }
    }
}

//Função bubble sort float
void bubble_sort_float(float *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) {
            if((j + 1) < tamanho ) {
                if(lista[j] > lista[j + 1]) {
                    float holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                }
            }
        }
    }
}

//Função sink sort int debug
void debug_sink_sort_int(int *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf_s("I = %d\n", i);
        for(int j = 0; j < tamanho; j++) {
            printf_s("    J = %d\n", j);
            if((j + 1) < tamanho ) {
                printf_s("        Antes: ");
                print_lista_int(lista, tamanho);
                if(lista[j] < lista[j + 1]) {
                    int holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                    printf_s("        Depois: ");
                    print_lista_int(lista, tamanho);
                }
                else {
                    printf_s("        Depois: ");
                    print_lista_int(lista, tamanho);
                }
            }
        }
    }
}

//Função sink sort int
void sink_sort_int(int *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) {
            if((j + 1) < tamanho ) {
                if(lista[j] < lista[j + 1]) {
                    int holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                }
            }
        }
    }
}

//Função sink sort float debug
void debug_sink_sort_float(float *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf_s("I = %d\n", i);
        for(int j = 0; j < tamanho; j++) {
            printf_s("    J = %d\n", j);
            if((j + 1) < tamanho ) {
                printf_s("        Antes: ");
                print_lista_float(lista, tamanho);
                if(lista[j] < lista[j + 1]) {
                    float holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                    printf_s("        Depois: ");
                    print_lista_float(lista, tamanho);
                }
                else {
                    printf_s("        Depois: ");
                    print_lista_float(lista, tamanho);
                }
            }
        }
    }
}

//Função sink sort float
void sink_sort_float(float *lista, size_t tamanho) {
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) {
            if((j + 1) < tamanho ) {
                if(lista[j] > lista[j + 1]) {
                    float holder = lista[j + 1];
                    lista[j + 1] = lista[j];
                    lista[j] = holder;
                }
            }
        }
    }
}
// Fim de funções sort