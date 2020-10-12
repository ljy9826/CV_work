#include "mainwindow.h"
#include <QApplication>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    Mat src=imread("C:/Users/LJY/Desktop/ImageUtils/resource/lenna.png");  //在qt里面读取图片貌似只支持绝对路径
//    imshow("test",src);
//    waitKey(0);

    w.show();




    return a.exec();
}
