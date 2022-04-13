/****************************************************************************
 *                                                                          *
 * File    : 37_Prefix_Postfix                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           11/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int i = 10;
	int j = 10;
	int k = 0;
	printf("\ti=%d\tj=%d\tk=%d\n", i, j, k);
	//k = i++ + j--;
    k = i++ + --j + i--;
	printf("\ti=%d\tj=%d\tk=%d\n",i, j, k);
	return 0;
}







/*
int main()
{
	int i = 10;
	int j = 10;
	int result = 0;

    printf("i = %d\n", i);
	result = --i; //prefix application
  
	printf("i = %d\tResult = %d\n", i,result);
    
	//result = 0;
	//printf("j = %d\n", j);
	//j--; //postfix application

	printf("j = %d\tResult = %d\n", j,result);
    return 0;
}
*/
