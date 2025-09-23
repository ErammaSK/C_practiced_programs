// The_array_can_be_passed_to_function_as_single(or)whole_array_at_time.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
void fun1(int x)
{
    printf("%d-->", x);
}
void fun2(int arr[], int size)
{
    for (int i = 0; i < 5; ++i)
    {
        printf("%d-->", arr[i]);
    }
}
void fun3(int* arr, int size)
{
    for (int i = 0; i < 5; ++i)
    {
        printf("%d-->", arr[i]);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("Individual element to function \n");
    for (int i = 0; i < 5; ++i)
    {
        fun1(arr[i]);
    }
    printf("\n\n");
    printf("Passing whole array to function \n");
    fun2(arr, 5);
    printf("\n\n");
    printf("Passing whole array to function \n");
    fun3(arr, 5);
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
