/****************************************************************************
 *                                                                          *
 * File    :39_Comma_Operator                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           13/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int ans;

	a = 5;
	b = 7;
	d = a + b;
	c = a + b;
	ans = a + b +c;
    printf("Ans = %d\n", ans);

	//alternative method to perfrom above operations
	//in a single statement  : (reducing the line count)
    ans = (a = 5, b = 7, c = a * b, d = a + b, a + b + c);
    printf("Ans = %d\n", ans);

    return 0;
}

