#pragma once

// Punto es una clase que representa un punto en un espacio bidimensional.

class Punto {
private:
    float x, y; // Coordenadas del punto en el espacio bidimensional
public:
    Punto(float x = 0, float y = 0);

    // Setters y getters para las coordenadas del punto
    float getX() const;
    float getY() const;
    void setX(float x);
    void setY(float y);
};