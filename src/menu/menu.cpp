#include "menu.h"
#include <iostream>
using namespace std;

int menu(){
        int opcion;
        cout<<"Este es un menu selecciona una opcion \n"
        "1. Sumar 2 numeros \n"
        "2. Restar 2 numeros \n"
        "3. Multiplicar 2 numeros \n"
        "4. Dividir 2 numeros \n"
        "5. Comprobar si un numero es par \n"
        "0. Salir\n"
        "Selecciona una opcion: ";
    cin>>opcion;
    return opcion;
}