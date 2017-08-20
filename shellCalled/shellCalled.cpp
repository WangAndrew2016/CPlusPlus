#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    int ret = system("ls");
    cout << "The return value is " << ret << endl;
    return 0;
}
