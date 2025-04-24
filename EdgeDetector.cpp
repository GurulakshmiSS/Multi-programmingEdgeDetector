#include <opencv2/opencv.hpp>
#include<stdio.h>

using namespace cv;
int main(){
    Mat image = imread("input/cat.jpeg", IMREAD_GRAYSCALE);
    printf("Image Height: %d\n",image.rows);
    printf("Image Width: %d\n",image.cols);
    printf("First Pixel: %d\n",image.data[0]);
    int n = image.cols * image.rows;
    int n2 = image.cols * 100;
    for(int i = n2;i < n;i = i + n2){
        for(int j = i; j < i+500; j++){
            image.data[j] = 0;
            
        }
        
    }
    
    imwrite("output/cat_Edge.jpg", image);

    return 0;
}

