#include<iostream>
#include <Eigen/Dense>

int main()
{
    std::cout << "Hello World!\n";
    Eigen::Matrix2d mat;
    mat << 1, 2,
           3, 4;

    // Create a 2x1 vector and assign values
    Eigen::Vector2d vec(5,6);

    // Multiply the matrix by the vector
    Eigen::Vector2d result = mat * vec;

    std::cout << "Result:\n" << result << std::endl;

    return 0;
}