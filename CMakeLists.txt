cmake_minimum_required(VERSION 3.10)
project(artificial-neural-network)

set(CMAKE_CXX_STANDARD 11)

add_executable(artificial-neural-network main.cpp headers/artificial-neural-network.hpp sources/artificial-neural-network.cpp libraries/matrix.cpp libraries/matrix.hpp headers/layer.hpp sources/layer.cpp headers/neuron.hpp sources/neuron.cpp libraries/random.cpp libraries/random.hpp)