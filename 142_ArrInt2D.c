/****************************************************************************
 *                                                                          *
 * File    : 142_ArrInt2D.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
// 2 D array example

/* 
 * Accept marks of 10 student in 5 subject each & 
 * display marks of all students in every subject followed by 
 * the total marks and percentage secured by every student and 
 * average performance of the class in every subject.
 */
#include <stdio.h>
#include <limits.h>
#include <inttypes.h>
#include <stdlib.h>

#define STUDENTS 3
#define SUBJECTS 4

void acceptMarks(int [STUDENTS][SUBJECTS]); //using alias
void displayMarks(int (*)[SUBJECTS]); //using pointer to row
void displayTotalAndPercentage(int [][SUBJECTS]); //using alias
void avgPerformancePerSubject(int [][SUBJECTS]); //using alias
void accessing_2d_array();

int main(void) {
    int mark [ STUDENTS ][ SUBJECTS ];
    printf("Address of mark = %"PRIuPTR"\n", mark);
    printf("Enter marks of %d students:\n", STUDENTS);
    acceptMarks(mark);
    printf("Marks of all students are as follows:\n");
    displayMarks(mark);
    displayTotalAndPercentage(mark);
    printf("The average performance of the class in every subject is as follows\n");
    avgPerformancePerSubject(mark);
    accessing_2d_array();
    return 0;
}

void acceptMarks(int m[STUDENTS][SUBJECTS]) {
    //printf("Address of m = %"PRIuPTR"\n", m);
    for (size_t row = 0U; row < STUDENTS; row++) {
        printf("\nStudent Number : %zu :\n", (row + 1));
        for (size_t col = 0U; col < SUBJECTS; col++) {
            printf("\t\tSubject No %zu Marks = ", (col + 1));
            scanf("%i", &m[ row ][ col ]);
            //  scanf("%d", m[ r ] + c );
            //	scanf("%d", *( m + r ) + c );
        } //end of j for loop
    }//end of i for loop
    return;
}

//void displayMarks(int (*m)[SUBJECTS] )

void displayMarks(int m[][SUBJECTS]) {
    for (size_t row = 0U; row < STUDENTS; row++) {
        printf("\nStudent Number: %zu\n", (row + 1));
        for (size_t col = 0U; col < SUBJECTS; col++) {
            printf("\t\t Subject No %zu Marks = %d\n", (col + 1), m[ row ][ col ]);
            //        printf("\t\t Subject No %d Marks = %d\n", (j + 1), *(*(m + i) + j));
        }//end of j for loop
    }//end of i for loop
    return;
}

void displayTotalAndPercentage(int m[STUDENTS][SUBJECTS]) {
    int tot;
    float per;
    for (size_t row = 0U; row < STUDENTS; row++) {
        tot = 0; //reset for every student
        for (size_t col = 0; col < SUBJECTS; col++) {
            tot += m [ row ][ col ];
        }
        per = (float) tot / SUBJECTS;
        printf("Student No: %zu\tTotal Marks = %d"\
		"\tPercentage = %.2f\n", (row + 1), tot, per);
    }
    return;
}

void avgPerformancePerSubject(int mark[STUDENTS][SUBJECTS]) {
    int total;
    float average;
    for (size_t col = 0U; col < SUBJECTS; col++) {
        total = 0; //reset for every subject
        for (size_t row = 0U; row < STUDENTS; row++) {
            total = total + mark[ row ][ col ];
        }
        average = (float) total / STUDENTS;
        printf("Subject No :%zu\tAverage  = %.2f\n", (col + 1), average);
    }
    return;
}

void accessing_2d_array() {
    int mark [ 3 ][ 4 ] = {{10,20,30,40},{50,60,70,80}};
    // Basics of Pointer to group of variables
    int (*p)[4] = mark;
    printf("Address of mark = %p\t%"PRIuPTR"\n", mark, mark);
    printf("Address of mark = %p\t%"PRIuPTR"\n", p, p);
    printf("Address of mark = %p\t%"PRIuPTR"\n", mark + 1, mark + 1);
    printf("Address of mark = %p\t%"PRIuPTR"\n", p + 1, p + 1);
    printf("Address of mark = %p\t%"PRIuPTR"\n", *(p + 1), *(p + 1));
    printf("Address of mark = %p\t%"PRIuPTR"\n", *(p + 1) + 1, *(p + 1) + 1);
    printf("Address of mark = %d\n", *(*(p + 1) + 1));
}
