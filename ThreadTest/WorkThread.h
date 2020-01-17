#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QThread>

class MyTest;

class WorkThread : public QThread
{
    Q_OBJECT

public:
    WorkThread();
    ~WorkThread();

private:
    virtual void run();

signals:
    void signalsTest(std::shared_ptr<MyTest> myTest);

public slots:
};

#endif // WORKTHREAD_H
