/****************************************************************************
 *                                                                          *
 * File    :60_nested_AND                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*
 * Nested if used to eliminate &&
 */

/*
 * Check whether the student can participate
 * in a college event:
 * Criteria of selection for the event:
 * 1) Percentage marks obtained by the student
 *    should be minimum 60
 * 2) Attendance should be minimum 70%
 */
int main(void)
{
    float perMarks; // Percentage of marks obtained
    float perAttend; // percentage of attendance
    const float MIN_PER_MARKS_REQD = 60.0F;
    const float MIN_PER_ATTEND_REQD = 70.0F;
    const float MIN_VALUE = 0.0F;
    const float MAX_VALUE = 100.0F;
    printf("Please enter the Student Details:\n");

    printf("Percentage of Attendance:");
    scanf("%f", &perAttend);
    if (perAttend < MIN_VALUE || perAttend > MAX_VALUE)
    {
        fprintf(stderr, "Attendance Percentage should be in range of (0..100)\n");
        exit(EXIT_FAILURE);
    }

    //  Using nested if to eliminate Logical AND
    if (perAttend >= MIN_PER_ATTEND_REQD)
    {
        printf("Percentage marks obtained :");
        scanf("%f", &perMarks);
        if (perMarks < MIN_VALUE || perMarks > MAX_VALUE)
        {
            fprintf(stderr, "Percentage should be in the range(0..100)\n");
            exit(EXIT_FAILURE);
        }

        if (perMarks >= MIN_PER_MARKS_REQD)
        {
            printf("Congrats ! You are eligible for the event\n");
        }
        else
        {
            printf("Sorry! you are not eligible for the event\n");
        }
    }
    else
    {
        printf("Sorry! you are not eligible for the event\n");
    }
    return EXIT_SUCCESS;
}

