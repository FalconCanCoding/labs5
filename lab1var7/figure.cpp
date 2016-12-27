#include <iostream>

#include "figure.h"

Figure::Figure()
{
    std::cout << "Figure Constructor called!" << std::endl;
}
Figure::~Figure()
{
    std::cout << "Figure Destructor called!" << std::endl;
}
double Figure::GetPerimetr()
{
    std::cout << "Common Figure can't have a perimetr!" << std::endl;
    return 0;
}
void Figure::PrintName()
{
    std::cout << "Abstract Figure" << std::endl;
}

