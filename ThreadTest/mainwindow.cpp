//#include <QMetaType>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WorkThread.h"
#include "MyTest.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qRegisterMetaType<std::shared_ptr<MyTest>>("std::shared_ptr<MyTest>");
    qRegisterMetaType<std::shared_ptr<MyTest>>("std::shared_ptr<MyTest>&");
    workThread = std::make_shared<WorkThread>();
    connect(workThread.get(), &WorkThread::signalsTest, this, &MainWindow::slotsTest);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //ui->textBrowser->setText("This is a test string.");
    workThread->start();
}

void MainWindow::slotsTest(std::shared_ptr<MyTest> myTest)
{
    ui->textBrowser->setText(myTest->getString());
}
