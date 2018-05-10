//
// Created by tuangiang on 06/05/2018.
//

#include "matrix.hpp"
#include "random.hpp"

Matrix::Matrix()
{
    this->numberRows = 0;
    this->numberColumns = 0;
}

Matrix::Matrix(unsigned long numberRows, unsigned long numberColumns)
{
    for (unsigned long rowNumber = 0; rowNumber < numberRows; rowNumber++)
    {
        std::vector<long double> rowValues;
        for (unsigned long columnNumber = 0; columnNumber < numberColumns; columnNumber++)
        {
            rowValues.push_back(Random::get(0.00, 1.00));
        }
        this->values.push_back(rowValues);
    }

    this->numberRows = numberRows;
    this->numberColumns = numberColumns;
}

void Matrix::print()
{
    for (unsigned long rowNumber = 0; rowNumber < this->numberRows; rowNumber++)
    {
        for (unsigned long columnNumber = 0; columnNumber < this->numberColumns; columnNumber++)
        {
            std::cout << this->values[rowNumber][columnNumber] << '\t';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

Matrix Matrix::operator*(std::vector<long double> vectorValues)
{
    Matrix result(1, vectorValues.size());

    for (unsigned long rowNumber = 0; rowNumber < this->numberRows; rowNumber++)
    {
        long double sum = 0;

        for (unsigned long columnNumber = 0; columnNumber < this->numberColumns; columnNumber++)
        {
            sum += vectorValues[columnNumber] * this->values[columnNumber][rowNumber];
        }

        result.values[0][rowNumber] = sum;
    }

    return result;
}

std::vector<long double> Matrix::operator+(std::vector<long double> vectorValues)
{
    std::vector<long double> result;

    if (numberRows != 1)
    {
        return result;
    }

    for (unsigned long columnNumber = 0; columnNumber < this->numberColumns; columnNumber++)
    {
        result.push_back(vectorValues[columnNumber] + this->values[0][columnNumber]);
    }

    return result;
}

