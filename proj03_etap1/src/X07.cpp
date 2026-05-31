#include "X07.h"

X07::X07(): X04() {}
X07::X07(int val): X04(val) {}
void X07::Write()
{
    std::cout<<"$$$";
    X04::Write();
    std::cout<<"$$$";
}