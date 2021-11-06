// File Name : fibo1.c
#include <stdio.h>

void main( ) {
    unsigned int f1 = 0 ;
    unsigned int f2 = 1 ;
    
    unsigned int f3 = 1 ;
    
    for( int i = 1 ; f2 >= f1 ; i ++ ) {
        printf( "f[%d] = %u \n", i, f3 );
        
        f3 = f1 + f2 ; 
        
        f1 = f2 ;
        f2 = f3 ;
    } 
}