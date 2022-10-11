#ifndef EJERCICIO_POLIMORFISMO_TRAPECIO_H
#define EJERCICIO_POLIMORFISMO_TRAPECIO_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

//Para terminos practicos, sera un trapecio rectangulo.
class Trapecio: public FiguraGeometrica {
private:
    float baseMayor;
    float baseMenor;
    float diagonal;
    float altura;
public:
    Trapecio();
    Trapecio(float baseMayor, float baseMenor, float diagonal, float altura);
    virtual ~Trapecio() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};

#endif