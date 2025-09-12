// build1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void getSumOfDigits();

int main() //Main Function
{

    getSumOfDigits();
    return 0;
}

void getSumOfDigits() //Calling Function
{
    int var = 12345;
    //var is called 'formal argument'
    int digit = 0;
    int sum_of_digits = 0;
    while (var > 0)
    {
        digit = var % 10; //Last digit
        sum_of_digits += digit;
        var /= 10;
    }
    printf("sum of digits for <12345> num is: %d\n", sum_of_digits);
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
