// Increment_decrement_pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int v1 = 10;
    char v2 = 34.4f;

    int *ptr = &v1;
    char *ptr1 = &v2;

    printf("Address of ptr 0x%x\n", ptr);
    printf("Address of ptr2 0x%x\n\n", ptr1);

    ptr++;
    ptr1++;

    printf("Increment-Address of ptr 0x%x\n", ptr);
    printf("Increment-Address of ptr1 0x%x\n\n", ptr1);

    ptr--;
    ptr1--;

    printf("Decrement-Address of ptr 0x%x\n", ptr);
    printf("Decrement-Address of ptr1 0x%x\n\n", ptr1);

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
