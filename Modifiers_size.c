#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int main(void){

	printf("Size of short integer     : %zu bytes\n", sizeof(short int));
	printf("Size of signed integer    : %zu bytes\n", sizeof(signed int));
	printf("Size of unsigned integer  : %zu bytes\n", sizeof(unsigned int));
	printf("Size of long integer 	  : %zu bytes\n", sizeof(long int));
	printf("Size of long long integer : %zu bytes\n", sizeof(long long int));

	printf("Size of char              : %zu bytes\n", sizeof(char));
	printf("Size of wchar_t           : %zu bytes\n", sizeof(wchar_t));
	return EXIT_SUCCESS;
}
