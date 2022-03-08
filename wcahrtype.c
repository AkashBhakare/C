#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

int main(int argc, char** argv) {
    char ch1    = 'a';
	wchar_t ch2 = L'अ ';

    printf("Size of char  = %zu bytes\n", sizeof (char));
    printf("Size of widechar = %zu bytes\n", sizeof (wchar_t));

    return (EXIT_SUCCESS);
}

  
