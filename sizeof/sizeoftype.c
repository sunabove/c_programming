// File Name : sizeoftype.c
#include <stdio.h>

void main() {
  char c = 65;
  int i = 1;
  double d = 1.2;
  
  printf( "size of c : %ld \n", sizeof( c ) );
  printf( "size of char : %ld \n", sizeof( char ) );
  printf( "size of i : %ld \n", sizeof( i ) );
  printf( "size of int : %ld \n", sizeof( int ) );
  printf( "size of d : %ld \n", sizeof( d ) );
  printf( "size of double : %ld \n", sizeof( double ) );
}