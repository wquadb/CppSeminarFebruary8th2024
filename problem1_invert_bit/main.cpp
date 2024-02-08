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

void printBinNumber(unsigned short n)
{
    unsigned short mask = 0x8000;
    for (size_t i = 0; i < sizeof(unsigned short) * 8; ++i)
    {
        std::cout << (n & mask);
        mask = mask >> 1;
    }
}

int main()
{
    unsigned short n = 300;
    std::cout << "inishial n: " << n << " " << std::hex << n << " ";
    printBinNumber(n);
    n = invertIthBit(n, 5);
    std::cout <<"\nchange bit 5: " <<  n << " " << std::hex << n << " ";
    printBinNumber(n);



    return 0;
}
