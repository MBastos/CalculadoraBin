#include <math.h>
#include <stdio.h>
#include "Conversor.h"
#include "Calculadora.h"

int binaryToDecimal(unsigned char array[]) {
    int sum = 0, i;
    for (i = 0; i < 8; i++) {
        if (array[i]) 
            sum += pow(2, i);
        
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

void decimalToBinary(unsigned char op1, unsigned char *aOp) {
    unsigned char result, i = 0;
    do {
        result = op1 % 2;
        op1 /= 2;
        aOp[i] = result;
        i++;
    } while (op1 > 0);
}

int somaBinaria(unsigned char *aop1, unsigned char *aop2) {
    printf("\nBinatyToDecimal: %d", binaryToDecimal(aop1) );
    printf("\nBinatyToDecimal: %d", binaryToDecimal(aop2) );
    return soma(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

unsigned char subtracaoBinaria(unsigned char *aop1, unsigned char *aop2) {
    return subtracao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

unsigned char multiplicacaoBinaria(unsigned char *aop1, unsigned char *aop2) {
    return multiplicacao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

float divisaoBinaria(unsigned char *aop1, unsigned char *aop2) {
    return divisao(binaryToDecimal(aop1), binaryToDecimal(aop2));
}

int somaBinary(unsigned char a1[]) {     
    
    printf("\n\nBinário: %s", a1);
    
    unsigned char num1[] = {0,0,0,0,0,0,0,0};
    unsigned char num2[] = {0,0,0,0,0,0,0,0};   
    
    int i = 0, j = 5;    
    
    for(i = 0;i < 3; i++){
        num1[i] = a1[i];
        num2[i] = a1[j];
        j++;
    }   
    
    printf("\n\nBinário: %s", a1);
    
    if( a1[3] == '0' && a1[4] == '0' ){
        printf("\nSoma");
        return somaBinaria( num1, num2 );
    } else 
        if( a1[3] == '1' && a1[4] == '1' ){
            printf("\nSubtracao");
            return subtracaoBinaria( num1, num2 );
        } else
            if( a1[3] == '1' && a1[4] == '0' ){
                printf("\nMultiplicação");
                return multiplicacaoBinaria( num1, num2 );
            } else{                
                   printf("\nDivisão");
                   return divisaoBinaria( num1, num2 );
                }               
}




