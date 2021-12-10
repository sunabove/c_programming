// scanf.c
#include <stdio.h>
#include <string.h>
void main(){ 
    printf( "Input a : " );
    
    double a; 
    scanf( "%lf", & a );
    
    printf( "You have entered %lf \n", a );
}