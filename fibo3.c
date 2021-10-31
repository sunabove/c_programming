// File Name : fibo.c
#include <stdio.h>

int main( ) {
    unsigned long f1 = 0 ;
    unsigned long f2 = 1 ;    
    unsigned long f3 = 1 ;
    
    for( int i = 1 ; f3 >= f1 ; i ++ ) {
        printf( "f[%d] = %ld \n", i, f3 );
        
        f3 = f1 + f2 ; 
        
        f1 = f2 ;
        f2 = f3 ;
    }
    
    printf( "%ld \n", f3 );

    return 0 ;
}

