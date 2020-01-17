#ifndef MYTEST_H
#define MYTEST_H

#include <QObject>

class MyTest : public QObject
{
    Q_OBJECT

public:
    explicit MyTest(QObject *parent = nullptr);
    explicit MyTest(const MyTest &myTest, QObject *parent = nullptr);
    QString getString() {return testString;}

signals:

public slots:

private:
    QString testString;
};

Q_DECLARE_METATYPE(MyTest)

#endif // MYTEST_H
