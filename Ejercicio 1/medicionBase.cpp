#include "medicionBase.h"

MedicionBase::MedicionBase(float t) 
    // Constructor que inicializa el tiempo de medición con un valor dado
    : tiempoMedicion(std::make_unique<float>(t)) {
}

MedicionBase::MedicionBase(const MedicionBase& other) 
    // Constructor de copia que crea una nueva instancia con el mismo tiempo de medición
    : tiempoMedicion(std::make_unique<float>(*other.tiempoMedicion)) {
}

MedicionBase& MedicionBase::operator=(const MedicionBase& other) {
    // Operador de asignación que copia el tiempo de medición de otra instancia
    if (this != &other) {
        tiempoMedicion = std::make_unique<float>(*other.tiempoMedicion);
    }
    return *this;
}

float MedicionBase::getTiempo() const {
    // Método que devuelve el tiempo de medición
    return *tiempoMedicion;
}