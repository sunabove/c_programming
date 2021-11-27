// File Name : str_len.c
#include <stdio.h>   

void main(){    
   char * str = "HELLO";
   char * c = str ;
   int len = 0 ;  
   while( *c != 0 ) {
      print( c ++ ) ; 
      print( c += 1 ) ;  
      len ++ ;
   }
   printf( "len = %d \n", len );
} 
