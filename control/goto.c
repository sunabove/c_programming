// File Name : goto.c
#include <stdio.h>

void main() {
   int num, i = 1;
   printf("Enter the number whose table you want to print?");
   scanf("%d", &num);
   my_label :
   printf( "%d x %d = %d\n", num, i, num*i );
   i++;
   if( i <= 10 )
      goto my_label ;
}
