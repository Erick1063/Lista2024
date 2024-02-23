#include "vector.hpp"
#include "iostream"
using std::cout;
using std::endl;

//constructor
vector::vector(int Dim) {
    this->Dim = Dim;
    this->disponible = Dim;
    this->Arreglo = new int[Dim];
}
