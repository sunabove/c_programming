// File Name : pointer_arith_03.c
#include <stdio.h>   

void main(){    
    long a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ; 

    long * p = a ; 
    for( int i = 0; i < 10 ; i ++ ) {
        printf( "p address = %p, %u \n", p, p );
        p ++ ;
    }
} 
