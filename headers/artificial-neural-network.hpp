//
// Created by tuangiang on 05/05/2018.
//

#ifndef ARTIFICIAL_NEURAL_NETWORK_ARTIFICIAL_NEURAL_NETWORK_HPP
#define ARTIFICIAL_NEURAL_NETWORK_ARTIFICIAL_NEURAL_NETWORK_HPP

#include "../libraries/matrix.hpp"
#include "../libraries/random.hpp"
#include "../headers/layer.hpp"

class ArtificialNeuralNetwork
{
public:
    unsigned long numberLayers;

    std::vector<Layer> layers;

    ArtificialNeuralNetwork();
    ArtificialNeuralNetwork(std::vector<unsigned long> topology);

    void feedForward(std::vector<long double> &inputs);
    void setErrors();
    void backPropagation();

    void trainData(std::vector<long double> &inputs, std::vector<long double> outputs, long double bias, long double leaningRate);

    void print();
private:
};

#endif //ARTIFICIAL_NEURAL_NETWORK_ARTIFICIAL_NEURAL_NETWORK_HPP
