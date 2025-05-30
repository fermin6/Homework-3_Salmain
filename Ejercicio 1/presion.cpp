#include "presion.h"

Presion::Presion(float p, float q, float t) 
    // Constructor que inicializa la presión estática, dinámica y el tiempo de medición
    : MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

Presion::Presion(const Presion& other)
    // Constructor de copia que crea una nueva instancia a partir de otra existente
    : MedicionBase(other),
      presionEstatica(other.presionEstatica),
      presionDinamica(other.presionDinamica) {}

void Presion::imprimir() const {
    // Método que imprime los valores de presión y el tiempo de medición
    std::cout << "Presion Estatica: " << presionEstatica << " Pa\n"
              << "Presion Dinamica: " << presionDinamica << " Pa\n"
              << "Tiempo de Medicion: " << getTiempo() << " s\n";
}

void Presion::serializar(std::ofstream& out) const {
    // Método que serializa los valores de presión y el tiempo de medición a un archivo
    out << presionEstatica << " " << presionDinamica << " " << getTiempo() << "\n";
}

void Presion::deserializar(std::ifstream& in) {
    // Método que deserializa los valores de presión y el tiempo de medición desde un archivo
    float t;
    in >> presionEstatica >> presionDinamica >> t;
    tiempoMedicion = std::make_unique<float>(t);
}