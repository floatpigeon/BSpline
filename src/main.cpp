#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::Matrix2d mat;
    mat << 1, 2, 3, 4;
    std::cout << "Matrix:\n" << mat << std::endl;
    return 0;
}
