// coditional statment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int var = 100;
    if (var % 2 == 0)
    {
        printf("%d is even\n", var);
    }

    int var1 = -100;
    if (var1 > 0)
    {
        printf("%d is positive\n", var1);
    }
    else
    {
        printf("%d is negative\n", var1);
    }

    int grade = 90;
    if (grade > 90 && grade < 80)
    {
        printf("Student is A+_ grade");
    }
    else if (grade > 80 && grade < 70)
    {
        printf("Student is A grade\n");
    }
    else if (grade > 70 && grade < 60)
    {
        printf("Student is B grade\n");
    }
    else
    {
        printf("Student is not eligible for grade\n");
    }

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
