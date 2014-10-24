/*
 * File:   newsimpletest.c
 * Author: Anderson.Bastos
 *
 * Created on 24/10/2014, 13:26:01
 */

#include <stdio.h>
#include <stdlib.h>

#include "Conversor.h"

/*
 * Simple C Test Suite
 */

int somaBinary(int a1[]);

void testBinaryToDecilam(){
    int  a1[] = {1,1,1,0,0,0,0,0};     
    int result = binaryToDecimal(a1);
    if (result != 14) s{
        printf("%%TEST_FAILED%% time=0 testname=testSomaBinary (newsimpletest) message=error message sample\n");
    }
}

void testSomaBinary() {    
    int  a1[] = {1,1,1,0,0,1,1,1};     
    int result = somaBinary(a1);
    if (result != 14) {
        printf("%%TEST_FAILED%% time=0 testname=testSomaBinary (newsimpletest) message=error message sample\n");
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testSomaBinary (newsimpletest)\n");
    testSomaBinary();
    printf("%%TEST_FINISHED%% time=0 testSomaBinary (newsimpletest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
