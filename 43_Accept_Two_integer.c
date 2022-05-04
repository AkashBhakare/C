/****************************************************************************
 *                                                                          *
 * File    : 43_Accept_Two_integer                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int Multiplication;
	
	printf("Please Enter The  First Integer :");
	scanf("%i", &num1);

	printf("Please Enter The Second Integer :");
	scanf("%i", &num2);

    Multiplication = num1 * num2;
	printf("\t %d * %d = %d \n", num1,num2,Multiplication);

   
	printf("Product of the above two integers = %d\n", Multiplication);
  	
  	return 0;
}
