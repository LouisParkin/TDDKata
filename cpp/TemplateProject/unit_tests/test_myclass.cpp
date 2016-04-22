#include "test_myclass.h"
#include <cassert>

Test_MyClass::Test_MyClass()
{
}

Test_MyClass::~Test_MyClass()
{
}


void Test_MyClass::test_valid1()
{
    bool exc = false;
//     QCOMPARE(true, true);
  try
  {
    QCOMPARE(0,My_Class::calculate(QString("")));
  }
  catch(std::exception e)
  {
    exc = true;
    std::cout << e.what() << std::endl;
  }
    QCOMPARE(false,exc);
}

void Test_MyClass::test_valid2()
{
  QCOMPARE(1,My_Class::calculate(QString("1")));
}

void Test_MyClass::test_valid3()
{
  QCOMPARE(2,My_Class::calculate(QString("1,1")));
}

void Test_MyClass::test_valid4()
{
  bool exc = false;
  try
  {
    QCOMPARE(0,My_Class::calculate(QString(",,")));
  }
  catch(std::exception e)
  {
    exc = true;
    std::cout << e.what() << std::endl;
  }
    QCOMPARE(false,exc);
}

void Test_MyClass::test_valid5()
{
  bool exc = false;
  try
  {
    QCOMPARE(5,My_Class::calculate(QString("1,1,1,1,1")));
  }
  catch(std::exception e)
  {
    exc = true;
    std::cout << e.what() << std::endl;
  }
    QCOMPARE(false,exc);
}

void Test_MyClass::test_valid6()
{
  QCOMPARE(1,My_Class::calculate(QString("1,")));
}

void Test_MyClass::test_valid7()
{
  QCOMPARE(0,My_Class::calculate(QString("@,!")));
}


