// File Name : prime_numbers.c
#include <stdio.h>

int main( ) {
    int primes[100] = { 0 };
    int primes_count = 0 ; 
    
    for( int i = 2 ; i < 100; i++ ) {
        int is_prime = 1 ; 
        
        for( int k = 0; k < primes_count ; k++ ) {
            if( i % primes[k] == 0 ) {
                is_prime = 0 ; 
                
                break;
            }
        }
        
        if( is_prime ) {
            primes[ primes_count ] = i ;  
            printf( "primes[%d] = %d \n", primes_count, i );
          
            primes_count ++;
        }
    }

    return 0 ; 
}

