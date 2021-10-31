// File Name : fibo.c
#include <stdio.h>

int main( ) {
    unsigned int f1 = 0 ;
    unsigned int f2 = 1 ;
    
    unsigned int f3 = 1 ;
    
    for( int i = 1 ; f2 >= f1 ; i ++ ) {
        printf( "f[%d] = %d \n", i, f3 );
        
        f3 = f1 + f2 ; 
        
        f1 = f2 ;
        f2 = f3 ;
    }
    
    printf( "%d \n", f3 );

    return 0 ;
}

