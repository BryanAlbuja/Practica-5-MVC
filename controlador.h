#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <string>
#include "estudiante.h"

using namespace std;

class Controlador
{
private:
    Estudiante *modelo;
    void cargarInformacion();
    double promedio();
public:
    Controlador();
    string visualizar();
    void actualizarNota(int nota, double valor);
    void actualizarNota();
};

#endif // CONTROLADOR_H
