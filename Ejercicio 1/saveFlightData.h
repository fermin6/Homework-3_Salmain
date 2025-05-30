#pragma once 

#include <iostream>
#include "posicion.h"
#include "presion.h"

// SaveFlightData es una clase que agrupa las mediciones de posición y presión
// durante un vuelo. Proporciona métodos para serializar y deserializar los datos,
// así como para imprimir toda la información de las mediciones.

class SaveFlightData{
public:
    Posicion posicion; // Atributo que almacena la medición de posición
    Presion presion; // Atributo que almacena la medición de presión

    SaveFlightData(const Posicion& posicion, const Presion& presion);
    SaveFlightData(const SaveFlightData& other);
    SaveFlightData& operator=(const SaveFlightData& other) = default;

    void serializar(std::ofstream& out) const;
    void deserializar(std::ifstream& in);
    void imprimirTodo() const;
};
