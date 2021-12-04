// File Name : array2d_3.c
#include <stdio.h>

void main() {
  int a[8][9];  
  
  printf( "sizeof(a)       = %lu \n", sizeof( a ) );
  printf( "sizeof(a[0])    = %lu \n", sizeof( a[0] ) );
  printf( "sizeof(a[0][0]) = %lu \n", sizeof( a[0][0] ) );
  printf( "sizeof(a[0][1]) = %lu \n", sizeof( a[0][1] ) );
  printf( "sizeof(int)     = %lu \n", sizeof( int ) );
  
  
  printf( "\n" );
  
  for(int i = 0; i < 8 ; i++ ) {
    for(int k = 0; k < 9 ; k++ ) {
        a[i][k] = (i + 2)*(k+ 1);
    }
  }
  
  for(int i = 0; i < 8 ; i++ ) {
    for(int k = 0; k < 9 ; k++ ) {
        printf( "a[%d][%d] = %d \n", i, k, a[i][k] );
    }
    printf( "\n" );
  }
     
}