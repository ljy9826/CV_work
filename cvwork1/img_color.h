#ifndef IMG_COLOR_H
#define IMG_COLOR_H

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class img_color
{
public:
    Mat RGBtoGrey(cv::Mat img);
    Mat calcHistogram(cv::Mat img);
    Mat GreyToRGB(cv::Mat img);
    Mat img_grey;
    Mat imgcolor;
    Mat hist;
};

extern img_color m_img_color;

#endif // IMG_COLOR_H
