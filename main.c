/* 
 * File:   main.c
 * Author: Anderson.Bastos
 *
 * Created on 23 de Outubro de 2014, 06:53
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Conversor.h" 
 
int main(){  
    
    int  aOp1[] = {1,1,1,0,0,0,0,0};    
    int retorno = 0;    
    int i;
    
    i = aOp1[0];
    printf("Posição 0: %d \n", i);    
    retorno =  binaryToDecimal(aOp1);    
    printf("Retorno: %d\n\n", retorno);        
    
    return 0;
 }

