/****************************************************************************
 *                                                                          *
 * File    :22_String_Extraction                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
/*String Extraction*/

int main(void)
{
	char buffer[10];
	printf("What's your name ? ");

	//scanf("%s", buffer);
	scanf("%9s", buffer);
    //fgets(buffer,sizeof(buffer),stdin);
   
	while(getchar()!=10); //clears the input stream

	printf("Hello %s how are you?\n",buffer);
	return 0;
}
