// File Name : unsigned.c
#include <stdint.h>
#include <stdio.h>

void main() {   
  uint8_t b1 = 255 ;
  uint8_t b2 = 1 ;
  uint8_t b3 = b1 + b2 ; 
  
  printf( "%u + %u = %u \n", b1, b2, b3 );
}