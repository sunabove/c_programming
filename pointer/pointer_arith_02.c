// File Name : pointer_arith_02.c
#include <stdio.h>   

void main(){    
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ; 

    int * p = a ; 
    for( int i = 0; i < 10 ; i ++ ) {
        printf( "p address = %p, %u \n", p, p );
        p += 1 ; // p += 1; // p  = p + 1; 
    }
} 
