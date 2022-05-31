/****************************************************************************
 *                                                                          *
 * File    : 72_Armstrong_Number                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//Accept Integer and check for Armstrong number...

int main()
{
	int num;
    int rem;
	int sum;
    int temp_num;
    
    printf("Please Enter a integer : ");
    scanf("%i", &num);

    temp_num = num;
    
    while(num != 0)
    {
    	rem = num % 10;
        sum = sum + rem * rem * rem;
    	num = num / 10;
	}
	
	if(sum == temp_num){
		printf("It is a Armstrong number %d \n", temp_num);
    } else{
		printf("It is Not a Armstrong number %d\n", temp_num);
	}
	
    return 0;
}
