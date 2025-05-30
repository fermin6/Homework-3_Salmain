#pragma once

#include "generarDatos.h"
#include <iostream>

// Clase que se encarga de imprimir los datos en formato JSON.

class ConstructorJSON {
public:
    static void imprimirDatos(const GenerarDatos& datos);
    // Este método imprime los datos de GenerarDatos en formato JSON.
    // Utiliza los métodos de GenerarDatos para obtener los vectores de datos
    // y los imprime en el formato adecuado.
};