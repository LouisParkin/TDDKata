#include "myclass.h"
#include <stdexcept>

#include <QStringList>

My_Class::My_Class()
{
}


My_Class::~My_Class()
{
}

int My_Class::calculate(const QString input)
{
  QStringList list = input.split(",");
  if(list.size() > 2)
  {
    std::string x = std::string("Too many elements!");
    throw std::runtime_error(x);
  }


  return 0;
}

