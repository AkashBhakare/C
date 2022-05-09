/****************************************************************************
 *                                                                          *
 * File    : Accept_four_Integer                                                       *
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
 *  Accpet four integer and display minimum number..
 */

int main()
{
    int num1;
    int num2;
    int num3;
	int num4;

    printf("Please enter the first integer:");
    scanf("%i", &num1);

    printf("Please enter the Second integer:");
    scanf("%i", &num2);

    printf("Please enter the Third integer:");
    scanf("%i", &num3);

    printf("Please enter the Four integer:");
    scanf("%i", &num4);
    
  
    int min = num1;
  
    if (num2 < min) min = num2;

    if (num3 < min) min = num3;

    if (num4 < min) min = num4;
    
	printf("\nMinimum Number is : %d\n", min);
  
    return 0;
}

int main(void)
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
    printf("Please enter the fourth integer : ");
    scanf("%i", &n4);

    if (n1 < n2)
    {
        if (n1 < n3)
        {
            if (n1 < n4)
            {
                min = n1;
            }
            else
            {
                min = n4;
            }
        }
        else
        {
            if (n3 < n4)
            {
                min = n3;
            }
            else
            {
                min = n4;
            }
        }

    }
    else
    {
        if (n2 < n3)
        {
            if (n2 < n4)
            {
                min = n2;
            }
            else
            {
                min = n4;
            }
        }
        else
        {
            if (n3 < n4)
            {
                min = n3;
            }
            else
            {
                min = n4;
            }
        }
    }

    printf("The Smallest integer is %d\n", min);

    return (EXIT_SUCCESS);
}

