/* 
 * File:   Conversor.h
 * Author: Anderson.Bastos
 *
 * Created on 23 de Outubro de 2014, 07:15
 */

#ifndef CONVERSOR_H
#define	CONVERSOR_H

#ifdef	__cplusplus
extern "C" {
#endif

unsigned char binaryToDecimal(int array[]);
int addBinary(int a1[], int a2[], int result[]);
void showBinary(int array[], int n);
void decimalToBinary(int op1, int aOp[]);
int somaBinaria(int aop1[], int aop2[]);
int subtracaoBinaria(int aop1[], int aop2[]); 
int multiplicacaoBinaria(int aop1[], int aop2[]);
float divisaoBinaria(int aop1[], int aop2[]);


#ifdef	__cplusplus
}
#endif

#endif	/* CONVERSOR_H */

