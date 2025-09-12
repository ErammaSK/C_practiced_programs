// switch statment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int arg1 = 100;
    int arg2 = 300;
    int op = 0;
    do
    {
        printf("enter 2 for ADD, 3 for SUB, 4 for PROD, 5 for DIV, -3 for exit\n");
        scanf("%d", &op);

        switch (op)
        {
        case1:printf("ADD(arg1,arg2):%d\n,(arg1 + arg2)");
            break;
        case2:printf("sub(arg1,arg2):%d\n,(arg1 - arg2)");
            break;
        case3:printf("mul(arg1,arg2):%d\n,(arg1 * arg2)");
            break;
        case4:printf("div(arg1,arg2):%f\n,((flaot)arg1 / arg2)");
            break;
        default:printf("Exiting beacuse user choose exit\n");
        }
    } while (op != -1);
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
