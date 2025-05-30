#pragma once

#include "punto.h"

// Circulo es una clase que representa un círculo definido por su redio 
// y un centro en un espacio bidimensional.

class Circulo {
private:
    float radio; // Radio del círculo
    Punto centro; // Coordenadas del centro del círculo

public:
    Circulo(float radio, const Punto& centro);

    // Setters y getters para el radio y el centro del círculo
    float getRadio() const; 
    Punto getCentro() const;
    void setRadio(float radio);
    void setCentro(const Punto& centro);
};