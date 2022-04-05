/****************************************************************************
 *                                                                          *
 * File    : 27_Today_Date                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           04/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int day;
	int month;
	int year;
	char unit_of_measurement[4];
	
	printf("Enter today\'s date (dd/mm/yyyy) : ");
	
	scanf("%d%*c%d%*c%d",&day,&month,&year);
	
	printf("Today\'s date is %d/%d/%d\n",day,month,year);
 
    scanf("%*f%3s",unit_of_measurement);

	printf("Unit of measurement is %s\n",unit_of_measurement);
   return 0;
}
























