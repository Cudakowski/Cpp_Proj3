#include "X01.h"

X01::X01(): X07() {}
X01::X01(int val): X07(val) {}
void X01::Write()
{
    std::cout<<"&&&";
    X07::Write();
    std::cout<<"&&&";
}