#include <math.h>
#include <stdio.h>
#include "Conversor.h"
#include "Calculadora.h"

unsigned char binaryToDecimal(int array[]) {
    int sum = 0, i;
    for (i = 0; i < 8; i++) {
        if (array[i]) sum += pow(2, i);
    }
    return sum;
}

int addBinary(int a1[], int a2[], int result[]) {
    int i, c = 0;
    for (i = 0; i < 8; i++) {
        result[i] = ((a1[i] ^ a2[i]) ^ c); //a xor b xor c
        c = ((a1[i] & a2[i]) | (a1[i] & c)) | (a2[i] & c); //ab+bc+ca
    }
    result[i] = c;
    return c;
}

void showBinary(int array[], int n) {
    int i;
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);

    }
    printf("\n");
}

void decimalToBinary(int op1, int aOp[]) {
    int result, i = 0;
    do {
        result = op1 % 2;
        op1 /= 2;
        aOp[i] = result;
        i++;
    } while (op1 > 0);
}

int somaBinaria(int aop1[], int aop2[]) {
    return soma(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

int subtracaoBinaria(int aop1[], int aop2[]) {
    return subtracao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

int multiplicacaoBinaria(int aop1[], int aop2[]) {
    return multiplicacao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

float divisaoBinaria(int aop1[], int aop2[]) {
    return divisao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

int somaBinary(int a1[]) {     
    
    int  num1[] = {0,0,0,0,0,0,0,0};
    int  num2[] = {0,0,0,0,0,0,0,0};
    int i = 0, j = 7;    
    
    for(i = 0;i < 3; i++){
        num1[i] = a1[i];
        num2[i] = a1[j];
        j--;
    }
    
    printf("Decimal 1: " + binaryToDecimal(num1));
    printf("Decimal 2: " + binaryToDecimal(num2));   
    
    return somaBinaria( num1, num2);
}



