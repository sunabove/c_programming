// FileName: typedef.c

#include <stdio.h>

//typedef unsigned int speed ;
typedef int speed ;
typedef float sum_type ;

void main() {  
   speed i;
   speed j;
   speed k;
   
   // signed int j ; 
   // unsigned int i ;
   
   i= 10;
   
   j= -20;
   
   sum_type sum = i + j + k ; 

   printf("i = %d \n", i);  
   printf("j = %d \n", j);
}
