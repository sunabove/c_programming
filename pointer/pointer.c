// File Name : pointer.c
#include <stdio.h>

void main( ) {
    int i = 0 ;
    int * pi = & i;

    printf( "i = %d, addr = %u \n", i, pi ); 
    printf( "i = %d, addr = %p \n", i, pi );
}