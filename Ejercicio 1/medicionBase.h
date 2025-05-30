#pragma once

#include "iMediciones.h"
#include <memory>
#include <string>
#include <iostream>

// MedicionBase es una clase base abstracta que hereda de la interfaz IMediciones.
// Define un constructor que inicializa el tiempo de medición y proporciona
// métodos para obtener el tiempo, imprimir la medición y serializar/deserializar

class MedicionBase: public IMediciones {
protected:
    std::unique_ptr<float> tiempoMedicion;
public:
    MedicionBase(float t);
    MedicionBase(const MedicionBase& other);
    MedicionBase& operator=(const MedicionBase& other); 

    float getTiempo() const;
    virtual void imprimir() const = 0;

    virtual void serializar(std::ofstream& out) const = 0;
    virtual void deserializar(std::ifstream& in) = 0;

    virtual ~MedicionBase() = default;
};