#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;

class Estudiante
{
private:
    string nombre;
    double nota1;
    double nota2;
    double nota3;

public:
    Estudiante();
    Estudiante(string &nombre);
    double getNota1() const;
    void setNota1(double value);
    double getNota2() const;
    void setNota2(double value);
    double getNota3() const;
    void setNota3(double value);
    string getNombre() const;
    string getDatos();
};

#endif // ESTUDIANTE_H
