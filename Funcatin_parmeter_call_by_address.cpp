// Funcatin_parmeter_call_by_address.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void fun(int* arg1, int* arg2)
{
    printf("Address of arg1 0x%x, arg2 0x%x\n", arg1, arg2);
    printf("fun(): values of arg1 %d, arg2 %d\n", *arg1, *arg2);
    (*arg1)++;
    (*arg2)++;
    printf("fun(): values of arg1 %d, arg2 %d after increment\n\n", *arg1, *arg2);
}

int main()
{
    int _arg1 = 100;
    int _arg2 = 200;

    printf("main(): Address of arg1 0x%x, arg2 0x%x\n", &_arg1, &_arg2);
    printf("main(): values of arg1 %d, arg2 %d\n\n", _arg1, _arg2);

    fun(&_arg1, &_arg2);

    printf("main(): values of arg1 %d, arg2 %d aftr function called\n", _arg1, _arg2);

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
