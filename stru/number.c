// File Name : number.c
#include <stdio.h>
#include <stdint.h> 

union number {  
   uint8_t  a;  
   uint16_t b;
   uint32_t c;
} ; 

void main() {
  union number num ;
  
  printf("sizeof(num) = %lu \n", sizeof(num) );
  printf( "\n" );
  
  num.c = 0xFFFFFF ;  
  
  printf("num.a = %u \n", num.a );
  printf("num.b = %u \n", num.b );
  printf("num.c = %u \n", num.c );
  printf( "\n" );
  
  num.a = 0x00;
  printf("num.a = %u \n", num.a );
  printf("num.b = %u \n", num.b );
  printf("num.c = %u \n", num.c );
}   