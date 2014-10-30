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
    unsigned char binario2[8] = {0,0,0,0,0,0,0,0};        
    unsigned char binario3[8] = {1,1,1,0,0,0,0,0};   
    
    //printf("\nNúmero binário");
    //scanf("%s", &binario); 
    
    binario2[1] = 1;
    binario2[2] = 1;
   
     printf("\nSoma: %d\n", binaryToDecimal(binario2) );    
    
    //printf("\nSoma: %d\n", somaBinary(&binario) );    

    return 0;
}

