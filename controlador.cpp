#include "controlador.h"

void Controlador::cargarInformacion()
{
    string nombre = "Luis";
    this->modelo= new Estudiante(nombre);
    this->modelo->setNota1(5);
    this->modelo->setNota2(7);
    this->modelo->setNota3(9);
}

double Controlador::promedio()
{
    double p=(modelo->getNota1() + modelo->getNota2() + modelo->getNota3())/3;
    return p;
}

Controlador::Controlador()
{
    this->cargarInformacion();
}

string Controlador::visualizar()
{
    string str= this->modelo->getDatos()+"\nPromedio: "+
                 to_string(this->promedio())+"\n\n";
    return str;
}

void Controlador::actualizarNota(int nota, double valor)
{
    switch(nota){
    case 1:
        this->modelo->setNota1(valor);
        break;
    case 2:
        this->modelo->setNota2(valor);
        break;
    case 3:
        this->modelo->setNota3(valor);
        break;
    default:
        break;
    }
}

void Controlador::actualizarNota()
{
    int n1=0,n2=0,n3=0;
    n1=modelo->getNota1();
    n2=modelo->getNota2();
    n3=modelo->getNota3();

    if ((n1 < n2) && (n1 < n3)){
        this->modelo->setNota1(++n1);
    }else if ((n2 < n1) && (n2 < n3)){
        this->modelo->setNota2(++n2);
    }else if ((n3 < n2) && (n3 < n1)){
        this->modelo->setNota3(++n3);
    }

}


