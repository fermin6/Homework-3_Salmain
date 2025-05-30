#include "elipse.h"

Elipse::Elipse(float a, float b, const Punto& centro) : a(a), b(b), centro(centro) {} 
// Constructor que inicializa los semiejes y el centro de la elipse

float Elipse::getA() const {
    // Método que devuelve el semieje mayor de la elipse
    return a;
}

float Elipse::getB() const {
    // Método que devuelve el semieje menor de la elipse
    return b;
}

Punto Elipse::getCentro() const {
    // Método que devuelve el centro de la elipse
    return centro;
}

void Elipse::setA(float a) {
    // Método que establece el semieje mayor de la elipse
    this->a = a;
}

void Elipse::setB(float b) {
    // Método que establece el semieje menor de la elipse
    this->b = b;
}

void Elipse::setCentro(const Punto& centro) {
    // Método que establece el centro de la elipse
    this->centro = centro;
}