// File Name : array2d.c
#include <stdio.h>

void main() {
  int a[8][9];  
  
  printf( "sizeof(a)       = %lu \n", sizeof( a ) );
  printf( "sizeof(a[0])    = %lu \n", sizeof( a[0] ) );
  printf( "sizeof(a[0][0]) = %lu \n", sizeof( a[0][0] ) );
  
  printf( "\n" );
  
  for(int i = 0; i < sizeof(a)/sizeof(a[0]) ; i++ ) {
    for(int k = 0; k < sizeof(a[i])/sizeof(a[i][0]); k++ ) {
        a[i][k] = (i + 2)*(k+ 1);
    }
  }
  
  for(int i = 0; i < sizeof(a)/sizeof(a[0]) ; i++ ) {
    for(int k = 0; k < sizeof(a[i])/sizeof(a[i][0]) ; k++ ) {
        printf( "a[%d][%d] = %d \n", i, k, a[i][k] );
    }
    printf( "\n" );
  }
     
}