// File Name : pointer_vs_array.c

#include <stdio.h>
void main() {
  char name_arr [] = "abcdefghijklmopqrstuvwxyz" ; 
  char * name_ptr  = "abcdefghijklmopqrstuvwxyz" ;

  printf( "[1] %s, sizeof = %lu \n", name_arr, sizeof(name_arr) ); // 26
  printf( "[2] %s, sizeof = %lu \n", name_ptr, sizeof(name_ptr) ); // 8

  char c = 'a';
  
  char * char_ptr ;
  
  char_ptr = & c ;
  // char_ptr = c ; // warning
  
  char_ptr = name_arr ;
  char_ptr = & (name_arr[0]) ; // 18 줄과 동일함. 
  
  printf( "[3] %s, sizeof = %lu \n", char_ptr, sizeof(char_ptr) ); // 8
  
  char_ptr = name_ptr ;
  printf( "[4] %s, sizeof = %lu \n", char_ptr, sizeof(char_ptr) ); // 8  
}