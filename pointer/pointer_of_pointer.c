// File Name : pointer_of_pointer.c
#include <stdio.h>

void main() {
    char name [] = "abc" ;
    char name2 [] = { 'a', 'b', 'c', 0 };    
    char names [][10] = { "abc", "defg", "hijkl" };
    char ** pnames = names ;
    
    printf( "sizeof( name   ) = %lu \n", sizeof( name ) );
    printf( "sizeof( names  ) = %lu \n", sizeof( names ) );
    printf( "sizeof( pnames ) = %lu \n", sizeof( pnames ) );
}