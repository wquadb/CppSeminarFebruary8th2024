///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Sum of Two Numbers
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads two integers from the standard input and calculates
/// their sum using pointers. Print the result.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int* ptrA = &a;
    int* ptrB = &b;

    int sum = *ptrA + *ptrB;

    std::cout << sum;

    return 0;
}
