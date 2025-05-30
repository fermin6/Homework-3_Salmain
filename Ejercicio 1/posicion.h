#pragma once

#include "medicionBase.h"

// Posicion es una clase que hereda de MedicionBase y representa una medición de posición.
// Contiene atributos para latitud, longitud y altitud, así como métodos para imprimir,
// serializar y deserializar la medición. También proporciona un constructor que inicializa
// estos atributos y un constructor de copia para crear una nueva instancia a partir de otra existente.

class Posicion : public MedicionBase {
public:
    float latitud, longitud, altitud;

    Posicion(float lat, float lon, float alt, float t);
    Posicion(const Posicion& other);
    Posicion& operator=(const Posicion& other) = default;

    void imprimir() const override;
    void serializar(std::ofstream& out) const override;
    void deserializar(std::ifstream& in) override;
};

