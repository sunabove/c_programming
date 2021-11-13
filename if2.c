#include <stdio.h>  

void main(){
    int a, b, c;   
    
    printf( "Enter three numbers: " );  
    scanf( "%d %d %d", &a, &b, &c );  
    
    if( a > b && a > c ) {  
        printf( "%d is largest. \n", a );  
    } else if( b >a && b > c ) {  
        printf( "%d is largest. \n", b );  
    } else if( c > a && c > b ) {  
        printf( "%d is largest. \n", c );  
    } else if( a == b && a == c ) {  
        printf( "All are equal. \n" );   
    }  
} 
