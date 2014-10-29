#include <math.h>
#include <stdio.h>
#include "Conversor.h"
#include "Calculadora.h"

int binaryToDecimal(unsigned char array[]) {
    int sum = 0, i;
    for (i = 0; i < 8; i++) {
        if (array[i]) sum += pow(2, i);
    }
    return sum;
}

int addBinary(unsigned char a1[], unsigned char a2[], unsigned char result[]) {
    int i, c = 0;
    for (i = 0; i < 8; i++) {
        result[i] = ((a1[i] ^ a2[i]) ^ c); //a xor b xor c
        c = ((a1[i] & a2[i]) | (a1[i] & c)) | (a2[i] & c); //ab+bc+ca
    }
    result[i] = c;
    return c;
}

void decimalToBinary(unsigned char op1, unsigned char aOp[]) {
    unsigned char result, i = 0;
    do {
        result = op1 % 2;
        op1 /= 2;
        aOp[i] = result;
        i++;
    } while (op1 > 0);
}

int somaBinaria(unsigned char aop1[], unsigned char aop2[]) {
    return soma(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

unsigned char subtracaoBinaria(unsigned char aop1[], unsigned char aop2[]) {
    return subtracao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

unsigned char multiplicacaoBinaria(unsigned char aop1[], unsigned char aop2[]) {
    return multiplicacao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

float divisaoBinaria(unsigned char aop1[], unsigned char aop2[]) {
    return divisao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

int somaBinary(unsigned char a1[]) {     
    
    unsigned char num1[3];
    unsigned char num2[3];
    int i = 0, j = 7;    
    
    for(i = 0;i < 3; i++){
        num1[i] = a1[i];        
    }
    
    num2[0] = a1[5];
    num2[1] = a1[6];
    num2[2] = a1[7];
    
    printf("Número 1: %s\n", num1);
    printf("Número 2: %s\n\n", num2);    
    
    return somaBinaria( num1, num2);
}




