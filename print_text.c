// File Name : print_text.c
#include <stdio.h>
#include <string.h>

void main() {
    char c = 'A' ; 
    char * str = "ABCD" ;
    // const char * str = "ABCD" ; 
    
    int * i ;

    printf( "i = %ld \n", sizeof(i) );
    printf( "c = %c, %d, %ld \n", c, c, sizeof(c) );
    printf( "string = %s, %ld, %ld \n", str, strlen(str), sizeof(str) ); 
}
