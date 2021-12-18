#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

struct student {
    int id; 
    int score ;  
    struct student *next; 
};

void main() 
{ 
    int id;
    int score ;
    struct student *p, *head = NULL;
 
    printf("Enter the id and score of a student, please!\n");
    
    while( scanf("%d %d", &id, &score) == 2) {
        p = (struct student *) malloc(sizeof(struct student));
        if (p == NULL) {
            perror("malloc");
            exit(1);
        }
        p->id = id;		
        p->score = score;
        p->next = head;		
        head = p;
    }
    
    printf("\n* Information of students (descent) *\n");
    p = head;
    
    int count = 0 ;
    int sum = 0 ;
    int max_score = 0 ; 
    double average = 0 ; 
    
    while (p != NULL)  {
        count ++;
        printf("id: %d score: %d \n", p->id, p->score); 
        
        sum += p->score;
        
        if( p->score > max_score ) {
            max_score = p->score ; 
        }
        
        p = p->next;
    }
    
    printf("\nThere are %d students.\n", count); 
    
    average = sum/count ; 
    
    
    printf("sum = %d \n", sum);
    printf("average = %f \n", average); 
}

