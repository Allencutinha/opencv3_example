#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;

int main (int argc, char** argv){
    if(argc <2 ){
        std::cerr<<"Enter a valid input image path\n";
        return 1;
    }
    cv::Mat img;
    img = cv::imread(argv[1], 1);
    if(img.data == nullptr){
        std::cerr<<"File : "<<argv[1]<<" could not be read !!!"<<std::endl;
        std::cerr<<"Please check the file path and try again !!!\n";
        return 2;
    }
    cv::imshow("img", img);
    cv::waitKey(0);
    return 0;
}
