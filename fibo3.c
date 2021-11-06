// File Name : fibo3.c
#include <stdio.h>

void main( ) {
    long double f1 = 0 ;
    long double f2 = 1 ;    
    long double f3 = 1 ; 
    
    int i = 1;
    for( ; f1 <= f2 && f2 <=f3 ; i ++ ) { 
        f3 = f1 + f2 ;         
        f1 = f2 ;
        f2 = f3 ; 
    }
    
    printf( "f[%d] = %Lf \n", i, f3 ); 
}

