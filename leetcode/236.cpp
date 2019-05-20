#include <iostream>
#include <math.h>

using namespace std;

int getLayer(int index)
{
    int n = 0;
    int pow_val = 0;

    while(pow_val <= index)
    {
        pow_val = pow(2, n) - 1;
        ++n;
    }
    
    return n - 1;
}

int getParentIndex(int index)
{
    int layer = getLayer(index);
    int pos = index - (pow(2, layer - 1) - 1);

    int parentIndex = 0;

    while(pow(2, parentIndex) < index)
    {
        ++parentIndex;
    }

    return parentIndex;
}

int main()
{
    return 0;
}
