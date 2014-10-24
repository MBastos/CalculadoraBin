/* 
 * File:   SomaBinariaTest.c
 * Author: Anderson.Bastos
 *
 * Created on 24 de Outubro de 2014, 16:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Simple C Test Suite
 */

void testSomaBinaria() {
    printf("---------------------------------------------------------------------\n");
    printf("Testando soma Binária\n");
    printf("---------------------------------------------------------------------\n");
    int  a1[] = {1,1,1,0,0,1,1,1};     
    int result = somaBinary(a1);
    if (result != 14) {
        printf("%%TEST_FAILED%% time=0 testname=testSomaBinary (newsimpletest) message=error message sample\n");
    }    
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% SomaBinariaTest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%% test1 (SomaBinariaTest)\n");
    testSomaBinaria();
    printf("%%TEST_FINISHED%% time=0 test1 (SomaBinariaTest) \n");    

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
