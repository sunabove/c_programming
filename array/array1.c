// File Name : array1.c
#include <stdio.h>

void main() {
  int arr[ 5 ] ;
  
  printf( "sizeof(arr) %zd \n", sizeof(arr) );
  printf( "sizeof(arr[0]) %zd \n", sizeof(arr[0]) );
  // sizeof(arr)/sizeof(arr[0]) = 20/4 = 5
  for( int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++ ) { 
    arr[i] =  2*i  ; 
  }
  
  for( int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++ ) { 
    printf( "%d \n", arr[i] ); 
  }   
}