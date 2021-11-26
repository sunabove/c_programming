// File Name : pointer2.c
#include <stdio.h>

void main( ) {
    int i = 0 ; 
    int * p = & i ; 
    printf("i = %d, addr = %p \n", i, p); 
    * p = 2 ; // i = 2;
    printf("*p = %d, addr = %p \n", *p, p);
    printf("i = %d, addr = %p \n", i, p);
}