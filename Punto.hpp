// añadir todos los includes


#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>


class Punto{
private:
    double x;
    double y;

public:
// constructores
    Punto();
    Punto(double _x, double _y);

//Métodos de accseo getters
    double getX();
    double getY();

//Métodos modificadores - setters
    void setX(double _x);
    void setY(double _y);

//otros métodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif /* Punto_hpp */