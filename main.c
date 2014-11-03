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
    
    /* This hex number is the same as binary 10000000 */
    short MASK = 0xE7;

    
    unsigned char binario[8]  = {0,0,0,0,0,0,0,0};        
    unsigned char binario2[8] = {0,0,0,0,0,0,0,0};        
    unsigned char binario3[8] = {1,1,1,0,0,0,0,0};   
    unsigned char mask[8] = {1,1,1,0,0,1,1,1};
    
    
    //printf("\nNúmero binário");
    //scanf("%s", &binario); 
    
    binario2[1] = 1;
    binario2[2] = 1;
    
    printf("Mascára: %s", MASK);
   
     //printf("\nSoma: %d\n", binaryToDecimal(binario2) );    
    
    //printf("\nSoma: %d\n", somaBinary(&binario) );    

    return 0;
}

