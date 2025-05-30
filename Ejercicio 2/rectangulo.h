#pragma once

#include "punto.h"

// Rectangulo es una clase que representa un rectángulo definido 
// por un punto en su esquina inferior izquierda, su ancho y su largo.

class Rectangulo {
private:
    Punto esqInfIzq; // Punto que representa la esquina inferior izquierda del rectángulo
    float ancho; // Ancho del rectángulo
    float largo; // Largo del rectángulo

public:
    Rectangulo(const Punto& esqInfIzq, float ancho, float largo);

    // Setters y getters para la esquina inferior izquierda, ancho y largo del rectángulo
    Punto getEsqInfIzq() const;
    float getAncho() const;
    float getLargo() const;

    void setEsqInfIzq(const Punto& esqInfIzq);
    void setAncho(float ancho);
    void setLargo(float largo);
};
