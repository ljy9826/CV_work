#include "cvio.h"

int CVIO::img_in()
{
    src = imread(src_path);
    return 0;
}
int CVIO::img_out(string outname, Mat img,int time)
{
    if(img.empty())
    {
//        cout<<"请先打开本地图片！！！"<<endl;
        return 0;
    }
    cv::imshow(outname, img);
    cv::waitKey(time);
//    std::cout<<img<<endl;
//    std::cout<<"行数"<<img.rows<<endl;                    // 返回图像行数
//    std::cout<<"列数"<<img.cols<<endl;                    // 返回图像列数
//    std::cout<<"通道数"<<img.channels()<<endl;             //返回通道数
//    std::cout<<"是否连续存储？"<<img.isContinuous()<<endl;         // 返回bool类型表示是否连续存储

    return 0;

}
void CVIO::showimg(Mat img,QLabel*label)
{
    QSize size = label->size();
    label->clear();
    QImage imgBGR;
    QImage image;

    if(img.channels() == 3)
    {
        image = QImage(img.data, img.cols, img.rows, QImage::Format_RGB888);
        imgBGR = image.rgbSwapped();
    }
    else
    {
        image = QImage(img.data, img.cols, img.rows, QImage::Format_Grayscale8);
        imgBGR = image;
    }

    label->setPixmap(QPixmap::fromImage(imgBGR.scaled(size)));
}


