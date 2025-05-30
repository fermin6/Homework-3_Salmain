#include "rectangulo.h"

Rectangulo::Rectangulo(const Punto& esqInfIzq, float ancho, float largo)
    // Constructor que inicializa la esquina inferior izquierda, el ancho y el largo del rectángulo
    : esqInfIzq(esqInfIzq), ancho(ancho), largo(largo) {}

Punto Rectangulo::getEsqInfIzq() const {
    // Método que devuelve la esquina inferior izquierda del rectángulo
    return esqInfIzq;
}

float Rectangulo::getAncho() const {
    // Método que devuelve el ancho del rectángulo
    return ancho;
}

float Rectangulo::getLargo() const {
    // Método que devuelve el largo del rectángulo
    return largo;
}

void Rectangulo::setEsqInfIzq(const Punto& esqInfIzq) {
    // Método que establece la esquina inferior izquierda del rectángulo
    this->esqInfIzq = esqInfIzq;
}

void Rectangulo::setAncho(float ancho) {
    // Método que establece el ancho del rectángulo
    this->ancho = ancho;
}

void Rectangulo::setLargo(float largo) {
    // Método que establece el largo del rectángulo
    this->largo = largo;
}
