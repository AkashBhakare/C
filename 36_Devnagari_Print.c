/****************************************************************************
 *                                                                          *
 * File    :36_Devnagari_Print                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           12/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <wchar.h>
#include <locale.h>
#include <wctype.h>
#include <stdio.h>

int main()
{
	wchar_t hebrew_str[] = L"\u05D0 \u05D1 \u05E1 \u05D3 u05EA";
	//wchar_t devnagri_str[100] = L"\U+0906\U+0915\U+0936";   //????
	wchar_t devnagri_str[100] = L"\u0905\u092E\u0930\u0967\u0968";
	wchar_t ch;

	FILE *fp = fopen("impetus.txt", "r");
	setlocal(LC_ALL, "en_US.UTF-8");
	wprintf(L"%ls\n",hebrew_str);
    wprintf(L"%ls\n",devnagri_str);

    wprintf(L"What's your name ? ");
	wscanf_s(L"%20S", devnagri_str,sizeof(devnagri_str));
	wprintf(L"Welcome %ls\n", devnagri_str);

    fclose(fp);
    return 0;
}

