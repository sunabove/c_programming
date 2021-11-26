// File Name : unsigned_plus.c
#include <stdint.h>
#include <stdio.h>

void main() {   
  unsigned char b1 = 0xF0 ;
  uint8_t b2 = 0x0F ;
  unsigned char b3 = b1 + b2 ; 
  
  printf( "%u + %u = %u \n", b1, b2, b3 );
  printf( "%X + %X = %X \n", b1, b2, b3 );
  printf( "%2X + %2X = %2X \n", b1, b2, b3 );
  printf( "%02X + %02X = %02X \n", b1, b2, b3 );
  printf( "%x + %x = %x \n", b1, b2, b3 );
}