#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    std::vector<std::string>mystring = {"ni", "hao", "andy", "!"};
    std::vector<int>mynumber = {1, 3, 5, 2, 4};
   
    auto mystring_ptr = mystring.data();
    cout << "mystring_ptr is: " << *mystring_ptr << endl;
    ++mystring_ptr;
    cout << "after plus plus, the mystring_ptr is: " << *mystring_ptr << endl;

    cout << "mystring size is: " << mystring.size() << endl;
    cout << "mystring capacity is: " << mystring.capacity() << endl;
    cout << "mystring max size is: " << mystring.max_size() << endl;

    cout << "mystring is: ";
    for (auto &index : mystring)
    {
        cout << index << " ";
    }

    auto num_iterator = mynumber.begin();
    mynumber.emplace(num_iterator, 10);
    mynumber.emplace(mynumber.end(), 9);

    cout << endl << "mynumber is: ";
    for (int index : mynumber)
    {
        cout << index << " ";
    }

    std::cout << endl <<  "hello world" << std::endl;
    return 1;
}
