#include "Trapecio.h"

Trapecio::Trapecio() {
    baseMayor = 0;
    baseMenor = 0;
    altura = 0;
}
Trapecio::Trapecio(float baseMayor, float baseMenor, float diagonal, float altura) {
    this->baseMayor = baseMayor;
    this->baseMenor = baseMenor;
    this->diagonal = diagonal;
    this->altura = altura;
}

void Trapecio::dibujarFigura() {
    cout << "**********" << "\n";
    int tam = 10; //Un parametro que servira para imprimir las diagonales del trapecio, aumentando el tamanyo de una linea "invisible".
    for (int i = 0; i < 10; i++) {
        tam += 1;
        cout << "*";
        //Se itera 2 veces menos ya que esas 2 veces las van a ocupar los *.
        for (int a = 0; a < tam - 2; a++) {
            cout << " ";
        }
        cout << "*" << "\n";
    }
    cout << "********************" << "\n";
}

float Trapecio::calcularArea() {
    area = ((baseMayor + baseMenor) * altura) / 2;
    return area;
}
float Trapecio::calcularPerimetro() {
    perimetro = baseMayor + baseMenor + altura + diagonal; //el lado izquierdo del trapecio rectangulo tiene la misma longitud que la altura.
    return perimetro;
}