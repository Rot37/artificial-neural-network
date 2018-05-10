//
// Created by tuangiang on 06/05/2018.
//

#include "algorithm"
#include "../headers/layer.hpp"
#include "../libraries/random.hpp"

Layer::Layer(unsigned long numberNeurons, unsigned activationType)
{
    this->initializeNeurons(numberNeurons);
}

Layer::Layer(unsigned long numberNeurons, Matrix weight)
{

    this->weight = weight;
    this->initializeNeurons(numberNeurons);

}

Layer::Layer(unsigned long numberNeurons, Matrix weight, unsigned activationType)
{

    this->weight = weight;
    this->initializeNeurons(numberNeurons);

}

std::vector<long double> Layer::getNeuronValues()
{
    std::vector<long double> values;

    for (unsigned long neuronNumber = 0; neuronNumber < this->numberNeurons; neuronNumber++)
    {
        values.push_back(this->neurons[neuronNumber].value);
    }

    return values;
}

std::vector<long double> Layer::feedForward()
{
    return this->weight * this->getNeuronValues() + this->biases;
}


std::vector<long double> Layer::transferFunction(std::vector<long double> values)
{
    std::vector<long double> transfer;

    long double zero = 0.0;
    for (unsigned long neuronNumber = 0; neuronNumber < this->numberNeurons; neuronNumber++)
    {
        switch (this->activationType)
        {
            case Layer::ReLU:
                transfer.push_back(std::max(zero, values[neuronNumber]));
                break;
            case Layer::SoftMax:
                break;
        }
    }

    return transfer;
}

void Layer::initializeNeurons(unsigned long numberNeurons)
{
    long double bias = Random::get(0.00, 1.00);

    for (unsigned long neuronNumber = 0; neuronNumber < numberNeurons; neuronNumber++)
    {
        this->neurons.push_back(Neuron());

        this->biases.push_back(bias);
    }
}

void Layer::setNeuronValues(std::vector<long double> values)
{
    for (unsigned long neuronNumber = 0; neuronNumber < this->numberNeurons; neuronNumber++)
    {
        this->neurons[neuronNumber].value = values[neuronNumber];
    }
}

void Layer::print()
{
    this->weight.print();
}