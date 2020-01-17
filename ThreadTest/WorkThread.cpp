#include <memory>
#include "WorkThread.h"
#include "MyTest.h"

using namespace std;

WorkThread::WorkThread()
{

}

WorkThread::~WorkThread()
{

}

void WorkThread::run()
{
    auto myTest = make_shared<MyTest>();
    emit signalsTest(myTest);
}
