/****************************************************************************
 *                                                                          *
 * File    : 32_modulos                                                      *
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
	int mod;
	
	printf("Please Enter The  First Integer :");
	scanf("%i", &num1);

	printf("Please Enter The Second Integer :");
	scanf("%i", &num2);

   mod = num1 % num2;
    printf("\t %d %% %d = %d \n", num1,num2,mod);
  	
  	return 0;
}
