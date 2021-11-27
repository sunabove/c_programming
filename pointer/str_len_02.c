// File Name : str_len_02.c
#include <stdio.h>   

void main(){    
   char * str = "ABCDE\0";
   char * c = str ;
   int len = 0 ;  
   //for( ; *c++ != 0; len ++ ) {
   for( ; *c+=1 != 0; len ++ ) {
       // do nothing
   }
   printf( "len = %d \n", len );
} 
