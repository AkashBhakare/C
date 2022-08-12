/****************************************************************************
 *                                                                          *
 * File    : 116_VarArgs3.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdarg.h>
 
int vout(int max, ...);
 
int main(void)
{
   vout(2, "Sat", "Sun");
   printf("\n");
   vout(3, "Mon", "Tues", "Wed");
}
 
int vout(int max, ...)
{
   va_list arg_ptr;
   va_list args_copy;
   int args;
   const char *day;
   va_start(arg_ptr, max);
//   void va_copy( va_list dest, va_list src );
// va_copy() initializes dest as a copy of src , as if va_start() 
// had been applied to dest followed by the same sequence of uses 
// of va_arg() as had previously been used to reach the present 
// state of src. 
   va_copy(args_copy, arg_ptr);
   args = 0;
   while(args < max)
   {
//    va_arg() function returns the current argument
//    va_arg() function retrieves a value of the given var_type 
//    from the location given by arg_ptr, and increases arg_ptr 
//    to point to the next argument in the list.
//    The va_arg() function can retrieve arguments from the list 
//    any number of times within the function. 
      day = va_arg(arg_ptr, const char *);
      printf("Day: %s\n", day);
      args++;
   }
//  va_end() function is needed to indicate the end of parameter scanning.
//  Each call of va_start() and va_copy() must be matched by a corresponding 
//  call to va_end() in the same function. 
   va_end(arg_ptr);

   args = 0;
   while(args < max)
   {
      day = va_arg(args_copy, const char *);
      printf("Day: %s\n", day);
      args++;
   }
   va_end(args_copy);
}

/*
 * Because it is not always possible for the called function 
 * to determine how many arguments there are, the calling function 
 * should communicate the number of arguments to the called function. 
 * To determine the number of arguments, a function can use a null 
 * pointer to signal the end of the list or pass the count of the 
 * optional arguments as one of the required arguments. 
 * The printf() function, for instance, can tell how many arguments 
 * there are through the format-string argument.
 */
