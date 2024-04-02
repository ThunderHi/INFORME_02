#include <iostream>
#include <string>

using namespace std;

//Definimos la clase "Animal"
class Animal {
private:
    string nombre;
    int edad;
    string tipo;

public:
    //Constructor de la clase Animal que inicializa con los atributos
    Animal(string n, int e, string t) : nombre(n), edad(e), tipo(t) {}

    //Metodo para alimentar al animal
    void alimentar() {
        cout << nombre << " esta siendo alimentado." << endl;
    }

    //Metodo para que el animal haga un sonido
    void hacer_sonido() {
        cout << nombre << " hace un sonido caracteristico." << endl;
    }

    //Metodo para mostrar la edad del animal
    void mostrar_edad() {
        cout << nombre << " tiene " << edad << " anos." << endl;
    }

    //Metodo para mostrar el tipo de animal
    void mostrar_tipo() {
        cout << nombre << " es un " << tipo << "." << endl;
    }
};

int main() {
    //Creacion de objetos de la clase Animal
    Animal perro("Puchito", 7, "Perro");
    Animal gato("Dieguito", 4, "Gato");
    Animal pajaro("Piquito", 2, "Pajaro");

    //Creacion de un arreglo de objetos de la clase Animal
    Animal animales[3] = {perro, gato, pajaro};

    //Utilizar un ciclo para recorrer y manipular los objetos en el arreglo
    cout << "Interaccion con los animales en el arreglo:" << endl;
    for (int i = 0; i < 3; i++) {
        animales[i].alimentar();
        animales[i].hacer_sonido();
        animales[i].mostrar_edad();
        animales[i].mostrar_tipo();
        cout << endl;
    }

    return 0;
}
