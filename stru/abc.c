// File Name : union.c
#include <stdio.h>

typedef union abc_ {  
   unsigned int a;  
   char b;   
} abc ; 

void main() {
  abc var ;
     
  var.a = 0xFFFFFF00;  
  
  printf("var   sizeof = %lu \n", sizeof(var)   );
  printf("var.a sizeof = %lu \n", sizeof(var.a) );  
  printf("var.b sizeof = %lu \n", sizeof(var.b) ); 
  
  printf("var     address = %p \n",        & var   );
  printf("a = %u, address = %p \n", var.a, & var.a );  
  printf("b = %d, address = %p \n", var.b, & var.b ); 
}   