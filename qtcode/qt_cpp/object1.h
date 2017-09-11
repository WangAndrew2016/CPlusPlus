#ifndef OBJECT1_H
#define OBJECT1_H

#include <QObject>

class object1 : public QObject
{
    Q_OBJECT

public:
    object1() { m_value = 0; }

    int value() const { return m_value; }

public slots:
    void setValue(int value);

private:
    int m_value;
};

#endif
