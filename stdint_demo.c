#include<stdio.h>
#include <stdint.h>

int main()
{
	int8_t int8;  		/*	8 bit signed integer	*/
	uint8_t uint; 		/*	8 bit unsigned integer	*/

	int16_t int16;  	/*	16 bit signed integer	*/
	uint16_t uint16; 	/*   16 bit unsigned integer*/

	int32_t int32;  	/*	32 bit signed integer	*/
	uint32_t uint32; 	/*   32 bit unsigned integer*/

	int64_t int64;  	/*	64 bit signed integer	*/
	uint64_t uint64; 	/*   64 bit unsigned integer*/
	

	/*
		8 bit signed integer
	*/
	printf("\nSize of integer = %u  bytes", sizeof(int8));
	printf("\nLargest Value = %d\tSmallest Value = %d",INT8_MAX,INT8_MIN);

	/*
		8 bit unsigned integer
	*/
	printf("\nSize of unsigned integer = %u  bytes", sizeof(uint8_t));
	printf("\nLargest Value = %d", UINT8_MAX);

	/*
		16 bit signed integer
	*/
	printf("\n\nSize of signed integer = %u  bytes", sizeof(int16_t));
	printf("\nLargest Value = %d\tSmallest Value = %d", INT16_MAX,INT16_MIN);

	/*
		16 bit unsigned integer
	*/
	printf("\nSize of unsigned integer = %u  bytes", sizeof(uint16_t));
	printf("\nLargest Value = %u", UINT16_MAX);

	/*
		32 bit signed integer
	*/
	printf("\n\nSize of signed integer = %u  bytes", sizeof(int32_t));
	printf("\nLargest Value = %d\tSmallest Value = %d", INT32_MAX,INT32_MIN);

	/*
		32 bit unsigned integer
	*/
	printf("\nSize of unsigned integer = %u  bytes", sizeof(uint32_t));
	printf("\nLargest Value = %u", UINT32_MAX);

	/*
		64 bit signed integer
	*/
	printf("\n\nSize of signed integer = %u  bytes", sizeof(int64_t));
	printf("\nLargest Value = %lld\tSmallest Value = %lld", INT64_MAX,INT64_MIN);

	/*
		64 bit unsigned integer
	*/
	printf("\nSize of unsigned integer = %u  bytes", sizeof(uint64_t));
	printf("\nLargest Value = %llu", UINT64_MAX);


	return 0;
}
