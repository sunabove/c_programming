// File Name : pointer_of_pointer.c
#include <stdio.h>

void main() {
    char name [] = "abc" ;
    char name2 [] = { 'a', 'b', 'c', 0 } ;
    char names [][10] = { "abc", "defg", "hijkl" };
    char names2 [3][10] = { "abc", "defg", "hijkl" }; 
    
    char c = 'A' ;
    char ** pnames ;     
    
    printf( "sizeof( char   ) = %lu \n", sizeof( char ) );
    printf( "sizeof( c      ) = %lu \n", sizeof( c    ) );
    printf( "sizeof( name   ) = %lu \n", sizeof( name ) );
    printf( "sizeof( name2  ) = %lu \n", sizeof( name2 ) );
    printf( "sizeof( names  ) = %lu \n", sizeof( names ) );
    printf( "sizeof( names2 ) = %lu \n", sizeof( names2 ) );
    printf( "sizeof( pnames ) = %lu \n", sizeof( pnames ) );
}