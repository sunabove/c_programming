// File Name : pointer_arith_06.c
#include <stdio.h>
#include <stdint.h>

void main(){    
    int8_t a[10] = { 65, 66, 67, 68, 69,  70, 71, 72, 73, 74 } ; 
    int8_t * p = a ;
    
    for( int i = 0; i < 10 ; i ++ ) {
        printf( "p address = %p, %u, %c \n", p, p, *p );
        p ++ ;
    }
} 
