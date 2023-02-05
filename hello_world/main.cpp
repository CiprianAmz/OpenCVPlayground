#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Not enough arguments.";
        return -1;
    }
    auto image = cv::imread(argv[1], 1);

    if (!image.data) {
        std::cout << "Not enough arguments.";
        return -1;
    }

    cv::imwrite("result.jpg", image);

    return 0;
}