// File Name : switch_break.c
#include <stdio.h>

void main() {  
    int x = 10, y = -5;   
    switch( x + y > 0 ) {  
        case 1:   
            printf( "Positive" );  
            break;   
        case 0:   
            printf( "Zero" );  
            break;  
        default:   
            printf( "Negative" );  
    }           
} 
