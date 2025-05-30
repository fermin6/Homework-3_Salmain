#include "constructorJSON.h"

void ConstructorJSON::imprimirDatos(const GenerarDatos& datos){
    // Comienza a imprimir el JSON
    // Imprime el vector de doubles, el vector de strings y la matriz de listas
    
    // Primero imprimimos el inicio del JSON
    
    // Sigue con el vector de doubles
	std::cout << "{ \"vec_doubles\" : [";
    for (size_t i = 0; i < datos.getVecDoubles().size(); ++i) {
        std::cout << datos.getVecDoubles()[i];
        if (i < datos.getVecDoubles().size() - 1) {
            std::cout << ", ";
        }
    } 

    // Luego el vector de strings
    std::cout << "], \n \"vec_strings\" : [";
    for (size_t i = 0; i < datos.getPalabras().size(); ++i) {
        std::cout << "\"" << datos.getPalabras()[i] << "\"";
        if (i < datos.getPalabras().size() - 1) {
            std::cout << ", ";
        }
    }

    // Finalmente la matriz de listas
    std::cout << "], \n \"matriz\" : [ \n";
    for (size_t i = 0; i < datos.getListas().size(); ++i) {
        std::cout << "          [";
        for (size_t j = 0; j < datos.getListas()[i].size(); ++j) {
            std::cout << datos.getListas()[i][j];
            if (j < datos.getListas()[i].size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]";
        if (i < datos.getListas().size() - 1) {
            std::cout << ",\n";
        }
    }
    std::cout << "\n         ]\n}";
    // Finaliza el JSON
};