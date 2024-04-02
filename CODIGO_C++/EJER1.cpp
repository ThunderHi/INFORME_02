#include <iostream>
#include <string>

using namespace std;

//Definimos la clase Auto
class Auto {
private:
    string marca;
    int velocidadMaxima;

public:
    //Metodos para establecer los atributos
    void setMarca(string _marcaCARRE) {
        marca = _marcaCARRE;
    }

    void setVelocidadMaxima(int _velocidadMaxima) {
        velocidadMaxima = _velocidadMaxima;
    }

    //Metodos para obtener los atributos
    string getMarca() const {
        return marca;
    }

    int getVelocidadMaxima() const {
        return velocidadMaxima;
    }

    //Simular la velocidad del auto en la carrera
    int correr() const {
        //Simulacion de la velocidad como un número aleatorio entre 1 y la velocidad máxima del auto
        return rand() % velocidadMaxima + 1;
    }
};

//Definicion de la clase Carrera
class Carrera {
private:
    int distanciaTotal;
    int dificultadComputadora;

public:
    //Metodos para establecer los valores de los atributos
    void setDistanciaTotal(int _distanciaTotal) {
        distanciaTotal = _distanciaTotal;
    }

    void setDificultadComputadora(int _dificultadComputadora) {
        dificultadComputadora = _dificultadComputadora;
    }

    //Metodo para simular la carrera entre un auto jugador y un auto de la computadora
    void simularCarrera(const Auto& jugador) const {
        Auto computadora;
        computadora.setVelocidadMaxima(dificultadComputadora);

        int distanciaJugador = 0;
        int distanciaComputadora = 0;

        while (distanciaJugador < distanciaTotal && distanciaComputadora < distanciaTotal) {
    
        //Obtener la velocidad del jugador y de la computadora
            int velocidadJugador = jugador.correr();
            int velocidadComputadora = computadora.correr();

            distanciaJugador += velocidadJugador;
            distanciaComputadora += velocidadComputadora;
        }

        if (distanciaJugador >= distanciaTotal && distanciaComputadora >= distanciaTotal) {
            cout<<"Es un empate..."<<endl;
        } else if (distanciaJugador >= distanciaTotal) {
            cout<<"Ganaste la carrera!"<<endl;
        } else {
            cout<<"La computadora ha ganado la carrera!"<<endl;
        }
    }
};

int main() {
    //Creacion de objetos de la clase Auto
    Auto miAuto; 
    Auto autoEnemigo; 

    //Establecimiento de atributos para tu auto
    miAuto.setMarca("Mi Auto"); 
    miAuto.setVelocidadMaxima(150); 

    //Establecimiento de atributos para el auto de la computadora
    autoEnemigo.setMarca("Auto Enemigo"); 

    //Creacion de objeto de la clase Carrera
    Carrera nuevaCarrera; 

    //Establecimiento de atributos para la nuevaCarrera
    nuevaCarrera.setDistanciaTotal(2000); 
    nuevaCarrera.setDificultadComputadora(120);

    //Simular la nueva carrera
    nuevaCarrera.simularCarrera(miAuto); 

    return 0;
}
