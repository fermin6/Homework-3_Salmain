#include "procesadorFigura.h"
#include "circulo.h"
#include "elipse.h"
#include "rectangulo.h"
#include "punto.h"
#include <iostream>

// En el main podemos crear instancias de las figuras y 
// calcular sus áreas utilizando el procesador de figuras.

int main() {
    Punto centro(0, 0); // Definimos un punto que será el centro de las figuras

    Circulo c(5, centro);
    // Creamos un círculo con radio 5 y centro en (0, 0)
    std::cout << "Area del circulo: " << calcularAreaFigura(c) << std::endl;

    Elipse e(3, 2, centro);
    // Creamos una elipse con semiejes 3 y 2, y centro en (0, 0)
    std::cout << "Area de la elipse: " << calcularAreaFigura(e) << std::endl;

    Rectangulo r(centro, 4, 6);
    // Creamos un rectángulo con esquina inferior izquierda en (0, 0), ancho 4 y largo 6
    std::cout << "Area del rectangulo: " << calcularAreaFigura(r) << std::endl;

    return 0;
}

