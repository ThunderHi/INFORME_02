#include <iostream>
#include "persona.h" //Incluimos el archivo "persona.h"
using namespace std;

int main() {
    //Creacion de los objetos
    Persona persona1("Jose luis", 30, "Masculino");
    Persona persona2("Marile", 25, "Femenino");

    //Mostrar datos persona 1
    cout<<"Datos de la Persona 1:"<<endl;
    cout<<"Nombre: "<<persona1.getNombre()<<endl;
    cout<<"Edad: "<<persona1.getEdad()<<" years"<<endl;
    cout<<"Genero: "<<persona1.getGenero()<<endl;

    //Mostrar datos persona 2
    cout<<"\nDatos de la Persona 2:"<<endl;
    cout<<"Nombre: "<<persona2.getNombre()<<endl;
    cout<<"Edad: "<<persona2.getEdad()<<" years"<<endl;
    cout<<"Género: "<<persona2.getGenero()<<endl;

    return 0;
}
