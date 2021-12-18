#include <stdio.h>   
#include <stdlib.h>

struct student {
    int id;
    char name[20];
};

/* 학생 수를 미리 입력하여 학생 정보를 입력 역순으로 출력 */

void main() {
   printf( "Enter the count of students, please! " );
   int n ;
   scanf("%d", &n);
   if (n <= 0) {
      printf( "Error : Invalid Student counts.\n" );
      printf( "Program Exit.\n") ;
      exit(1);
   }
   
   struct student *ptr; // 동적 할당된 블록을 가리킬 포인터
   ptr = (struct student *) malloc( n*sizeof(struct student) );
   
   if (ptr == NULL) {
     perror("malloc"); 
     exit(2);
   }
	
   printf("Enter %d stduents informations.\n", n);
   for(int i = 0; i < n; i++) {
      scanf("%d %s\n", &ptr[i].id, ptr[i].name);
   }
	
   printf("\n* Students information(desent) *\n");
   for(int i = n-1; i >= 0; i--) {
      printf("%d %s\n", ptr[i].id, ptr[i].name);
   }
	
   printf("\n");
}
 
   