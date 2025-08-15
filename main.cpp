#include <iostream>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"
#include "espar.h"
using namespace std;

int menu(){
        int opcion;
        cout<<"Este es un menu selecciona una opción \n"
        "1. Sumar 2 numeros \n"
        "2. Restar 2 numeros \n"
        "3. Multiplicar 2 numeros \n"
        "4. Dividir 2 numeros \n"
        "5. Comprobar si un numero es par \n"
        "0. Salir\n"
        "Selecciona una opción: ";
    cin>>opcion;
    return opcion;
}

int main (){
    int opcionm,a,b;
    
    while(true){
        opcionm = menu();
        switch (opcionm)
        {
        case 0:
            break;
        case 1:

            cout<<"Digita el primer numero: ";
            cin >>a;
            cout<<"\n";
            cout<<"Digita el segundo numero: ";
            cin >>b;
            cout<<"\n";
            cout<<"Este es el resultado"<<sumar(a,b)<<endl;
            break;
        
        case 2:
            cout<<"Digita el primer numero: "<<opcionm<<endl;
            cin >>a;
            cout<<"\n";
            cout<<"Digita el segundo numero: ";
            cin >>b;
            cout<<"\n";
            cout<<"Este es el resultado: "<<restar(a,b)<<endl;
        break;
        case 3:
            cout<<"Digita el primer numero: ";
            cin >>a;
            cout<<"\n";
            cout<<"Digita el segundo numero: ";
            cin >>b;
            cout<<"\n";
            cout<<"Este es el resultado: "<<multiplicar(a,b)<<endl;
        break;
        case 4:
            cout<<"Digita el primer numero: ";
            cin >>a;
            cout<<"\n";
            cout<<"Digita el segundo numero: ";
            cin >>b;
            cout<<"\n";
            cout<<"Este es el resultado: "<<multiplicar(a,b)<<endl;
        break;
        case 5:
            int esparn;
            cout<<"Digita el numero: ";
            cin >>a;
            cout<<"\n";

            if(espar(a)){
            cout<<"Es par\n";
            }
            else{
            cout<<"Es impar \n";
            }
        break;
    default:
        break;
    }
    system("pause");
    system("cls");

}}