// pointer_based_on_data_type_size.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int v1 = 20;
    float v2 = 20.5f;
    char v3 = 'B';
    double v4 = 45.5;

    int* p1 = &v1;
    float* p2 = &v2;
    char* p3 = &v3;
    double* p4 = &v4;

    printf("sizeof(*p1):%d\n", sizeof(*p1));
    printf("sizeof(*p2):%d\n", sizeof(*p2));
    printf("sizeof(*p3):%d\n", sizeof(*p3));
    printf("sizeof(*p4):%d\n", sizeof(*p4));

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
