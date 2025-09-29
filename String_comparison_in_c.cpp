// String_comparison_in_c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//The strcmp(first_string, second_string) function compares two string and returns 0 if both strings are equal.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20], str2[20];

    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character left by fgets
    //strcspn = string complement span
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

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
