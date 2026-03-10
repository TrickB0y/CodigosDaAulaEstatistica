#include <stdio.h>
#include <stddef.h>

#include "../include/amplitude.h"
#include "../../uso_geral/include/sorts.h"
#include "../../uso_geral/include/myUtils.h"

int main(void) {

    printf_s("\n\nExercicos de Estatistica Aula 1\n\n");

    // Exercicio 1
    int lista1[] = {
        82, 78, 54, 65, 65,
        78, 65, 78, 82, 82,
        65, 78, 82, 65, 78,
        54, 65, 78, 82, 78
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
    printf_s("Amplitude Total: %d\n\n", calcular_amplitude_total_int(lista1, tamanho_lista1));

    // Exercicio 2
    int lista2[] = {
        9, 8, 6, 7, 10,
        6, 9, 10, 8, 8,
        7, 6, 9, 10, 8,
        8, 9, 10, 6, 7
    };
    size_t tamanho_lista2 = (sizeof(lista2) / sizeof(lista2[0]));
    printf_s("2)\n");
    printf_s("Dados: \n");
    print_lista_int(lista2, tamanho_lista2);
    printf_s("\n\na)\n");
    bubble_sort_int(lista2, tamanho_lista2);
    printf_s("ROL: \n");
    print_lista_int(lista2, tamanho_lista2);
    printf_s("\n\nb)\n");
    printf_s("Amplitude Total: %d\n\n", calcular_amplitude_total_int(lista2, tamanho_lista2));

    // Exercicio 3
    int lista3[] = {
        82, 78, 54, 65, 65,
        78, 65, 78, 82, 82,
        65, 78, 82, 65, 78,
        54, 65, 78, 82, 78
    };
    size_t tamanho_lista3 = (sizeof(lista3) / sizeof(lista3[0]));
    printf_s("3)\n");
    printf_s("Dados: \n");
    print_lista_int(lista3, tamanho_lista3);
    printf_s("\n\na)\n");
    bubble_sort_int(lista3, tamanho_lista3);
    printf_s("ROL: \n");
    print_lista_int(lista3, tamanho_lista3);
    printf_s("\n\nb)\n");
    printf_s("Amplitude Total: %d\n\n", calcular_amplitude_total_int(lista3, tamanho_lista3));

    // Exercicio 4
    int lista4[] = {
        25, 32, 27, 36, 45,
        37, 44, 26, 42, 28,
        27, 29, 32, 34, 30,
        45, 25, 40, 29, 43
    };
    size_t tamanho_lista4 = (sizeof(lista4) / sizeof(lista4[0]));
    printf_s("4)\n");
    printf_s("Dados: \n");
    print_lista_int(lista4, tamanho_lista4);
    printf_s("\n\na)\n");
    bubble_sort_int(lista4, tamanho_lista4);
    printf_s("ROL: \n");
    print_lista_int(lista4, tamanho_lista4);
    printf_s("\n\nb)\n");
    printf_s("Amplitude Total: %d\n\n", calcular_amplitude_total_int(lista4, tamanho_lista4));

    // Exercicio 5
    int lista5[] = {
        30, 35, 35, 39, 41, 41, 42, 45, 47, 48,
        51, 52, 53, 54, 55, 55, 57, 59, 60, 60,
        62, 64, 65, 65, 65, 66, 66, 66, 67, 68,
        69, 71, 73, 73, 74, 74, 76, 77, 77, 78,
        80, 81, 84, 85, 85, 88, 89, 91, 94, 97
    };
    size_t tamanho_lista5 = (sizeof(lista5) / sizeof(lista5[0]));
    printf_s("5)\n");
    printf_s("Dados: \n");
    print_lista_int(lista5, tamanho_lista5);
    printf_s("\n\na)\n");
    bubble_sort_int(lista5, tamanho_lista5);
    printf_s("ROL: \n");
    print_lista_int(lista5, tamanho_lista5);
    printf_s("\n\nb)\n");
    printf_s("Amplitude Total: %d\n\n", calcular_amplitude_total_int(lista5, tamanho_lista5));

    // Exercicio 6
    int lista6[] = {
        172, 180, 174, 182, 176, 167, 160, 162, 162, 164, 167, 174, 169, 155, 155,
        180, 176, 171, 179, 167, 173, 180, 172, 163, 168, 165, 183, 189, 178, 164,
        170, 168, 169, 180, 174, 175, 191, 172, 176, 172, 174, 173, 165, 165, 163,
        150, 166, 178, 178, 168, 181, 184, 166, 177, 167, 166, 173, 160, 180, 186,
        156, 163, 169, 155, 172, 164, 154, 165, 181, 156, 180, 168, 185, 169, 179
    };
    size_t tamanho_lista6 = (sizeof(lista6) / sizeof(lista6[0]));
    printf_s("6)\n");
    printf_s("Dados: \n");
    print_lista_int(lista6, tamanho_lista6);
    printf_s("\n\na)\n");
    bubble_sort_int(lista6, tamanho_lista6);
    printf_s("ROL: \n");
    print_lista_int(lista6, tamanho_lista6);
    printf_s("\n\nb)\n");
    printf_s("Amplitude Total: %d\n\n", calcular_amplitude_total_int(lista6, tamanho_lista6));

    return 0;
}