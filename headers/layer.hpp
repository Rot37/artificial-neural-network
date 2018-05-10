//
// Created by tuangiang on 06/05/2018.
//

#ifndef ARTIFICIAL_NEURAL_NETWORK_LAYER_HPP
#define ARTIFICIAL_NEURAL_NETWORK_LAYER_HPP

#include "vector"
#include "../headers/neuron.hpp"
#include "../libraries/matrix.hpp"

class Layer
{
public:
    long double errors;

    unsigned long numberNeurons;

    std::vector<Neuron> neurons;
    std::vector<long double> biases;

    Matrix weight;

    Layer();
    Layer(unsigned long numberNeurons, unsigned activationType);
    Layer(unsigned long numberNeurons, Matrix weight, unsigned activationType);
    Layer(unsigned long numberNeurons, Matrix weight);

    std::vector<long double> getNeuronValues();
    std::vector<long double> feedForward();
    std::vector<long double> transferFunction(std::vector<long double> values);

    void initializeNeurons(unsigned long numberNeurons);
    void setNeuronValues(std::vector<long double> values);

    void print();

private:
    unsigned activationType;

    const unsigned ReLU = 0;
    const unsigned SoftMax = 1;
};

#endif //ARTIFICIAL_NEURAL_NETWORK_LAYER_HPP
