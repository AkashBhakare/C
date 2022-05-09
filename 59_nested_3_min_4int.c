/****************************************************************************
 *                                                                          *
 * File    :59_nested_3_min_4int                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *  Samllest amongst 4 integers
 */

int main(int argc, char** argv)
{
    int n1; /* stores the first integer   */
    int n2; /* stores the second integer  */
    int n3; /* stores the third integer   */
    int n4; /* stores the third integer   */
    int min; /* stores the smallest integer */

    printf("Please enter the first integer : ");
    scanf("%i", &n1);
    printf("Please enter the second integer : ");
    scanf("%i", &n2);
    printf("Please enter the third integer : ");
    scanf("%i", &n3);
    printf("Please enter the third integer : ");
    scanf("%i", &n4);
    if (n1 < n2)
    {
        if (n1 < n3)
        {
            min = n1;
        }
        else
        {
            min = n3;
        }
    }
    else
    {
        if (n2 < n3)
        {
            min = n2;
        }
        else
        {
            min = n3;
        }
    }
    
    if (n4 < min)
    {
        min = n4;
    }
    printf("The Smallest integer is %d\n", min);
    return EXIT_SUCCESS;
}


//int main(int argc, char** argv) {
    //int n1; /* stores the first integer   */
    //int n2; /* stores the second integer  */
    //int n3; /* stores the third integer   */
    //int n4; /* stores the third integer   */
    //int smallestBetFirstTwo; /* stores the smallest integer */
    //int smallestBetLastTwo;
    //printf("Please enter the first integer : ");
    //scanf("%i", &n1);
    //printf("Please enter the second integer : ");
    //scanf("%i", &n2);
    //printf("Please enter the third integer : ");
    //scanf("%i", &n3);
    //printf("Please enter the fourth integer : ");
    //scanf("%i", &n4);
    //find the smallest amongst the first two integers
    ///if (n1 < n2)
    //{
        //smallestBetFirstTwo = n1;
   // }
    //else
    //{
    //    smallestBetFirstTwo = n2;
    //}
    //find the smallest amongst the last two integers
    //if (n3 < n4)
    //{
   //     smallestBetLastTwo = n3;
    //}
    //else
    //{
     //   smallestBetLastTwo = n4;
    //}

    //if (smallestBetFirstTwo < smallestBetLastTwo)
   // {
     //   printf("Smallest is %d\n", smallestBetFirstTwo);
    //}
    //else
    //{
    //    printf("Smallest is %d\n", smallestBetLastTwo);
    //}
   
    //return EXIT_SUCCESS;
//}



/*
min = n1;
    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }
    if (n4 < min) {
        min = n4;
    }
    printf("The Smallest number is %d\n", min);

*/
