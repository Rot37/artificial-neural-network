//
// Created by tuangiang on 06/05/2018.
//

#include "random.hpp"

std::random_device Random::rd;

long double Random::get(long double from, long double to)
{
    std::mt19937 gen(Random::rd());
    std::uniform_real_distribution<long double> dist(from, to);

    return dist(gen);
}