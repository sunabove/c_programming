// File Name : array1_1.c
#include <stdio.h>

void main() {
  int len = 5 ; 
  int arr[ len ] ; // int arr[ 5 ] ;
  
  printf( "sizeof(arr) %zd \n", sizeof(arr) );
  printf( "sizeof(arr[0]) %zd \n", sizeof(arr[0]) );
  
  for( int i = 0 ; i < len ; i++ ) { 
    arr[i] =  2*i  ; 
  }
  
  for( int i = 0 ; i < len ; i++ ) { 
    printf( "%d \n", arr[i] ); 
  }   
}