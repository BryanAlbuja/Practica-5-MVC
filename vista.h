#ifndef VISTA_H
#define VISTA_H

#include <iostream>
#include "controlador.h"

using namespace std;

class Vista
{
private:
    Controlador *control;
public:
    Vista();
    void imprimir();
    void actualizaNota();
    void Ayudita();
};

#endif // VISTA_H
