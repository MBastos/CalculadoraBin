/* 
 * File:   main.c
 * Author: Anderson.Bastos
 *
 * Created on 23 de Outubro de 2014, 06:53
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int valor1 = 4;
    int valor2 = 5;
    unsigned char binario[8] = {1,1,1,0,1,1,1,1};

    printf("Valor 1: %i\n", valor1);
    itoa(valor1, binario, 2);
    printf("Valor 1 em binário: %s\n", binario);

    printf("Valor 2: %i\n", valor2);
    itoa(valor2, binario, 2);
    printf("Valor 2 em Binário: %s\n", binario);

    itoa(valor1 & valor2, binario, 2);
    printf("AND = %s\n", binario);

    itoa(valor1 | valor2, binario, 2);
    printf("OR = %s\n", binario);

    return 0;
}
