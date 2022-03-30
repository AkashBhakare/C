/****************************************************************************
 *                                                                          *
 * File    :18_Integer_Extraction                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           26/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
/*Integer Extraction */

int main(void)
{
	int ivar;
	printf("Pleaase enter a integer : ");

	//scanf("%d", &ivar);
	scanf("%i", &ivar);

	printf("Integer = %d\n", ivar);
    return 0;
}

