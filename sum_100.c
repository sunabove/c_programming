// File Name : sum_100.c
#include <stdio.h>

int main( ) {
    int sum = 0 ; 
    
    for( int i = 1; i < 101 ; i ++ ) {
        sum = sum + i ;       
    }
    
    printf( "sum = %d \n", sum );
    

    return 0 ; 
}

