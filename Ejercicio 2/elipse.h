#pragma once 

#include "punto.h"

// Elipse es una clase que representa una elipse definida por sus semiejes a y b,
// y un centro en un espacio bidimensional. 

class Elipse {
private:
    float a, b; // Semiejes de la elipse, donde 'a' es el semieje mayor y 'b' es el semieje menor
    Punto centro; // Coordenadas del centro de la elipse
public:
    Elipse(float a, float b, const Punto& centro); 

    // Setters y getters para los semiejes y el centro de la elipse
    float getA() const;
    float getB() const;
    Punto getCentro() const;

    void setA(float a);
    void setB(float b);
    void setCentro(const Punto& centro);
};