/****************************************************************************
 *                                                                          *
 * File    : 108_Recursive_4.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           22/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 * Reverse : recursive
 */

long long int reverse(int);
long long int reverseRec(int, long long int);
long long int basepow(int,int);
int sumofDigits(int num);
int main(void)
{
    int num;
    long long int rev;
    int base;
    int power;
    long long int result;
    printf("Please enter the base:");
    scanf("%i",&base);
    printf("Please enter the power:");
    scanf("%i",&power);
    result = basepow(base,power);
    printf("%d^%d=%lld\n",base,power,result);
    
    printf("Please enter a integer :");
    scanf("%i", &num);
    printf("Sum of digits of %d = %d\n",
           num,sumofDigits(num));
    
    rev = reverse(num);
    printf("The reverse of %d = %lld\n", num, rev);
    rev = reverse(num);
    printf("The reverse of %d = %lld\n", num, rev);
     
    return (EXIT_SUCCESS);
}

//long long int reverse(int num)
//{
//    int digit;
//    long long int rev = 0;
//    while (abs(num) != 0)
//    {
//        digit = num % 10;
//        rev = (rev * 10) + digit;
//        num = num / 10;
//    }
//    return rev;
//}

// recursive : reverse of a integer

long long int reverseRec(int x, long long int rev)
{
    if (x > 0)
    {
        rev = (rev * 10) + (x % 10);
        rev = reverseRec((x / 10), rev);
    }
    return ( rev);
}


// recursive : reverse of a integer using recursive function

long long int reverse(int x)
{
    return reverseRec(x,0);
}

long long int basepow(int b, int p)
{
    if (p >= 1)
    {
        return ( b * basepow(b, (p - 1)));
    }
    else
    {
        return ( 1LL );
    }
}

int sumofDigits(int num)
{//as long as it is not a single digit
    if(abs(num) > 9) 
    {
        return((num%10)+sumofDigits(num/10));
    }
    else
    {
        return num;
    }
}
