/****************************************************************************
 *                                                                          *
 * File    : 83_Printing_Pattern                                                      *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           13/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*

				I/P = 5
					
					1
				1   2   1
			1	2	3	2	1
		1 	2 	3 	4	3	2	1
	1	2	3	4	5	4	3	2	1

*/

#include<stdio.h> 

int main()
{
    int total_rows;
   
    printf("Please Enter A Number Of Rows :");
	scanf("%i",&total_rows);

    for(int row=1;row<=5;++row)
    {
       for(int col=5;col>=row;--col){
            printf(" ");
       }
	   
       printf("\n");
    }
}



/*



			i/p = E

		A B C D E D C B A
		A B C D   D C B A 
		A B C       C B A
		A B           B A 
		A               A


#include<stdio.h>
int main()
{
	
    int alphabet;

	for(int row=0;row<=6;++row)
    {
        for(alphabet=65;alphabet<=69-row;alphabet++)
		{
            printf("%c",alphabet);
		}
        for(int col=1;col<=row*2-1;++col)
	    {
            printf(" ");
		}
        for(alphabet=69-row;alphabet>=65;--alphabet)
            if(alphabet!=69)
        printf("%c",alphabet);
        printf("\n");
    }
    

    return 0;
}
*/



/*

			I/P = 6
			
					1
				1		1
			1		2		1
		1		3		3		1
	1		4		6		4		1
1		5		10		10		5		1

				

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int total_row;
	int temp = 1;

   printf("Please Enter the number of rows: ");
   scanf("%i", &total_row);


   for (int row = 0; row < total_row; ++row) 
   {
        for (int space = 1; space <= total_row - row; space++)
	    {
             printf("  ");
		}
        for (int col = 0; col <= row; ++col)
        {
              if (col == 0 || row == 0){
				 temp = 1;
              }else{
                 temp = temp * (row - col + 1) / col;
			}
              printf("%4d", temp);
      }
      printf("\n");
   }
   return 0;
}

*/

