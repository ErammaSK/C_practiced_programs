// loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Even number within 10\n");
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
    printf("\n");
    printf("odd number within 10\n");

    int j = 0;
    while (j < 10)
    {
        if (j % 2 != 0)
        {
            printf("%d", j);
        }
        ++j;
    }
    printf("\n");
    printf("Number divisble by 5 with in 30\n");
    int k = 0;
    do
    {
        if (k % 5 == 0)
        {
            printf("%d", k);
        }
        k++;
    }while (k < 30);

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
