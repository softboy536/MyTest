#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <memory>
#include <QMainWindow>

using namespace std;
class WorkThread;
class MyTest;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void slotsTest(std::shared_ptr<MyTest> myTest);

private:
    Ui::MainWindow *ui;
    shared_ptr<WorkThread> workThread;
};

#endif // MAINWINDOW_H
