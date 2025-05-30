#include "generarDatos.h"

const std::vector<double>& GenerarDatos::getVecDoubles() const {
    // Devuelve una referencia constante al vector de doubles
    return vec_doubles;
}

const std::vector<std::string>& GenerarDatos::getPalabras() const {
    // Devuelve una referencia constante al vector de palabras
    return palabras;
}

const std::vector<std::vector<int>>& GenerarDatos::getListas() const {
    // Devuelve una referencia constante al vector de listas
    return listas;
}

