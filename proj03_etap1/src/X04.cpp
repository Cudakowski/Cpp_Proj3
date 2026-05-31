#include "X04.h"

X04::X04(): v{1} {}
X04::X04(int val): v{val} {}
void X04::Write()
{
    std::cout<<"!";
    std::cout<<v;
    std::cout<<"!";
}