// File Name : void_pointer.c
#include <stdio.h>   

void main(){    
  int i = 0 ;
  long L = 0 ; 
  int * p = & i ;
  char c = 'A' ; 
  
  char * p1 = & c ; 
  long * p2 = & L ;
  
  void * p4 = & i ;
  void * p5 = & L ;
  void * p6 = & c ;  
} 
