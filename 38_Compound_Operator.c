/****************************************************************************
 *                                                                          *
 * File    : 38_Compound_Operator and Short hand operator                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           11/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 3;
	int c = 5;
	int d = 2;
	int ans;

    a = a +5;
	printf("A = %d\n", a);
    a += 5;
	printf("A = %d\n", a);
    a /= 5;
	printf("A = %d\n", a);

	d *= (a + d);  //d = d * (a + d) 
	printf("D = %d\n", d);
    return 0;
}

