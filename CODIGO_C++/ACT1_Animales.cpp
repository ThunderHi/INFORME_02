#include <iostream>
#include <string>   //Libreria string para el manejo de cadenas de texto

using namespace std;

//Definimos la clase "Animal"
class Animal {
private:
    //Definimos los atributos
    string nombre;  
    int edad;
    string tipo;

//Ahora la clase privada haremos llamado mediante los metodos la clase "private"
public:
    //Constructor de la clase Animal que inicializa con los atributos
    Animal(string n, int e, string t) : nombre(n), edad(e), tipo(t) {}

    //Metodo para alimentar
    void alimentar() {
        cout<<nombre<<" esta siendo alimentado."<<endl;
    }

    //Metodo para que haga un sonido
    void hacer_sonido() {
        cout<<nombre<<" hace un sonido caracteristico."<<endl;
    }

    //Metodo para que muestre la edad que tiene el animal
    void mostrar_edad() {
        cout<<nombre<<" tiene "<<edad<<" years."<<endl;
    }
};


int main() {
    //Creacion de objetos de la clase Animal
    Animal perro("Puchito", 7, "Perro");
    Animal gato("Dieguito", 4, "Gato");
    Animal pajaro("Piquito", 2, "Pájaro");

    //Interaccion con el perro
    perro.alimentar();
    perro.hacer_sonido();
    perro.mostrar_edad();

    //Interaccion con el gato
    gato.alimentar();
    gato.hacer_sonido();
    gato.mostrar_edad();

    //Interaccion con el gato
    pajaro.alimentar();
    pajaro.hacer_sonido();
    pajaro.mostrar_edad();

    return 0;
}
