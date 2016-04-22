#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <QString>

class My_Class 
{
public:
    
    My_Class();
    ~My_Class();
    friend class Test_MyClass; //for easy testing

    static int calculate(const QString input);

private:
    
};

#endif // MY_CLASS_H
