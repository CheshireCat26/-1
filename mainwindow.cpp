#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->label_1->setStyleSheet("QLabel {background-color : red;}");
    ui->label_4->setStyleSheet("QLabel {background-color : black;}");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setStyleSheet("QLabel {background-color : blue;}");
    ui->label_3->setStyleSheet("QLabel {background-color : orange;}");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label_1->setStyleSheet("QLabel {background-color : green;}");
    ui->label_3->setStyleSheet("QLabel {background-color : pink ;}");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label_2->setStyleSheet("QLabel {background-color : rgb(255, 0, 255);}");
    ui->label_4->setStyleSheet("QLabel {background-color : rgb(250, 128, 114) ;}");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->label_1->setStyleSheet("QLabel {background-color : rgb(128, 0, 0);}");
    ui->label_4->setStyleSheet("QLabel {background-color : rgb(75, 0, 130) ;}");
}

void MainWindow::mousePressEvent(QMouseEvent * event)
{
    ui->label_1->setStyleSheet("QLabel {background-color : white;}");
    ui->label_2->setStyleSheet("QLabel {background-color : white;}");
    ui->label_3->setStyleSheet("QLabel {background-color : white;}");
    ui->label_4->setStyleSheet("QLabel {background-color : white;}");
}
