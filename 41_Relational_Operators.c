/****************************************************************************
 *                                                                          *
 * File    :41_Relational_Operators                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           16/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 10;
	int num2 = 20;
	int result;

	/*All relational operators evaluate to either true or false (1/0)*/
	printf("%d  > %d = %d\n", num1, num2, (num1  > num2));
	printf("%d  < %d = %d\n", num1, num2, (num1  < num2));
	printf("%d <= %d = %d\n", num1, num2, (num1 <= num2));
	printf("%d >= %d = %d\n", num1, num2, (num1 >= num2));
	printf("%d == %d = %d\n", num1, num2, (num1 == num2));
	printf("%d != %d = %d\n", num1, num2, (num1 != num2));

	/*Relational expressions can be a part of arithmetic expressions*/
	result = (num1 < num2) + (num1 == 10) + (num2 != 10);
	printf("Result = %d\n",result);

	int age = 10;
	printf("Person with age %d is Eligible vote ? %d\n",age, (age >= 18));
	age = 23;
	printf("person with age %d is Eligible to vote ? %d\n",age, (age >= 18));

	if(age >= 18){
		printf("Person with age %d is eligible to vote\n",age);
    }else{
		printf("Person with age %d is not eligible to vote\n",age);
	}

	while(getchar() != 10){

	}



    return 0;
}

