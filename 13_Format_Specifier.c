/****************************************************************************
 *                                                                          *
 * File    :13_Format_Specifier                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           09/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 'B'; //charater constant
	int i = 69;    //Integer Constant
	char str[80] = "Anil Kapoor"; //String Constant
	double d = 4000000.5645646644; //double constant
	float f = 123.56f; //float constant
    int j = i + 10;   //Expression used as initializer
    printf("%d %c %d\n", i, ch, j);
	printf("%d %d \n", ch, i);
	printf("%c %d \n", ch, i, j, f);
	printf("%c %d %c %d\n", ch, i);

	printf("Double = lf \nFloat = %f\n", d, f);
	printf("String = Hello Mr. %s\n", str);

	
    return EXIT_SUCCESS;
}

