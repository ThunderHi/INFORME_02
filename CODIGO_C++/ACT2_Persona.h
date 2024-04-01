#ifndef PERSONA_H  //Esta directiva verifica si el simbolo PERSONA_H no ha sido definido previamente en el codigo
#define PERSONA_H  //Asegura que el contenido del archivo "Persona.h" se incluya solo una vez durante la compilacion

#include <string>
using namespace std;

//Definimos clase Persona
class Persona {
private:
    string nombre;
    int edad;
    string genero;

//Constructor de la clase Persona
public:
    Persona(string n, int e, string g);
    
//Metodo para obtener el nombre de la persona
    string getNombre();
//Metodo para establecer el nombre de la persona
    void setNombre(string n);

//Metodo para obtener la edad de la persona
    int getEdad();
//Metodo para establecer la edad de la persona
    void setEdad(int e);

//Metodo para obtener el género de la persona
    string getGenero();
//Metodo para establecer el género de la persona
    void setGenero(string g);
};

#endif
