// File Name : printer_size.c
#include <stdio.h>
#include <string.h>

void main() {
    char * str = "ABCD" ;
    int * i ;

    printf( "i = %ld \n", sizeof(i) );
    printf( "str = %s, %ld, %ld \n", str, strlen(str), sizeof(str) ); 
}
