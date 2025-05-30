#include "generarDatos.h"
#include "constructorJSON.h"
#include <vector>
#include <string>

// Este es un ejemplo de uso de las clases GenerarDatos y ConstructorJSON.
// Se crean instancias de GenerarDatos, se agregan diferentes tipos de datos
// y luego se imprimen en formato JSON utilizando ConstructorJSON.

int main() {
    GenerarDatos datos;

    datos.agregarDato(1.3);
    datos.agregarDato(2.1);
    datos.agregarDato(3.2);

    datos.agregarDato(std::string("Hola"));
    datos.agregarDato(std::string("Mundo"));

    datos.agregarDato(std::vector<int>{1, 2});
    datos.agregarDato(std::vector<int>{3, 4});

    ConstructorJSON::imprimirDatos(datos);

    return 0;
}
