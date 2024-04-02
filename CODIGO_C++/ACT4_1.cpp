#include <iostream>
#include <string>

using namespace std;

//Declaracion anticipada de la clase Libro
class Libro;

//Clase Biblioteca
class Biblioteca {
public:
    //Metodo para prestar un libro
    void prestarLibro(Libro &libro);

    //Metodo para devolver un libro
    void devolverLibro(Libro &libro);
};

//Clase Libro
class Libro {
private:
    string titulo;
    bool prestado;

public:
    //Constructor de la clase Libro
    Libro(string t) : titulo(t), prestado(false) {}

    //Metodo para marcar el libro como prestado
    void marcarPrestado() {
        prestado = true;
    }

    //Metodo para marcar el libro como devuelto
    void marcarDevuelto() {
        prestado = false;
    }

    //Metodo para obtener el estado de prestamo del libro
    bool estaPrestado() {
        return prestado;
    }

    //Metodo para obtener el titulo del libro
    string obtenerTitulo() {
        return titulo;
    }
};

//Implementacion del metodo prestarLibro de la clase Biblioteca
void Biblioteca::prestarLibro(Libro &libro) {
    if (!libro.estaPrestado()) {
        libro.marcarPrestado();
        cout << "Se ha prestado el libro: " << libro.obtenerTitulo() << endl;
    } else {
        cout << "El libro " << libro.obtenerTitulo() << " ya esta prestado." << endl;
    }
}

//Implementacion del metodo devolverLibro de la clase Biblioteca
void Biblioteca::devolverLibro(Libro &libro) {
    if (libro.estaPrestado()) {
        libro.marcarDevuelto();
        cout << "Se ha devuelto el libro: " << libro.obtenerTitulo() << endl;
    } else {
        cout << "El libro " << libro.obtenerTitulo() << " no estaba prestado." << endl;
    }
}

int main() {
    //Creacion de objetos de la clase Libro
    Libro libro1("El Principito");
    Libro libro2("Don Quijote");

    //Creacion de objeto de la clase Biblioteca
    Biblioteca biblioteca;

    //Prestamo y devolucion de libros
    biblioteca.prestarLibro(libro1);
    biblioteca.prestarLibro(libro2);
    biblioteca.devolverLibro(libro1);
    biblioteca.devolverLibro(libro2);

    return 0;
}
