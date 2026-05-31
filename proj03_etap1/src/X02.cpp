#include "X02.h"

X02::X02(): X03() {}
X02::X02(int val): X03(val) {}
void X02::Write()
{
    std::cout<<"???";
    X03::Write();
    std::cout<<"???";
}