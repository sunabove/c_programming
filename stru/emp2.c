// File Name : emp2.c
#include<stdio.h>
#include <string.h>

typedef struct employee_ {
   int id ; // 4 byte
   char * name ; // 8 byte
} employee ;

void f(employee * b) { // 8 byte pointer variable
   b->id = 101;
   b->name = "John Doe" ;
        
   printf( "employee 1 id : %d \n", b->id);
   printf( "employee 1 name : %s \n", b->name);
} ; 

void main() {
    employee e ;
    f( & e );
    printf( "employee 2 id : %d \n", e.id);
    e.id = 102 ; 
    printf( "employee 3 id : %d \n", e.id);
} ; 