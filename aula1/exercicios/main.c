#include <stdio.h>
#include <stddef.h>

#include "../include/amplitude.h"
#include "../../uso_geral/include/sorts.h"
#include "../../uso_geral/include/myUtils.h"

int main(void) {

    printf_s("\n\nExercicos de Estatistica Aula 1\n\n");

    // Exercicio 1
    int lista1[] = {
        0, 0, 4, 2, 0, 1, 0, 2, 0, 4,
        1, 0, 0, 3, 2, 0, 1, 0, 0, 0,
        2, 0, 0, 1, 0, 0, 3, 2, 1, 7,
        0, 1, 0, 0, 2, 0, 0, 3, 2, 1
        
    };
    size_t tamanho_lista1 = (sizeof(lista1) / sizeof(lista1[0]));
    printf_s("1)\n");
    printf_s("Dados: \n");
    print_lista_int(lista1, tamanho_lista1);
    printf_s("\n\na)\n");
    bubble_sort_int(lista1, tamanho_lista1);
    printf_s("ROL: \n");
    print_lista_int(lista1, tamanho_lista1);
    printf_s("\n\nb)\n");
    printf_s("Amplitude Total: %d\n\n", debug_calcular_amplitude_total_int(lista1, tamanho_lista1));

    return 0;
}