///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Toggle Bit
/// \version    0.1.0
/// \date       24.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that takes an integer n and a position k as input. The program
/// should toggle (invert) the k-th bit of the integer n (i.e., change 0 to 1 and 
/// 1 to 0) and print the resulting number in binary and decimal forms.
///
///////////////////////////////////////////////////////////////////////////////

#include <cstdint>
#include <iostream>

unsigned short invertIthBit(unsigned short n, uint8_t k)
{
    unsigned short mask = 0x1 << k;
    return n ^ mask;
}

void printBinary(unsigned char v) {
    int i;
    for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
}

int main()
{
    unsigned short n = 0b10101010;
    uint8_t k = 1;

    std::cout << "initial number - " << n << " | in binary - ";
    printBinary(n);
    std::cout << std::endl;

    n = invertIthBit(n, k);

    std::cout <<"changed number - " << n << " | in binary - ";
    printBinary(n);
    std::cout << std::endl;

    return 0;
}
