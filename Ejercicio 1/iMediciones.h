#pragma once 

#include <iostream>
#include <fstream>
#include <ostream>


// IMediciones es una interfaz que define los métodos de serialización y deserialización
// de las mediciones. Las clases que implementen esta interfaz deben proporcionar
// implementaciones concretas de estos métodos para manejar la serialización y deserialización

class IMediciones {
public: 
    virtual void serializar(std::ofstream& out) const = 0;
    virtual void deserializar(std::ifstream& in) = 0;
    virtual ~IMediciones() = default;
};

