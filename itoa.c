
#include <stdio.h>
#include <stdlib.h>

/****************************************************************************
 
 * Purpose : Data types : Char type                                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           26/02/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(void)
{
    int idata = 77;
	char buffer[50];
	
	_itoa(idata,buffer,2);
	printf("Decimal : %d\tBinary : %s\n",idata,buffer);
	
	_itoa(idata,buffer,8);
	printf("Decimal : %d\tOctal  : %s\n",idata,buffer);

	_itoa(idata,buffer,10);
	printf("Decimal : %d\tDecimal: %s\n",idata,buffer);

	_itoa(idata,buffer,16);
	printf("Decimal : %d\tHexadecimal : %s\n",idata,buffer);

    return 0;
}

