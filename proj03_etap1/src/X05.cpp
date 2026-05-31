#include "X05.h"

X05::X05(): X07(), X03() {}
X05::X05(int val): X07(val), X03(val) {}
void X05::Write()
{
    std::cout<<"***";
    X07::Write();
    X03::Write();
    std::cout<<"***";
}