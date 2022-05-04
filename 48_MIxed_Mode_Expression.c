/****************************************************************************
 *                                                                          *
 * File    : 48_MIxed_Mode_Expression                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = 7;
	int y = 2;
    float ans = (float)(x /y); 

	//float y = 2.0f;
	//int ans = x / y; //Mixed mode experssion == int / float
    //printf("%d / %.2f = %d\n", x, y, ans);
    printf("%d / %.2f = %d\n", x, y, ans);


    return 0;
}

