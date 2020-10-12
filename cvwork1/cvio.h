#ifndef CVIO_H
#define CVIO_H

#include <iostream>
#include <QLabel>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class CVIO
{
public:
    int img_in();
    int img_out(string outname, Mat img,int time);
    void showimg(Mat img,QLabel*label);
    Mat src;
    string src_path = "C:/Users/LJY/Desktop/CV_work/lena_c.png";
};

extern CVIO m_CVIO;

#endif // CVIO_H
