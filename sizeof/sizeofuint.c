// File Name : sizeofuint.c
#include <stdint.h>
#include <stdio.h>

void main() {   
  printf( "size of c : %ld \n", sizeof( uint8_t ) );
  printf( "size of char : %ld \n", sizeof( uint16_t ) );
  printf( "size of char : %ld \n", sizeof( uint32_t ) );
  printf( "size of char : %ld \n", sizeof( uint64_t ) ); 
}