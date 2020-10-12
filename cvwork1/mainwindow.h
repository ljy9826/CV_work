#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDesktopServices>
#include <QDebug>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QLabel>
#include <QFileDialog>
#include <iostream>

#include "cvio.h"
//#include "img_color.h"

#include "firstwork.h"

using namespace std;


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
    void on_toolButton_clicked();

    void on_OpenImgButton_clicked();

    void on_WorkButton1_clicked();

public:
    FirstWork *new_win;

private:
    Ui::MainWindow *ui;
};

//extern img_color m_img_color;

#endif // MAINWINDOW_H
