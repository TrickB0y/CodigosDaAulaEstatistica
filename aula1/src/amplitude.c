#include <stdio.h>

// funções de calcular amplitute, é a diferença entre o maior valor com o menor valor de uma variavel estatistica
//..
// recebe uma array de uma lista de floats e retorna o resultado float
//
//Função int debug
int debug_calcular_amplitude_total_int(int *lista, size_t tamanho) {
    printf_s("size: %d\n\n", tamanho);
    int maior_numero = lista[0];
    int menor_numero = lista[0];
    printf_s("MN: %d\nmN: %d\n\n", maior_numero, menor_numero);
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] > maior_numero) maior_numero = lista[i];
        if(lista[i] < menor_numero) menor_numero = lista[i];
        printf_s("I = %d\nMaiorN = %d\nMenorN = %d\n\n", lista[i], maior_numero, menor_numero);
    }

    int amplitute_total = maior_numero - menor_numero;
    return amplitute_total;
}

//Função int padrão
int calcular_amplitude_total_int(int *lista, size_t tamanho) {
    int maior_numero = lista[0];
    int menor_numero = lista[0];
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] > maior_numero) maior_numero = lista[i];
        if(lista[i] < menor_numero) menor_numero = lista[i];
    }

    int amplitute_total = maior_numero - menor_numero;
    return amplitute_total;
}

//Função float debug
float debug_calcular_amplitude_total_float(float *lista, size_t tamanho) {
    printf_s("size: %d\n", tamanho);
    float maior_numero = lista[0];
    float menor_numero = lista[0];
    printf_s("MN: %f\nmN: %f\n\n", maior_numero, menor_numero);
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] > maior_numero) maior_numero = lista[i];
        if(lista[i] < menor_numero) menor_numero = lista[i];
        printf_s("I = %f\nMaiorN = %f\nMenorN = %f\n", lista[i], maior_numero, menor_numero);
    }

    float amplitute_total = maior_numero - menor_numero;
    return amplitute_total;
}

//Função float padrão
float calcular_amplitude_total_float(float *lista, size_t tamanho) {
    float maior_numero = lista[0];
    float menor_numero = lista[0];
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] > maior_numero) maior_numero = lista[i];
        if(lista[i] < menor_numero) menor_numero = lista[i];
    }

    float amplitute_total = maior_numero - menor_numero;
    return amplitute_total;
}
// Fim de amplitude.