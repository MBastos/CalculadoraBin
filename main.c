/* 
 * File:   main.c
 * Author: Anderson.Bastos
 *
 * Created on 23 de Outubro de 2014, 06:53
 */

#include <stdlib.h>
#include <stdio.h>

#include "Conversor.h"

int main() {    
    
    unsigned char binario[8]  = {0,0,0,0,0,0,0,0};        
    unsigned char binario2[8] = {0,1,1,0,0,0,0,0};        
    unsigned char binario3[8] = {1,1,1,0,0,0,0,0};   
    
             
    scanf("%s", &binario);   
        
    printf("Binary to Decimal: %d \n", somaBinaria(binario2,binario3) );
    
    printf("Binary to Decimal: %d \n", binaryToDecimal(binario2) );
    
    printf("Soma: %d\n", somaBinary(binario) );             

    return 0;
}

