#include "object1.h"
#include <iostream>

void object1::setValue(int value)
{
    std::cout << "call slot setValue" << std::endl;
    m_value = value;
}
