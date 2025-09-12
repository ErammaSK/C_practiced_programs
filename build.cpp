// build.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int getSumOfDigits(int arg); //Function Prototype

int main() //Main Function
{
    int var = 12345; //Actual argument
    printf("sum of digits for <12345> num is: %d\n", getSumOfDigits(var)); //Function Calling
    return 0;
}

int getSumOfDigits(int var) //Calling Function
{
    //var is called 'formal argument'
    int digit = 0;
    int sum_of_digits = 0;
    while (var > 0)
    {
        digit = var % 10; //Last digit
        sum_of_digits += digit;
        var /= 10;
    }
    return sum_of_digits;
}
zqr - fksc - nto
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
