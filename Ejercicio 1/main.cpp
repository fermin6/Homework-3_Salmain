#include "saveFlightData.h"
#include <fstream>

// Este es un ejemplo de uso de la clase SaveFlightData para serializar y deserializar datos de vuelo.
// Se crean instancias de Posicion y Presion, se serializan a un archivo 
// y luego se deserializan desde ese archivo.
// Finalmente, se imprimen los datos deserializados.

int main() {
    // Creamos instancias de Posicion y Presion con valores de ejemplo
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f); 
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData vuelo(posicion, presion); // Creamos una instancia de SaveFlightData con las mediciones

    
    std::ofstream archivoSalida("vuelo.txt"); 
    // Abrimos un archivo para escribir los datos serializados
    if (archivoSalida.is_open()) {
        vuelo.serializar(archivoSalida);
        archivoSalida.close();
        std::cout << "Datos serializados exitosamente en 'vuelo.txt'.\n\n";
    } else {
        std::cerr << "Error al abrir el archivo para escritura.\n";
        return 1;
    }

    // Ahora deserializamos los datos desde el archivo
    SaveFlightData vueloCargado(posicion, presion); // Creamos una instancia vacía para cargar los datos

    std::ifstream archivoEntrada("vuelo.txt");
    // Abrimos el archivo para leer los datos deserializados
    if (archivoEntrada.is_open()) {
        vueloCargado.deserializar(archivoEntrada);
        archivoEntrada.close();
        std::cout << "Datos deserializados desde 'vuelo.txt':\n\n";
        vueloCargado.imprimirTodo(); // Imprimo los datos deserializados
    } else {
        std::cerr << "Error al abrir el archivo para lectura.\n";
        return 1;
    }

    return 0;
}
