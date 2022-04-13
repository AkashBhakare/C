/****************************************************************************
 *                                                                          *
 * File    :31_Division                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int division;
	
	printf("Please Enter The  First Integer :");
	scanf("%i", &num1);

	printf("Please Enter The Second Integer :");
	scanf("%i", &num2);

    division = num1 / num2;
    printf("\t %d / %d = %d \n", num1,num2,division);
  	
  	return 0;
}

