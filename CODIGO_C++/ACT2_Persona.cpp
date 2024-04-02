#include <iostream>
#include "persona.h"//Incluimos el archivo de encabezado persona.h, que contiene la declaración de la clase Persona
using namespace std;

//Definicion de los metodos de la clase Persona

//Constructor de la clase Persona
Persona::Persona(string n, int e, string g) {
    nombre = n;     //Asignamos el nombre recibido al atributo nombre de la persona
    edad = e;       //Asignamos la edad recibida al atributo edad de la persona
    genero = g;     //Asignamos el género recibido al atributo genero de la persona
}

//Metodo para obtener el nombre de la persona
string Persona::getNombre() {
    return nombre;  //Devolvemos el valor del atributo nombre
}

//Metodo para establecer el nombre de la persona
void Persona::setNombre(string n) {
    nombre = n;    
}

//Metodo para obtener la edad de la persona
int Persona::getEdad() {
    return edad;    //Devolvemos el valor del atributo edad
}

//Metodo para establecer la edad de la persona
void Persona::setEdad(int e) {
    edad = e;       
}

//Metodo para obtener el genero de la persona
string Persona::getGenero() {
    return genero;  //Devolvemos el valor del atributo genero
}

//Metodo para establecer el género de la persona
void Persona::setGenero(string g) {
    genero = g;     
}

//Funcion principal
int main() {
    //Creamos dos objetos de la clase Persona, utilizando el constructor
    //Cada objeto representa una persona con nombre, edad y género
    Persona persona1("Juan", 30, "Masculino");
    Persona persona2("Maria", 25, "Femenino");

    //Imprimimos los datos de la Persona 1
    cout << "Datos de la Persona 1:" << endl;
    cout << "Nombre: " << persona1.getNombre() << endl;
    cout << "Edad: " << persona1.getEdad() << " years" << endl;
    cout << "Genero: " << persona1.getGenero() << endl;

    //Imprimimos los datos de la Persona 2
    cout << "\nDatos de la Persona 2:" << endl;
    cout << "Nombre: " << persona2.getNombre() << endl;
    cout << "Edad: " << persona2.getEdad() << " years" << endl;
    cout << "Género: " << persona2.getGenero() << endl;

    return 0;
}
