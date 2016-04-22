#ifndef TEST_MYCLASS_H
#define TEST_MYCLASS_H

#include <QString>
#include <QtTest>
#include <QVector>
#include <QList>
#include <QDebug>
#include <iostream>

#include <myclass.h>

class Test_MyClass: public QObject
{
    Q_OBJECT

public:
    Test_MyClass();
    ~Test_MyClass();

private Q_SLOTS:
    void test_valid1();
    void test_valid2();
    void test_valid3();
    void test_valid4();
    void test_valid5();
    void test_valid6();
    void test_valid7();
};

#endif // TEST_MY_CLASSH
