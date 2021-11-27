// File Name : array1.c
#include <stdio.h>

void main() {
  int a[8][9];
  
  for(int i = 0; i < sizeof(a)/sizeof(a[0]) ; i++ ) {
    for(int k = 0; k < sizeof(a[i])/sizeof(a[i][0]); k++ ) {
        a[i][k] = (i + 2)*(k+ 1);
    }
  }
  
  for(int i = 0; i < sizeof(a)/sizeof(a[0]) ; i++ ) {
    for(int k = 0; k < sizeof(a[i])/sizeof(a[i][0]) ; k ++ ) {
        printf( "a[%d][%d] = %d \n", i, k, a[i][k] );
    }
    printf( "\n" );
  }
     
}