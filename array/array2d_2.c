// File Name : array2d_2.c
#include <stdio.h>

void main() {
  char name_arr [] = "abcdefghijklmopqrstuvwxyz" ; 
  char * name_ptr  = "abcdefghijklmopqrstuvwxyz" ;
  
  printf( "[1] %s, sizeof = %lu \n", name_arr, sizeof(name_arr) );
  printf( "[2] %s, sizeof = %lu \n", name_ptr, sizeof(name_ptr) );
  
  char * char_ptr ;
  char_ptr = name_arr ;
  printf( "[3] %s, sizeof = %lu \n", char_ptr, sizeof(char_ptr) );
  char_ptr = name_ptr ;
  printf( "[4] %s, sizeof = %lu \n", char_ptr, sizeof(char_ptr) );       
}