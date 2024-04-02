#include <iostream>
#include <string>

using namespace std;

//Definimos la clase Avion
class Avion {
private:
    string modelo;
    int capacidadCombustible;
    int consumoPorHora;

public:
    //Constructor de la clase Avion
    Avion(string _modelo, int _capacidadCombustible, int _consumoPorHora) : modelo(_modelo), capacidadCombustible(_capacidadCombustible), consumoPorHora(_consumoPorHora) {}

    //Metodo para verificar si hay suficiente combustible
    bool verificarCombustibleSuficiente(int duracionMision) const {
        int combustibleNecesario = duracionMision * consumoPorHora;
        return combustibleNecesario <= capacidadCombustible;
    }
};

//Definimos la clase mision
class Mision {
private:
    string destino;
    int duracion;
    int tripulacion;

public:
    //Constructor de la clase Mision
    Mision(string _destino, int _duracion, int _tripulacion) : destino(_destino), duracion(_duracion), tripulacion(_tripulacion) {}

    //Metodo para simular una misión con el avion
    void simularMision(const Avion& avion) const {
        cout<<"Simulando mision hacia "<<destino<<"..."<<endl;
        
        //Verifica si el avión tiene suficiente combustible
        if (avion.verificarCombustibleSuficiente(duracion)) {
            cout<<"La mision se puede completar con exito. Buena suerte!"<<endl;
        } else {
            cout<<"El avion no tiene suficiente combustible para completar la mision. Mision abortada!"<<endl;
        }
    }
};

int main() {

    //Crea el avion y la mision
    Avion avion("Peruvian", 5000, 100);
    Mision mision("Alemania", 8, 5);

    //Simula la mision con el avion
    mision.simularMision(avion);

    return 0;
}
