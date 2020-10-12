#ifndef FIRSTWORK_H
#define FIRSTWORK_H

#include <QDialog>
#include "opencv2/opencv.hpp"
#include "cvio.h"
#include "img_color.h"

using namespace cv;

namespace Ui {
class FirstWork;
}

class FirstWork : public QDialog
{
    Q_OBJECT

public:
    explicit FirstWork(QWidget *parent = nullptr);
    ~FirstWork();
    void process(Mat src);

private:
    Ui::FirstWork *ui;
};

#endif // FIRSTWORK_H
