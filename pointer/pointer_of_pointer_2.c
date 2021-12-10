// File Name : pointer_of_pointer_2.c
#include <stdio.h>

void main() {
    char names [][10] = { "abc", "defg", "hijkl" };
    char ** pnames = names ; 
    
    printf( "sizeof( names2 ) = %lu \n", sizeof( names ) );
    printf( "sizeof( pnames ) = %lu \n", sizeof( pnames ) );
    
    char ** p = pnames ; 
    
    for( int i = 0 ; i < 3 ; i ++ ) {
       printf( "%s", *p );
       printf( "\n" );
    }
}