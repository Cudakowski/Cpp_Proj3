#include "X06.h"

X06::X06(): X01(),X05(),X02() {}
X06::X06(int val): X01(val),X05(val),X02(val) {}
void X06::Write()
{
    std::cout<<"===";
    X01::Write();
    X05::Write();
    X02::Write();
    std::cout<<"===";
}