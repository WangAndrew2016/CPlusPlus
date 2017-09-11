#ifndef OBJECT2_H
#define OBJECT2_H

#include <QObject>
#include <iostream>

class object2 : public QObject
{
    Q_OBJECT

public:
    object2() { std::cout << "this is class object2 object" << std::endl;}
    void valueevent(int newValue);

signals:
    void valueChanged(int newValue);

};

#endif
