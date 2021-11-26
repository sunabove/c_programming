// bell.c
#include <stdio.h>

void main() {
  for( int i = 0 ; i < 10 ; i ++ ) {
      printf( "\a" );
      for( int k = 0 ; k < 100000; k ++ ) {
          int m = i + k; 
      }
  }
}