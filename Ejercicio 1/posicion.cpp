#include "posicion.h"

Posicion::Posicion(float lat, float lon, float alt, float t)
    // Constructor que inicializa la latitud, longitud, altitud y el tiempo de medición
    : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

Posicion::Posicion(const Posicion& other)
    // Constructor de copia que crea una nueva instancia a partir de otra existente
    : MedicionBase(other),
      latitud(other.latitud),
      longitud(other.longitud),
      altitud(other.altitud) {}

void Posicion::imprimir() const {
    // Método que imprime los valores de latitud, longitud, altitud y el tiempo de medición
    std::cout << "Latitud: " << latitud << " grados\n"
              << "Longitud: " << longitud << " grados\n"
              << "Altitud: " << altitud << " metros\n"
              << "Tiempo de Medicion: " << getTiempo() << " s\n";
}

void Posicion::serializar(std::ofstream& out) const {
    // Método que serializa los valores de latitud, longitud, altitud y el tiempo de medición a un archivo
    out << latitud << " " << longitud << " " << altitud << " " << getTiempo() << "\n";
}

void Posicion::deserializar(std::ifstream& in)  {
    // Método que deserializa los valores de latitud, longitud, altitud y el tiempo de medición desde un archivo
    float t;
    in >> latitud >> longitud >> altitud >> t;
    tiempoMedicion = std::make_unique<float>(t);
}