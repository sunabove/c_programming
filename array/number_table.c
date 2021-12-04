// File Name : number_table.c
#include <stdio.h>

void main() {
  int a[8][9];  
  
  for(int i = 0; i < 8 ; i++ ) {
    for(int k = 0; k < 9 ; k++ ) {
        a[i][k] = (i + 2)*(k+ 1);
    }
  }
  
  for(int i = 0; i < 8 ; i++ ) {
    for(int k = 0; k < 9 ; k++ ) {
        printf( "%d x %d = %2d \n", i + 2, k + 1, a[i][k] );
    }
    printf( "\n" );
  }
     
}