// File Name : union.c
#include <stdio.h>

union abc {  
   int a;  
   char b;   
} ; 

void main() {
  union abc var ;
     
  var.a = 66;  
  
  printf("var   sizeof = %lu \n", sizeof(var)   );
  printf("var.a sizeof = %lu \n", sizeof(var.a) );  
  printf("var.b sizeof = %lu \n", sizeof(var.b) ); 
  
  printf("var     address = %p \n",        & var   );
  printf("a = %d, address = %p \n", var.a, & var.a );  
  printf("b = %d, address = %p \n", var.b, & var.b ); 
}   