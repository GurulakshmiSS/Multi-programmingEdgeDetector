#include <opencv2/opencv.hpp>
#include<stdio.h>

using namespace cv;
int main(){
    printf("hello world");
    Mat image = imread("input/cat.jpeg", IMREAD_COLOR);
    return 0;
}

