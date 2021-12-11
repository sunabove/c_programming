// File Name : emp_typedef.c
#include<stdio.h>
#include <string.h>
typedef struct employee_ {
   int id ;
   char * name ;
} employee ;

void main() {
   //struct employee e ;
   employee e ;
   employee s ; 
   employee * p ; 
   p = & e ;
   
   int * id = & ( p->id ) ; 
      
   e.id = 101 ;
   e.name = "John Doe" ;
   
   s.id = 102 ;
   s.name = "Brown" ;
        
   printf( "e.id : %d \n", e.id );
   printf( "e.name : %s \n", e.name );
   
   printf( "s.id : %d \n", s.id );
   printf( "s.name : %s \n", s.name );
   
   printf( "p->id : %d \n", p->id );
   printf( "p->name : %s \n", p->name );
   
   * id = 103 ; 
   
   printf( "p->id : %d \n", p->id );
   printf( "p->name : %s \n", p->name );
}