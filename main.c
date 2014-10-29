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
    
    unsigned char binario[] =  {1,1,1,0,1,1,1,1};        
    unsigned char binario2[] = {1,1,1,0,0,0,0,0};        
    unsigned char binario3[] = {1,1,1,0,0,0,0,0};   
    
    printf("Binário: %s\n\n", binario);            
    scanf("%s", &binario);
    
    printf("Número Lido: %s\n\n", binario);            
    
    printf("Soma: %d\n", somaBinary(binario) );    
    //printf("Binary To Decimal: %d\n", binaryToDecimal(binario2) );    
    //printf("Binary To Decimal: %d\n", somaBinaria(binario2,binario3) );    

    return 0;
}

