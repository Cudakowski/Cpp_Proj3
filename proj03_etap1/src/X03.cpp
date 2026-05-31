#include "X03.h"

X03::X03(): X04() {}
X03::X03(int val): X04(val) {}
void X03::Write()
{
    std::cout<<"@@@";
    X04::Write();
    std::cout<<"@@@";
}