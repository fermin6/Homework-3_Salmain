#pragma once 

#include "medicionBase.h"

// Presion es una clase que hereda de MedicionBase y representa una medición de presión.
// Contiene atributos para presión estática y dinámica, así como métodos para imprimir,
// serializar y deserializar la medición. También proporciona un constructor que inicializa
// estos atributos y un constructor de copia para crear una nueva instancia a partir de otra existente.

class Presion: public MedicionBase {
public:
    float presionEstatica, presionDinamica;

    Presion(float p, float q, float t);
    Presion(const Presion& other);
    Presion& operator=(const Presion& other) = default;

    void imprimir() const override;
    void serializar(std::ofstream& out) const override; 
    void deserializar(std::ifstream& in) override;    
};