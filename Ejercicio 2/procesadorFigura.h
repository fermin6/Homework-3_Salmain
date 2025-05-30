#pragma once

#define _USE_MATH_DEFINES
#include <cmath>
#include "circulo.h"
#include "elipse.h"
#include "rectangulo.h"
#include <concepts>

// ProcesadorFigura es una clase plantilla que proporciona un mecanismo 
// para calcular el área de diferentes figuras geométricas.
// Utiliza especializaciones de plantilla para definir el cálculo del área
// para cada tipo de figura soportada (Circulo, Elipse, Rectangulo).

template <typename T>

class ProcesadorFigura {
public:
    static float calcularArea(const T&) {
        // Método genérico que no está implementado para tipos no soportados.
        static_assert(sizeof(T) == 0, "Tipo no soportado en ProcesadorFigura");
        return 0;
    }
};

template <> 
class ProcesadorFigura<Circulo> {
// Especialización de ProcesadorFigura para Circulo.
public:
    static float calcularArea(const Circulo& circulo) {
        // Calcula el área de un círculo utilizando la fórmula A = π * r^2
        return M_PI * circulo.getRadio() * circulo.getRadio();
    }
};

template <>
class ProcesadorFigura<Elipse> {
// Especialización de ProcesadorFigura para Elipse.
public:
    static float calcularArea(const Elipse& elipse) {
        // Calcula el área de una elipse utilizando la fórmula A = π * a * b
        return M_PI * elipse.getA() * elipse.getB();
    }
};

template <>
class ProcesadorFigura<Rectangulo> {
// Especialización de ProcesadorFigura para Rectangulo.
public:
    static float calcularArea(const Rectangulo& rectangulo) {
        // Calcula el área de un rectángulo utilizando la fórmula A = ancho * largo
        return rectangulo.getAncho() * rectangulo.getLargo();
    }
};

template <typename T>
concept FiguraConArea = requires(T fig) {
    // Verifica que ProcesadorFigura tenga un método calcularArea que acepte una figura de tipo T
    { ProcesadorFigura<T>::calcularArea(fig) } -> std::convertible_to<float>;
};

template <FiguraConArea T>
float calcularAreaFigura(const T& figura) {
    // Función que calcula el área de una figura utilizando ProcesadorFigura.
    return ProcesadorFigura<T>::calcularArea(figura);
}