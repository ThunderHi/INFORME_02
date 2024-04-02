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
        cout<<nombre<<" esta siendo alimentado."<<endl;
    }

    //Metodo para que el animal haga un sonido
    void hacer_sonido() {
        cout<<nombre<<" hace un sonido caracteristico."<<endl;
    }

    //Metodo para mostrar la edad del animal
    void mostrar_edad() {
        cout<<nombre<<" tiene "<<edad<<" years."<<endl;
    }

    //Metodo para mostrar el tipo de animal
    void mostrar_tipo() {
        cout<<nombre<<" es un "<<tipo<<"."<<endl;
    }
};

int main() {
    //Creacion de objetos de la clase Animal
    Animal perro("Puchito", 7, "Perro");
    Animal gato("Dieguito", 4, "Gato");
    Animal pajaro("Piquito", 2, "Pajaro");

    //Interaccion con el perro
    perro.alimentar();
    perro.hacer_sonido();
    perro.mostrar_edad();
    perro.mostrar_tipo();

    //Interaccion con el gato
    gato.alimentar();
    gato.hacer_sonido();
    gato.mostrar_edad();
    gato.mostrar_tipo();

    //Interaccion con el pajaro
    pajaro.alimentar();
    pajaro.hacer_sonido();
    pajaro.mostrar_edad();
    pajaro.mostrar_tipo();

    return 0;
}
