#include <iostream>
#include <string>
#include <vector>
#include <QObject>
#include "object1.h"
#include "object2.h"

using namespace std;

int main(int argc, char *argv[])
{
    vector<std::string>land{"hello ", "my ", "is ", "wang ", "an"};
    for(auto index : land){
        cout << index << endl;
    }

    cout << "now begin to present slot and signal" << endl;
    object1 obj1;
    object2 obj2;

    QObject::connect(&obj2, SIGNAL(valueChanged(int)), &obj1, SLOT(setValue(int)) );
    obj2.valueevent(5);
    cout << "The obj1 value is: " << obj1.value() << endl;
    cout << "Hello World!" << endl;
    return 0;
}
