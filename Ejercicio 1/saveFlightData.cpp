#include "saveFlightData.h"

SaveFlightData::SaveFlightData(const Posicion& pos, const Presion& pres)
    // Constructor que inicializa los atributos de posición y presión con las mediciones proporcionadas
    : posicion(pos), presion(pres) {}

SaveFlightData::SaveFlightData(const SaveFlightData& other)
    // Constructor de copia que crea una nueva instancia a partir de otra existente
    : posicion(other.posicion), presion(other.presion) {}

void SaveFlightData::serializar(std::ofstream& out) const {
    // Método que serializa los datos de posición y presión a un archivo
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(std::ifstream& in) {
    // Método que deserializa los datos de posición y presión desde un archivo
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimirTodo() const {
    // Método que imprime toda la información de las mediciones de posición y presión
    std::cout << "Datos de Vuelo:\n";
    posicion.imprimir();
    presion.imprimir();
}