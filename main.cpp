#include "libraries/matrix.hpp"
#include "headers/artificial-neural-network.hpp"

int main(int argc, char *argv[]) {

    std::vector<std::vector<long double>> inputs  = {{0.00, 0.00}, {0.00, 1.00}, {1.00, 0.00}, {1.00, 1.00}};
    std::vector<long double> targets = {0.00, 0.00, 0.00, 1.00};

    long double leaningRate = 0.05;
    long double bias = 1.00;

    ArtificialNeuralNetwork neuralNetwork({2, 4, 4, 1});

    Matrix matrix(3, 3);

    matrix.print();

    std::vector<long double> a = {2, 2, 3};

    (matrix * a).print();
//    for (unsigned long inputNumber = 0; inputNumber < inputs.size(); inputNumber++)
//    {
//        unsigned epoch = 0;
//        while (epoch < 1000)
//        {
//            neuralNetwork.trainData(inputs[inputNumber], targets, bias, leaningRate);
//            epoch++;
//        }
//    }
}