// File Name : fibo2.c
#include <stdio.h>

void main( ) {
    unsigned long f1 = 0 ;
    unsigned long f2 = 1 ;    
    unsigned long f3 = 1 ;
    
    for( int i = 1 ; f2 >= f1 ; i ++ ) {
        printf( "f[%d] = %lu \n", i, f3 );
        
        f3 = f1 + f2 ;        
        f1 = f2 ;
        f2 = f3 ;
    }
}

