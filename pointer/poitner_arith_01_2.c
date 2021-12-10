// File Name : pointer_arith_01.c
#include <stdio.h>   

void main() {    
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ; 
    
    printf( "int size = %zu bytes \n", sizeof( int ) );
    printf( "a size = %zu bytes \n", sizeof( a ) );

    int * p = a ; 
    for( int i = 0; i < 10 ; i ++ ) {
        printf( "a[%d] = %d, %p \n", i, *p, p );
        p += 1 ;
    }
} 
