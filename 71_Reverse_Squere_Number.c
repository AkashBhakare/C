/****************************************************************************
 *                                                                          *
 * File    : 71_Reverse_Squere_Number                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <limits.h>

/*
Accept the two integer check Whether it satisfied following properity
Properity ==> The squere of reverse of the number it same as reverse of squre of number.
*/


int findpow(int num){
    // pow calculated and returned
    return num * num;
}

int main()
{
	int num;
	int pow;
	int digit;
	int reverse;
	int temp_num;
    
	printf("Please Enter the two digit integer : ");
	scanf("%i",&num);

	temp_num = num;

	pow = findpow(num);
    printf("square of the given number is %d\n",pow);

    while (num != 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
	 
	printf("The Reverse of square of number %d\n",reverse);

    return 0;
}
