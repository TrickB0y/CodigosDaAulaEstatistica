#include <stdio.h>

void print_lista_int(int *lista, int tamanho) {
    printf_s("[");
    for(int i = 0; i < tamanho; i++) {
        if(i == tamanho -1) printf_s("%d]\n", lista[i]);
        else {
            printf_s("%d, ", lista[i]);
        }
    }
}

void print_lista_float(float *lista, int tamanho) {
    printf_s("[");
    for(int i = 0; i < tamanho; i++) {
        if(i == tamanho -1) printf_s("%f]\n", lista[i]);
        else {
            printf_s("%f, ", lista[i]);
        }
    }
}

// funções sort
//..
//Função bubble sort int debug
void debug_bubble_sort_int(int *lista, int tamanho) {
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
void bubble_sort_int(int *lista, int tamanho) {
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
void debug_bubble_sort_float(float *lista, int tamanho) {
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
void bubble_sort_float(float *lista, int tamanho) {
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
void debug_sink_sort_int(int *lista, int tamanho) {
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
void sink_sort_int(int *lista, int tamanho) {
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
void debug_sink_sort_float(float *lista, int tamanho) {
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
void sink_sort_float(float *lista, int tamanho) {
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



// funções de calcular amplitute, é a diferença entre o maior valor com o menor valor de uma variavel estatistica
//..
// recebe uma array de uma lista de floats e retorna o resultado float
//
//Função int debug
int debug_calcular_amplitude_total_int(int *lista, int tamanho) {
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
int calcular_amplitude_total_int(int *lista, int tamanho) {
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
float debug_calcular_amplitude_total_float(float *lista, int tamanho) {
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
float calcular_amplitude_total_float(float *lista, int tamanho) {
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



int main(void) {

    float array[] = {15.2,12.1,5.0,4.7};

    print_lista_float(array, (sizeof(array) / sizeof(array[0])));

    bubble_sort_float(array, (sizeof(array) / sizeof(array[0])));
    
    print_lista_float(array, (sizeof(array) / sizeof(array[0])));

    sink_sort_float(array, (sizeof(array) / sizeof(array[0])));
    
    return 0;
}