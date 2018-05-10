//
// Created by tuangiang on 06/05/2018.
//

#ifndef ARTIFICIAL_NEURAL_NETWORK_MATRIX_HPP
#define ARTIFICIAL_NEURAL_NETWORK_MATRIX_HPP

#include "iostream"
#include "vector"

class Matrix
{
public:
    unsigned long numberRows;
    unsigned long numberColumns;

    std::vector<std::vector<long double>> values;

    Matrix();
    Matrix(unsigned long numberRows, unsigned long numberColumns);

    std::vector<long double> operator+(std::vector<long double> vectorValues);
    Matrix operator*(std::vector<long double> vectorValues);
    void print();
};


#endif //ARTIFICIAL_NEURAL_NETWORK_MATRIX_HPP
