/****************************************************************************
 *                                                                          *
 * File    :50_Palindrome                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>


//Accept a three digit integer and check wether Palindrome Number.
int main()
{
	int num;  
	int reversed = 0;
    int remainder;

	printf("Please enter the three digit number :");
    scanf("%d", &num);

    int xnum = num; 

	while(num != 0)
	{
		remainder = num % 10;
		reversed  = reversed * 10 + remainder;
		num = num / 10;
	}
	
	if(xnum == reversed)
	 	printf("%d is a palindrome number \n", xnum);
	else
		printf("%d is not a palindrome number \n", xnum);
	
	
    return 0;
}
