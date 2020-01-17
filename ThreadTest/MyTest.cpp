#include <QMetaType>
#include "MyTest.h"

MyTest::MyTest(QObject *parent) : QObject(parent)
{
    qRegisterMetaType<MyTest>("MyTest");
    qRegisterMetaType<MyTest>("MyTest&");
    testString = "This is a test string--1";
}

MyTest::MyTest(const MyTest &myTest, QObject *parent) : QObject(parent)
{
    testString = myTest.testString;
}
