#include "firstwork.h"
#include "ui_firstwork.h"

//CVIO m_CVIO;
img_color m_img_color;

FirstWork::FirstWork(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstWork)
{
    ui->setupUi(this);
}

FirstWork::~FirstWork()
{
    delete ui;
}

void FirstWork::process(Mat src)
{
    Mat grey = m_img_color.RGBtoGrey(src);
    Mat grey_hist = m_img_color.calcHistogram(grey);
    Mat rgb = m_img_color.GreyToRGB(grey);
    m_CVIO.showimg(m_CVIO.src,ui->srclable);
    m_CVIO.showimg(grey,ui->greylable);
    m_CVIO.showimg(grey_hist,ui->histlable);
    m_CVIO.showimg(rgb,ui->rgblable);
}

