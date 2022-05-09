/****************************************************************************
 *                                                                          *
 * File    : 62_Ternary                                                   *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    int n1;
    int n2;
    int n3;
    int max;
    printf("Please enter 3 integers : ");
    scanf("%d%d%d", &n1, &n2, &n3);

    max = (n1 > n2) ? n1 : n2;
    printf("Largest amongst first 2 integers is %d\n", max);

    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("Largest amongst 3 integers is %d\n", max);
    return EXIT_SUCCESS;
}
*/

// nesting of ternary operators should be avoided as 
//it makes the code complex


#include <stdio.h>
#include <stdlib.h>
int main() {
    int m1;
    int m2;
    int m3;
    int per;
    const int NUMBER_OF_SUBJECTS = 3;
    const int MIN_PASSING_PERCENTAGE = 35;
    
    printf("Please enter marks in 3 subjects : ");
    scanf("%d%d%d", &m1, &m2, &m3);
    
    per = (m1 + m2 + m3) / NUMBER_OF_SUBJECTS;

    (per >= MIN_PASSING_PERCENTAGE) ? printf("Grade is PASS\n") : printf("Grade is Fail\n");

    return EXIT_SUCCESS;
}
