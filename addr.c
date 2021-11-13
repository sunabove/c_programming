// File Name : addr.c 
#include <stdio.h>

void main( ) {
    int a = 0 ; 
    unsigned int addr = & a;

    printf( "addr = %u \n", addr ); 
}