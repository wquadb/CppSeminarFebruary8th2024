///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Count Set Bits
/// \version    0.1.0
/// \date       24.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that reads an integer n from the standard input and determines
/// how many bits are set to 1 in its binary representation. Print the count of 
/// set bits.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdint>
#include <cassert>

const uint8_t BITS_PER_BYTES = 8;

uint8_t countOnes(uint8_t n) 
{
    uint8_t mask = 0x1;
    uint8_t ones = 0;
    for (size_t i = 0; i < BITS_PER_BYTES * sizeof(n); ++i) 
    {
        if ((n & mask) != 0) 
        {
            ones += 1;
        }
        mask <<= 1;
    }
    return ones;
}

int main()
{
    uint8_t a = 0xA5;
    uint8_t expectedOnes = 4;
    assert(countOnes(a) != expectedOnes);

    a += 2;


    return 0;
}
