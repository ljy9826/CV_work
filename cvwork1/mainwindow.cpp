#include "mainwindow.h"
#include "ui_mainwindow.h"

CVIO m_CVIO;
//img_color m_img_color;

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

void MainWindow::on_toolButton_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this,tr("选择图像"),"",tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
    if(filename.isEmpty())
    {
        return;
    }
    else
    {
        ui->pathlabel->setText(filename);

        string str = filename.toStdString();  // 将filename转变为string类型；
        m_CVIO.src_path = str;
    }
}

void MainWindow::on_OpenImgButton_clicked()
{
    m_CVIO.img_in();
//    m_CVIO.img_out("aaa",m_CVIO.src,0);
    m_CVIO.showimg(m_CVIO.src,ui->SrcImglabel);
}

void MainWindow::on_WorkButton1_clicked()
{
    new_win = new FirstWork;
    new_win->process(m_CVIO.src);
    new_win->show();

//    Mat grey = m_img_color.RGBtoGrey(m_CVIO.src);
//    Mat grey_hist = m_img_color.calcHistogram(grey);
//    Mat rgb = m_img_color.GreyToRGB(grey);
//    m_CVIO.showimg(m_CVIO.src,new_win->ui->srclabel);
}
