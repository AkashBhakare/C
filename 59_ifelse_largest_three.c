/****************************************************************************
 *                                                                          *
 * File    : 59_ifelse_largest_three                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           05/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 *  Largest amongst 3 integers
 */
int main(void)
{
    int n1;
    int n2;
    int n3;
    int max;
    printf("Please enter the first integer:");
    scanf("%i", &n1);
    printf("Please enter the Second integer:");
    scanf("%i", &n2);
    printf("Please enter the Third integer:");
    scanf("%i", &n3);

    if ((n1 > n2) && (n1 > n3))
    {
        printf("%d is largest\n", n1);
    }

    if ((n2 > n1) && (n2 > n3))
    {
        printf("%d is largest\n", n2);
    }

    if ((n3 > n1) && (n3 > n2))
    {
        printf("%d is largest\n", n3);
    }

    return EXIT_SUCCESS;
}

//int main(int argc, char** argv) { 
//    int n1; /* stores the first integer   */
//    int n2; /* stores the second integer  */
//    int n3; /* stores the third integer   */
//    int max; /* stores the largest integer */
//
//    printf("Please enter the first integer : ");
//    scanf("%i", &n1);
//    printf("Please enter the second integer : ");
//    scanf("%i", &n2);
//    printf("Please enter the third integer : ");
//    scanf("%i", &n3);
//
//    if (n1 > n2)
//    {
//        if (n1 > n3)
//        {
//            max = n1;
//        }
//        else
//        {
//            max = n3;
//        }
//    }
//    else
//    {
//        if (n2 > n3)
//        {
//            max = n2;
//        }
//        else
//        {
//            max = n3;
//        }
//    }
//    printf("The largest integer is %d\n", max);
//
//    return (EXIT_SUCCESS);
//}

