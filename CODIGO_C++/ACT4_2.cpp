#include <iostream>
#include <string>

using namespace std;

//Declaracion anticipada de la clase Producto
class Producto;

//Clase Factura
class Factura {
private:
    static const int MAX_PRODUCTOS = 10;
    Producto* listaProductos[MAX_PRODUCTOS];
    int numProductos;

public:
    Factura() : numProductos(0) {}

    //Metodo para agregar un producto a la factura
    void agregarProducto(Producto &producto);
};

//Clase Producto
class Producto {
private:
    string nombre;
    double precio;
    int cantidad;

public:
    Producto(string n) : nombre(n), precio(0.0), cantidad(0) {}

    //Metodo para obtener el nombre del producto
    string obtenerNombre() {
        return nombre;
    }

    //Metodo para establecer el precio del producto
    void establecerPrecio(double p) {
        precio = p;
    }

    //Metodo para establecer la cantidad del producto
    void establecerCantidad(int c) {
        cantidad = c;
    }
};

//Implementacion del metodo agregarProducto de la clase Factura
void Factura::agregarProducto(Producto &producto) {
    if (numProductos < MAX_PRODUCTOS) {
        listaProductos[numProductos] = &producto;
        cout << "Producto agregado a la factura: " << producto.obtenerNombre() << endl;
        numProductos++;
    } else {
        cout << "No se pueden agregar mas productos, limite alcanzado." << endl;
    }
}

int main() {
    //Creacion de objetos de la clase Producto
    Producto producto1("Laptop");
    Producto producto2("Mouse");

    //Establecer precio y cantidad de los productos
    producto1.establecerPrecio(1200.50);
    producto1.establecerCantidad(2);

    producto2.establecerPrecio(25.75);
    producto2.establecerCantidad(5);

    //Creacion de objeto de la clase Factura
    Factura factura;

    //Agregar productos a la factura
    factura.agregarProducto(producto1);
    factura.agregarProducto(producto2);

    return 0;
}
