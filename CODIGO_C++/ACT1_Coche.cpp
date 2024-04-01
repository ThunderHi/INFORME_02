#include <iostream>
#include <string>

using namespace std;

//Creamos clase con nombre de coche
class Coche {
//Definimos los atributos en privado
private:
    string modelo;
    int año;
    int velocidad;

//Haremos llamado a la clase private
public:
    //Constructor de la clase Coche
    Coche(string m, int a) : modelo(m), año(a), velocidad(0) {}

    //Metodo para acelerar
    void acelerar(int incremento) {
        velocidad += incremento;
        cout<<"El coche "<<modelo<<" acelera. Velocidad actual: "<<velocidad<<" km/h"<<endl;
    }

    //Metodo para frenar
    void frenar(int decremento) {
        velocidad -= decremento;
        if (velocidad < 0) {
            velocidad = 0;
        }
        cout<<"El coche "<<modelo<<" frena. Velocidad actual: "<<velocidad<<" km/h"<<endl;
    }

    //Metodo para mostrar año
    void mostrar_year() {
        cout<<"El coche "<<modelo<<" es del year "<<año<<endl;
    }
};

int main() {
    //Creacion del objeto coche
    Coche toyota("Toyota", 2022);
    Coche ford("Ford", 2019);
    Coche mercedes("Mercedes", 2020);

    //Interaccion con marca toyoya
    toyota.acelerar(50);
    toyota.frenar(20);
    toyota.mostrar_year();

    //Interaccion con marca ford
    ford.acelerar(30);
    ford.frenar(10);
    ford.mostrar_year();

    //Interaccion con marca mercedes
    mercedes.acelerar(40);
    mercedes.frenar(15);
    mercedes.mostrar_year();

    return 0;
}
