/****************************************************************************
 *                                                                          *
 * File    : 63_Accept_Single_Digit_Dispaly_Words                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           10/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

// Accept The single digit integer and display in the words
// Accept  - (0-9)
// Display - (one-Nine)

#include <stdio.h>
#include <stdlib.h>

//int main()
//a{
    //int number;
    //char numberInWord;
    
    //printf("Please Enter Any Single integer");
    //scanf("%i",&number);
    
	//Alternative 1:
	// no recommended since all the conditions are checked when the number is a single digit number
    // if((number/10)==0)
    // {
        // if(number==0)
          // printf("number = Zero\n");              
        // if(number==1)
          // printf("number = One\n");
        // if(number==2)
          // printf("number = Two\n");
        // if(number==3)
          // printf("number = Three\n");
        // if(number==4)
          // printf("number = Four\n");              
        // if(number==5)
          // printf("number = Five\n");
        // if(number==6)
          // printf("number = Six\n");
        // if(number==7)
          // printf("number = Seven\n");
        // if(number==8)
          // printf("number = Eight\n");
        // if(number==9)
          // printf("number = Nine\n");
    // }   
    // else
    // {
     // printf("\'%d\' is not Single Digit Number.\n",number);   
    // }

    
    
//2

//4 (0-4 & 5-9)
  
/*
  number = abs(number); 
    if ((number / 10) == 0)
    {
        if (number <= 4)
        {
            if (number == 4)
                printf("num == four");
            if (number == 3)
                printf("num == Three");
            if (number == 2)
                printf("num == Two");
            if (number == 1)
                printf("num == one");
            if (number == 0)
                printf("num == Zero");
        }
        else
        {
            if (number == 5)
                printf("num == Five");
            if (number == 6)
                printf("num == Six");
            if (number == 7)
                printf("num == Seven");
            if (number == 8)
                printf("num == Eight");
            if (number == 9)
                printf("num == Nine");
        }
    }
    else
        printf("%i is not single digit integer", number);
    fflush(stdout);
*/
 
  
//3  
 /*      // Computes the absolute value of an integer number.
    number = abs(number);
    if ((number / 10) == 0)
    {
        if (number == 0)
        {
            printf("number = Zero");
        }
        else
        {
            if (number == 1)
            {
                printf("number = One");
            }
            else
            {
                if (number == 2)
                {
                    printf("number = Two");
                }
                else
                {
                    if (number == 3)
                    {
                        printf("number = Three");
                    }
                    else
                    {
                        if (number == 4)
                        {
                            printf("number = Four");
                        }
                        else
                        {
                            if (number == 5)
                            {
                                printf("number = Five");
                            }
                            else
                            {
                                if (number == 6)
                                {
                                    printf("number = Six");
                                }
                                else
                                {
                                    if (number == 7)
                                    {
                                        printf("number = Seven");
                                    }
                                    else
                                    {
                                        if (number == 8)
                                        {
                                            printf("number = Eight");
                                        }
                                        else
                                        {
                                            printf("number = Nine");

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("\'%d\' is not Single Digit Number.", number);
    }
    fflush(stdout);
*/

//4 even odd

/*
     number = abs(number);
    if ((number / 10) == 0)
    {
        //Check for even single digits integers
        if ((number % 2) == 0)
        {
            if (number == 0)
            {
                printf("number = Zero");
            }
            else
            {
                if (number == 2)
                {
                    printf("number = Two");
                }
                else
                {
                    if (number == 4)
                    {
                        printf("number = Four");
                    }
                    else
                    {
                        if (number == 6)
                        {
                            printf("number = Six");
                        }
                        else
                        {
                            printf("number = Eight");
                        }
                    }
                }
            }
        }
        else
        {
             //Check for odd single digits integers
            if (number == 1)
            {
                printf("number = One");
            }
            else
            {
                if (number == 3)
                {
                    printf("number = Three");
                }
                else
                {
                    if (number == 5)
                    {
                        printf("number = Five");
                    }
                    else
                    {
                        if (number == 7)
                        {
                            printf("number = Seven");
                        }
                        else
                        {
                            printf("number = Nine");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("\'%d\' is not Single Digit Number.", number);
    }
    
  

    return 0;
}
*/

int main(void)
{
   int digit;

   printf("Please Inter The Single Digit Integer(0-9) : ");
   scanf("%i",&digit);

   printf("Start\n");

   switch(digit)
   {
	 case 0:
	       printf("The Digit Is Zero\n");
	       break;
 
	 case 1:
	       printf("The Digit Is one\n");
	       break;
	case 2:
	       printf("The Digit Is Two\n");
	       break;
	case 3:
	       printf("The Digit Is Three\n");
	       break;
	case 4:
	       printf("The Digit Is Four\n");
	       break;
	case 5:
	       printf("The Digit Is Five\n");
	       break;
	case 6:
	       printf("The Digit Is Six\n");
	       break;
	case 7:
	       printf("The Digit Is Seven\n");
	       break;
	case 8:
	       printf("The Digit Is Eight\n");
	       break;
	case 9:
	       printf("The Digit Is Nine\n");
	       break;
	default:
	       printf("invalid Single digit Integer. \nPlease try again ...\n");
	       break;
      }

	printf("End\n");

	return EXIT_SUCCESS;

}

