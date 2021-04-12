#include <iostream>
#include <vector>

#include "image.h"

igg::Image::Image(int rows, int cols): rows_(rows), cols_(cols){
    data_.resize(rows_ * cols_);
} 

const int& igg::Image::at(int rows, int cols) const {
    std::cout << "const" << std::endl;
    return data_.at(get_index(rows, cols));
}

int& igg::Image::at(int rows, int cols) {
    std::cout << "non-const" << std::endl;
    return data_.at(get_index(rows, cols));
}

bool igg::Image::FillFromPgm(const std::string& file_name){
    igg::io_tools::ImageData image_data = igg::io_tools::ReadFromPgm(file_name);

    if (image_data.data.empty()){
        return false;
    }

    rows_ = image_data.rows;
    cols_ = image_data.cols;
    max_val_ = image_data.max_val;
    data_ = std::move(image_data.data);

    return true;
}

void igg::Image::WriteToPgm(const std::string& file_name){
    igg::io_tools::ImageData image_data = {
        rows_,
        cols_,
        max_val_,
        data_,
    };

    igg::io_tools::WriteToPgm(image_data, file_name);
}

std::vector<float> igg::Image::ComputeHistogram(int bins) const{
    std::vector<float> res(bins, 0);
    int bin_factor = max_val_ / bins + 1;
    float increment = 1.0 / float(rows_ * cols_);
    for (const auto &v: data_){
        res[v / bin_factor] += increment;
    }
    return res;
};