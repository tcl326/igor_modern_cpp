#pragma once

#include <vector>

#include "io_tools.h"

namespace igg {

class Image {
 public:
  Image() {};
  Image(int rows, int cols);

  int rows() const {return rows_;}
  int cols() const {return cols_;}

  int& at(int rows, int cols);
  const int& at(int rows, int cols) const;

  bool FillFromPgm(const std::string& file_name);
  void WriteToPgm(const std::string& file_name);

  std::vector<float> ComputeHistogram(int bins) const;

 private:
  int get_index(int rows, int cols) const {
    return rows * cols_ + cols;
  }
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;
};

}  // namespace igg
