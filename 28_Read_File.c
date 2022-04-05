/****************************************************************************
 *                                                                          *
 * File    : 28_Read_File                                                         *
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
	FILE *file_ptr = fopen("b:/impetus.txt","r");

	int rollno;
	char name[10];

	fscanf(stdin,"%d %9s",&rollno,name);
    printf("Roll number = %-10dName = %s\n",rollno,name);
    
	/*do{
	fscanf(stdin,"%d %9s",&rollno,name);
    printf("Roll number = %-10dName = %s\n",rollno,name);
    }while(1);*/

	/*while(fscanf(file_ptr,"%d %9s",&rollno,name)){
    printf("Roll number = %-10dName = %s\n",rollno,name);
    }*/

	/*
    while(1){
		fscanf(file_ptr,"%d %9s",&rollno,name);
		printf("Roll number = %-10dName = %s\n",rollno,name);
        if(feof(file_ptr)){
			break;
		}
		
    }

	*/
	fclose(file_ptr);
	return 0;
}

