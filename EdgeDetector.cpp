#include <opencv2/opencv.hpp>
#include<stdio.h>

using namespace cv;
int main(){
    Mat image = imread("input/cat.jpeg", IMREAD_GRAYSCALE);

    imwrite("output/cat_Edge.jpg", image);

    return 0;
}

