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
// Constructores
    Punto();
    Punto(double _x, double _y);

//Métodos de accseo getters
    double getX();
    double getY();

//Métodos modificadores - setters
    void setX(double _x);
    void setY(double _y);

//Otros tipos de métodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif /* Punto_hpp */