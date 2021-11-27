// File Name : array2.c
#include <stdio.h>

void main() {
  int arr[ 5 ] = { 0 } ; 
  
  for( int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++ ) { 
    printf( "%d \n", arr[i] ); 
  }   
}