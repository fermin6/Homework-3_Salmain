#pragma once

#include <vector>
#include <string>
#include <type_traits>
#include <concepts>


// Esta es una implementación de un generador de datos que soporta
// diferentes tipos de datos: double, std::string y std::vector<int>.

// Utiliza templates y conceptos para garantizar que solo se acepten
// los tipos de datos soportados. Los datos se almacenan en vectores
// separados según su tipo. Además, se proporciona una función para
// agregar datos y funciones para obtener los vectores de datos.

template<typename T> 
concept TipoSoportado = 
    std::same_as<T, double> ||
    std::same_as<T, std::string> ||
    std::same_as<T, std::vector<int>>;

// Clase que genera y almacena datos de diferentes tipos.
class GenerarDatos {
private:
    std::vector<double> vec_doubles;
    std::vector<std::string> palabras;
    std::vector<std::vector<int>> listas;

public:
    GenerarDatos() = default;

    template<typename T> // Función plantilla para agregar datos de tipo T
    requires TipoSoportado<T> // Asegura que T es uno de los tipos soportados

    //Este metodo agrega un dato al vector correspondiente según su tipo.
    void agregarDato(const T& dato) {
        if constexpr (std::same_as<T, double>) {
            vec_doubles.push_back(dato);
        } else if constexpr (std::same_as<T, std::string>) {
            palabras.push_back(dato);
        } else if constexpr (std::same_as<T, std::vector<int>>) {
            listas.push_back(dato);
        }
    }

    // Metodos para obtener los vectores de datos
    const std::vector<double>& getVecDoubles() const;
    const std::vector<std::string>& getPalabras() const;
    const std::vector<std::vector<int>>& getListas() const;
};