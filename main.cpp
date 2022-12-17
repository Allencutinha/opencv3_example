#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;

void checkImageValidity(cv::Mat const &img, std::string const &file) {
    if (img.data == nullptr) {
        std::cerr << "File : " << file << " could not be read !!!" << std::endl;
        std::cerr << "Please check the file path and try again !!!\n";
        exit(2);
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Enter a valid input image path\n";
        return 1;
    }
    cv::Mat img = cv::imread(argv[1], 1);
    checkImageValidity(img, argv[1]);

    cv::imshow("img", img);
    cv::waitKey(0);
    return 0;
}
