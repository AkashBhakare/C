/****************************************************************************
 *                                                                          *
 * File    : 29_Add_Two_Number                                                   *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           05/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
//Write a C program to accept TWO integer from the user Addition..

#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int result;
	
	printf("Please Enter The  First Integer :");
	scanf("%i", &num1);

	printf("Please Enter The Second Integer :");
	scanf("%i", &num2);

    result = num1 + num2;
    printf("\t %d + %d = %d \n", num1,num2,result);
  	
  	return 0;
}


/*

int main()
{
	int num1;
	int num2;
	int result;
	
	printf("Enter First Integer :");
	scanf("%d", &num1);

	printf("\nEnter Second Integer :");
	scanf("%d", &num2);

    result = num1 + num2;
    printf("%d + %d = %d \n", num1,num2,result);
  	
  	return 0;
}
*/
