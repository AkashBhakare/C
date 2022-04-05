/****************************************************************************
 *                                                                          *
 * File    : 25_Assignment_Vechile_Number                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Print Vechile Numbers


int main(){
	int district_code;
	int vehicle_number;

	printf("Enter your Vehicle Registration Number :");
	scanf("%*2c%d%*2c%d",&district_code,&vehicle_number);
	printf("disrtict code = %d\tVehicle number = %d\n",district_code,vehicle_number);
	return 0;
}

/*
#include <stdio.h>
int main(){
	int district_code;
	int vehicle_number;
	printf("Enter your Vehicle Registration Number :");
	//scanf("%*2c%d%*2c%d", &district_code, &vehicle_number);
	scanf("%*[A-Z,a-z]%d%*[A-Z,a-z]%d", &district_code, &vehicle_number);
	printf("district code = %d\tVehicle number = %d",district_code,vehicle_number);
	return 0;
}

*/
