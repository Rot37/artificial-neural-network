//
// Created by tuangiang on 05/05/2018.
//

#include "../headers/artificial-neural-network.hpp"

ArtificialNeuralNetwork::ArtificialNeuralNetwork() {}

ArtificialNeuralNetwork::ArtificialNeuralNetwork(std::vector<unsigned long> topology)
{
    this->numberLayers = topology.size();

    for (unsigned layerNumber = 0; layerNumber < this->numberLayers; layerNumber++)
    {
        if (layerNumber == 0)
        {
            this->layers.push_back(Layer(topology[layerNumber], Matrix(topology[layerNumber], topology[layerNumber + 1])));
        }
        else if (layerNumber < this->numberLayers - 1)
        {
            this->layers.push_back(Layer(topology[layerNumber], Matrix(topology[layerNumber], topology[layerNumber + 1]), 1));
        }
        else
        {
            this->layers.push_back(Layer(topology[layerNumber], 2));
        }
    }
}

void ArtificialNeuralNetwork::feedForward(std::vector<long double> &inputs)
{
    for (unsigned long layerNumber = 0; layerNumber < this->numberLayers; layerNumber++)
    {
        std::vector<long double> result = this->layers[layerNumber].feedForward();
    }
}

void ArtificialNeuralNetwork::setErrors()
{
}

void ArtificialNeuralNetwork::backPropagation()
{
}

void ArtificialNeuralNetwork::trainData(std::vector<long double> &inputs, std::vector<long double> outputs, long double bias, long double leaningRate)
{
    this->feedForward(inputs);

    this->setErrors();

    this->backPropagation();
}

void ArtificialNeuralNetwork::print()
{
    for (unsigned long layerNumber = 0; layerNumber < this->numberLayers; layerNumber++)
    {
        this->layers[layerNumber].print();
    }
}
