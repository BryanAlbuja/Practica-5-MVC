#include "estudiante.h"

double Estudiante::getNota1() const
{
    return nota1;
}

void Estudiante::setNota1(double value)
{
    nota1 = value;
}

double Estudiante::getNota2() const
{
    return nota2;
}

void Estudiante::setNota2(double value)
{
    nota2 = value;
}

double Estudiante::getNota3() const
{
    return nota3;
}

void Estudiante::setNota3(double value)
{
    nota3 = value;
}

string Estudiante::getNombre() const
{
    return nombre;
}

string Estudiante::getDatos()
{
    return "\nNombre "+this->nombre+
            "\nNota 1: "+to_string(this->nota1)+
            "\nNota 2: "+to_string(this->nota2)+
            "\nNota 3: "+to_string(this->nota3);
}


Estudiante::Estudiante()
{
    this->nombre="";
    this->nota1=0;
    this->nota2=0;
    this->nota3=0;
}

Estudiante::Estudiante(string &nombre)
{
    this->nombre=nombre;
    this->nota1=0;
    this->nota2=0;
    this->nota3=0;
}
