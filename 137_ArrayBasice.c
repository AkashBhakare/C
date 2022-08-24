/****************************************************************************
 *                                                                          *
 * File    : 137_ArrayBasice.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           19/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include<stdio.h>
#define NUMBER_OF_STUDENT 3
#define NUMBER_OF_SUBJECTS 5

int main(void)
{
    int marks[NUMBER_OF_STUDENT][NUMBER_OF_SUBJECTS];
    size_t i; // row subscript
    size_t j; // col subscript
    float percentage;
    int totalMarks;
    
    for(i = 0U; i < NUMBER_OF_STUDENT; i++){
        printf("Please enter the marks of student No. %zu\n", i+1);
        for(j = 0U; j < NUMBER_OF_SUBJECTS; j++ ){
            printf("\tSubject No %zu = ", j+1);
            scanf("%i", &marks[i][j]);// *(marks+i)+j ; marks[i]+j;
        }
    }
    
    for(i = 0; i < NUMBER_OF_STUDENT; i++){
        printf("Student No. %zu\n", i+1);
        totalMarks = 0;
        for(j = 0; j < NUMBER_OF_SUBJECTS; j++ ){
            printf("\tSubject No %zu = %d \n", j+1 , marks[i][j]);
            totalMarks += marks[i][j];
        }
        percentage = (float)totalMarks / NUMBER_OF_SUBJECTS;
        printf("\tTotal marks = %d \n", totalMarks);
        printf("\tPercentage marks = %.2f %%\n", percentage);
        printf("\n");
    }
    
    return 0;
}
