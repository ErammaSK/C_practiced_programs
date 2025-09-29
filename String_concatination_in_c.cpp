// String_concatination_in_c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//The strcat(first_string, second_string) function concatenates two strings and result is returned to first_string.
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30] = { 'h','e','l','l','o','\0' };
    char ch2[20] = { 'w','o','r','l','d','\0' };
    strcat_s(ch, ch2);
    printf("Value of first string is: %s\n", ch);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
