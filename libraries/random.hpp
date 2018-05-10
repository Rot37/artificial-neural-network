//
// Created by tuangiang on 06/05/2018.
//

#ifndef ARTIFICIAL_NEURAL_NETWORK_RANDOM_HPP
#define ARTIFICIAL_NEURAL_NETWORK_RANDOM_HPP

#include "random"

class Random
{
public:
    static std::random_device rd;

    static long double get(long double from, long double to);
private:
};


#endif //ARTIFICIAL_NEURAL_NETWORK_RANDOM_HPP
