/****************************************************************************
 *                                                                          *
 * File    :45_Alignment                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           23/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdalign.h>

//c11 : Queries the alignment requirement for the specified type

struct Student //user defined type
{
	char name[20];
	int roll;
	float per;
};

int main(void)
{
	float f_array[10];

	printf("Alignment of char = %zu\n", _Alignof(char));

	printf("Alignment of char = %zu\n", alignof(char));
	
	printf("alignof (float[10]) = %zu\n", alignof(float));

    printf("alignof(float[10]) = %zu\n", alignof(f_array));

	printf("alignof (struct{char c; int n;}) = %zu\n", alignof(struct Student));
    
	2printf("Alignment of max_align_t = %zu\n", alignof(max_align_t));

    return 0;
}

