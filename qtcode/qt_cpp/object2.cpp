#include "object2.h"

void object2::valueevent(int newValue)
{
    std::cout << "event function, call signal valuechanged" << std::endl;
    emit valueChanged(newValue);
}
