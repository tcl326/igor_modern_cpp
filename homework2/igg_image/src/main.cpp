#include <iostream>

#include "igg_image/image.h"

int main(){
    igg::Image image = igg::Image();
    std::cout << image.rows() << std::endl;
    
    igg::Image image1 = igg::Image(10, 20);
    std::cout << image1.rows() << std::endl;
    std::cout << image1.cols() << std::endl;

    std::cout << image1.at(0, 0) << std::endl;
    
    const igg::Image& image_ref = image1;
    std::cout << image_ref.at(0, 0) << std::endl;

    image1.at(0, 0) = 10;
    std::cout << image1.at(0, 0) << std::endl;

    const int v = image1.at(0, 0);
    std::cout << v << std::endl;
    

    image.FillFromPgm("/Users/tingchel/igor_modern_cpp/homework2/igg_image/data/lena.ascii.pgm");

    image.WriteToPgm("/Users/tingchel/igor_modern_cpp/homework2/igg_image/data/lena.ascii.pgm_copy");

    auto res = image.ComputeHistogram(5);
    
    for (const auto &v: res){
        std::cout << v << std::endl;
    }
    
}