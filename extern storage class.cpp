// extern storage class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "example.h"

int main()
{
	printf("Arthimatic Operations for arg1 = %d arg2 = %d\n", arg1, arg2);
	printf("Add(arg1, arg2): %d\n", getAdd(arg1, arg2));
	printf("Sub(arg1, arg2): %d\n", getSub(arg1, arg2));
	printf("Product(arg1, arg2): %d\n", getProd(arg1, arg2));
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
