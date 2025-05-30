#include "punto.h"

Punto::Punto(float x, float y) : x(x), y(y) {} // Constructor que inicializa las coordenadas del punto

float Punto::getX() const {
    // Método que devuelve la coordenada x del punto    
    return x;
}

float Punto::getY() const {
    // Método que devuelve la coordenada y del punto
    return y;
}

void Punto::setX(float x) {
    // Método que establece la coordenada x del punto
    this->x = x;
}

void Punto::setY(float y) {
    // Método que establece la coordenada y del punto
    this->y = y;
}
