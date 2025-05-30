#include "circulo.h"

Circulo::Circulo(float radio, const Punto& centro) : radio(radio), centro(centro) {} // Constructor que inicializa el radio y el centro del círculo

float Circulo::getRadio() const {
    // Método que devuelve el radio del círculo
    return radio;
}

Punto Circulo::getCentro() const {
    // Método que devuelve el centro del círculo
    return centro;
}

void Circulo::setRadio(float radio) {
    // Método que establece el radio del círculo
    this->radio = radio;
}

void Circulo::setCentro(const Punto& centro) {
    // Método que establece el centro del círculo
    this->centro = centro;
}

