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

int binaryToDecimal(unsigned char *array);
void showBinary(unsigned char *array, unsigned char n);
void decimalToBinary(unsigned char op1, unsigned char *aOp);
int somaBinaria(unsigned char *aop1, unsigned char *aop2);
unsigned char subtracaoBinaria(unsigned char *aop1, unsigned char *aop2); 
unsigned char multiplicacaoBinaria(unsigned char *aop1, unsigned char *aop2);
float divisaoBinaria(unsigned char *aop1, unsigned char *aop2);


#ifdef	__cplusplus
}
#endif

#endif	/* CONVERSOR_H */

