// File Name : str_len_03.c
#include <stdio.h>   

void main(){    
   char * str = "ABCDE\0";
   char * c = str ;
   int len = 0 ;   
   while( *c++ ) {
       len ++;
   }
   printf( "len = %d \n", len );
} 
