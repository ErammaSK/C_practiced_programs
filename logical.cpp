// logical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{

	printf("****AND OPERATION*****\n");
	printf("(0 && 0): %d\n", (0 && 0));
	printf("(0 && 0): %d\n", (0 && 1));
	printf("(0 && 0): %d\n", (1 && 0));
	printf("(0 && 0): %d\n", (1 && 1));

	printf("****OR OPERATION*****\n");
	printf("(0 || 0): %d\n", (0 || 0));
	printf("(0 || 0): %d\n", (0 || 1));
	printf("(0 || 0): %d\n", (1 || 0));
	printf("(0 || 0): %d\n", (1 || 1));

	printf("****XOR OPERATION*****\n");
	printf("(0 ^ 0): %d\n", (0 ^ 0));
	printf("(0 ^ 0): %d\n", (0 ^ 1));
	printf("(0 ^ 0): %d\n", (1 ^ 0));
	printf("(0 ^ 0): %d\n", (1 ^ 1));

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
