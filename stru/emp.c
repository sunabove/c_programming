// File Name : emp.c
#include<stdio.h>
#include <string.h>

struct employee {
   int id ; 
   char * name ;      
} ;

void main() {    
   //store first employee information
   struct employee e ;     
   e.id=101;    
   e.name = "Sonoo Jaiswal" ;
        
   //printing first employee information    
   printf( "employee 1 id : %d \n", e.id);    
   printf( "employee 1 name : %s \n", e.name); 
}  
