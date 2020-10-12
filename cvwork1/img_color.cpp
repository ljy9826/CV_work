#include "img_color.h"

Mat img_color::RGBtoGrey(Mat img)	//彩色转灰度
{
    int row=img.rows;
    int col=img.cols;
    img_grey = Mat(row,col,CV_8UC1);

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {

            img_grey.at<uchar>(i,j)=(img.at<Vec3b>(i,j)[0]+img.at<Vec3b>(i,j)[1]+
                                        img.at<Vec3b>(i,j)[2])/3;//BGR
//            img_grey.at<uchar>(i,j)=(img.at<Vec3b>(i,j)[0])*0.114+(img.at<Vec3b>(i,j)[1])*0.587
//                                            +(img.at<Vec3b>(i,j)[2])*0.299;
        }
    }

    return img_grey;
}

Mat img_color::calcHistogram(Mat img)
{
    vector<int> nums(256);
    for (int i = 0; i < img.rows; i++)
    {
        uchar* p = img.ptr<uchar>(i);
        for (int j = 0; j < img.cols; j++)
        {
            nums[p[j]]++;
        }
    }

    auto max_val = max_element(nums.begin(), nums.end());
    int scale = 2;
    int hist_height=256;
    Mat hist_img = Mat::zeros(256,512, CV_8UC3);
    for(int i=0;i<256;i++)
    {
        int bin_val = nums[i];
        int intensity = cvRound(bin_val*hist_height/(*max_val));  //要绘制的高度
        rectangle(hist_img,Point(i*scale,hist_height-1),
            Point((i+1)*scale - 1, hist_height - intensity),
            CV_RGB(255,255,255));
    }

    return hist_img;
}

Mat img_color::GreyToRGB(Mat img)		//灰度转彩图
{
    int row=img.rows;
    int col=img.cols;
    Mat rgb_img(row,col,CV_8UC3,Scalar(255,255,255));

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            uchar greypix = img.at<uchar>(i,j);
            if(greypix>=0 && greypix <50)
            {
                rgb_img.at<Vec3b>(i,j) = Vec3b(0,0,0);
            }
            else if(greypix>=50 && greypix < 100)
            {
                rgb_img.at<Vec3b>(i,j) = Vec3b(0,255,0);
            }
            else if(greypix>=100 && greypix < 150)
            {
                rgb_img.at<Vec3b>(i,j) = Vec3b(255,0,0);
            }
            else if(greypix>=150 && greypix < 200)
            {
                rgb_img.at<Vec3b>(i,j) = Vec3b(0,0,255);
            }
            else if(greypix>=200 && greypix < 256)
            {
                rgb_img.at<Vec3b>(i,j) = Vec3b(255,255,255);
            }
        }
    }

    return rgb_img;
}
