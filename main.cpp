#include <iostream>
#include "vista.h"

#include <string>

using namespace std;


int main()
{

    cout << "Creado por: Bryan Albuja" << endl;
    cout << "\n Modelo Vista Controlador" << endl;
    Vista v;
    v.imprimir();
    v.actualizaNota();
    v.imprimir();
    v.Ayudita();
    v.imprimir();
    return 0;
}
