// File Name : pointer_arith_05.c
#include <stdio.h>   

void main(){    
    char a[10] = { 65, 66, 67, 68, 69,  70, 71, 72, 73, 74 } ; 

    char * p = a ;
    for( int i = 0; i < 10 ; i ++ ) {
        printf( "p address = %p, %u, %c \n", p, p, *p );
        p ++ ;
    }
} 
