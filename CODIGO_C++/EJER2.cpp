#include <iostream>
#include <string>

using namespace std;

//Definimos nuestra clase que en este caso seria "Producto"
//Lo definiremos como private
class Producto {
//Definiremos los objetos dentro del "Private"
private:
    string nombre;
    int inventario;
    int ventasDirectas;
    int ventasPedidos;
    float precio;
//En el apartado de public, vamos a llamar la clase "Producto" del private
public:
    Producto(string nombre, int inventario, float precio) : nombre(nombre), inventario(inventario), ventasDirectas(0), ventasPedidos(0), precio(precio) {}
//Haremos un metodo de "MostrarInventario"
    void mostrarInventario() {
        cout<<"Inventario de "<<nombre<<": "<<inventario<< endl;
    }
//Haremos un metodo "venderProducto"
    void venderProducto(int cantidad) {
        if (inventario >= cantidad) {   //Se asegura de que haya suficiente stock para realizar la operación
            inventario -= cantidad;     //Si la condición anterior se cumple, se resta la cantidad especificada del inventario del producto
            //Simula la venta de esa cantidad de unidades o la realización de un pedido.
            ventasDirectas += cantidad; //Después de restar la cantidad del inventario, se incrementa el contador de ventas directas del producto en la cantidad especificada
            cout<<"Venta realizada: "<<cantidad<<" unidades de "<<nombre<< endl;
        } else {
            cout<<"No hay suficiente inventario de "<<nombre<< endl;
        }
    }

    void hacerPedido(string cliente, int cantidad) {
        if (inventario >= cantidad) {
            inventario -= cantidad;
            ventasPedidos += cantidad;  //Si la condicion anterior se cumple, se resta la cantidad del inventario del producto
            cout<<"Pedido realizado para: "<<cliente<<", Cantidad: "<<cantidad<< endl;
        } else {
            cout<<"No hay suficiente inventario de " <<nombre<< " para completar el pedido"<< endl;
        }
    }

    int getVentasDirectas() {   //Devuelve la cantidad total de ventas directas realizadas del producto
        return ventasDirectas;
    }

    int getVentasPedidos() {    //Devuelve la cantidad total de ventas por pedidos realizadas del producto.
        return ventasPedidos;
    }

    float getPrecio() {         //Devuelve el precio unitario del producto
        return precio;
    }

    void reiniciarVentas() {    //Reinicia el inventario del producto, estableciéndolo en 50 unidades, que es el valor inicial estableciéndolos en cero
        ventasDirectas = 0;
        ventasPedidos = 0;
    }

    void reiniciarInventario() {
        inventario = 50;        //Reinicia el inventario a su valor inicial
    }
};

int main() {
    Producto arroz("Arroz", 50, 8.0);       //La cantidad del producto y el precio
    Producto frijoles("Frijoles", 20, 5.0); //La cantidad del producto y el precio

    string tipoUsuario = "";
    
    while (tipoUsuario != "salir") {
        cout<<"Eres usuario, administrador o salir del programa? (usuario/administrador/salir): ";  //Opcion para ver si el usuario es usuario, admin o desea salir
        cin>>tipoUsuario;
        //Si elije que es usuario, este lo mandara a las opciones que tiene el usuario
        if (tipoUsuario == "usuario") {     
            int opcion;
            cout<<"Opciones para usuario:"<<endl;
            cout<<"1. Comprar producto"<<endl;
            cout<<"2. Hacer pedido"<<endl;
            cin>>opcion;
            //Debe ingresar la cantidad a comprar
            if (opcion == 1) {
                int cantidadCompra;
                cout<<"Productos disponibles:"<<endl;
                cout<<"1. Arroz - Precio: "<<arroz.getPrecio() << endl;
                cout<<"2. Frijoles - Precio: "<<frijoles.getPrecio() << endl;
                cout<<"Seleccione el producto a comprar (1 o 2): ";
                int productoSeleccionado;
                cin>>productoSeleccionado;
                cout<<"Ingrese la cantidad a comprar: ";
                cin>>cantidadCompra;

                if (productoSeleccionado == 1) {
                    arroz.venderProducto(cantidadCompra);
                } else if (productoSeleccionado == 2) {
                    frijoles.venderProducto(cantidadCompra);
                }
            //Si el usuario desea hacer pedido, lo mandara a la interfaz de los pedidos
            } else if (opcion == 2) {
                string clientePedido;
                int cantidadPedido;
                cout<<"Productos disponibles para pedido:"<<endl;
                cout<<"1. Arroz"<<endl;
                cout<<"2. Frijoles"<<endl;
                cout<<"Seleccione el producto a pedir (1 o 2): ";
                int productoSeleccionado;
                cin>>productoSeleccionado;
                cout<<"Ingrese su nombre para el pedido: ";
                cin>>clientePedido;
                cout<<"Ingrese la cantidad deseada: ";
                cin>>cantidadPedido;
                //Se encarga de tomar la cantidad de los productos ingresados
                if (productoSeleccionado == 1) {
                    arroz.hacerPedido(clientePedido, cantidadPedido);
                } else if (productoSeleccionado == 2) {
                    frijoles.hacerPedido(clientePedido, cantidadPedido);
                }
            }
        //En el interfaz de administrador, tendra dos opciones, ver inventario y ver ventas totales
        } else if (tipoUsuario == "administrador") {
            int opcionAdmin;
            cout<<"Opciones para administrador:" << endl;
            cout<<"1. Ver inventario"<<endl;
            cout<<"2. Ver ventas totales"<<endl;
            cin>>opcionAdmin;
            //Si elije ver inventario, podra ver la cantidad vendida de cada producto y las ganancias de estos
            //Tambien podra ver los pedidos realizados por el usuario
            if (opcionAdmin == 1) {
                arroz.mostrarInventario();
                frijoles.mostrarInventario();
            } else if (opcionAdmin == 2) {
                cout<<"Ventas totales de Arroz por compras directas: "<<arroz.getVentasDirectas()<<" - Ganancia: "<<arroz.getVentasDirectas() * arroz.getPrecio()<<endl;
                cout<<"Ventas totales de Frijoles por compras directas: "<<frijoles.getVentasDirectas()<<" - Ganancia: "<<frijoles.getVentasDirectas() * frijoles.getPrecio()<<endl;
                cout<<"Ventas totales de Arroz por pedidos: "<<arroz.getVentasPedidos() << " - Ganancia: "<<arroz.getVentasPedidos() * arroz.getPrecio()<<endl;
                cout<<"Ventas totales de Frijoles por pedidos: "<<frijoles.getVentasPedidos() << " - Ganancia: "<<frijoles.getVentasPedidos() * frijoles.getPrecio()<<endl;
                cout<<"Ventas totales de todos los pedidos: "<<(arroz.getVentasDirectas() + arroz.getVentasPedidos()) * arroz.getPrecio() + (frijoles.getVentasDirectas() + frijoles.getVentasPedidos()) * frijoles.getPrecio()<<endl;
            }
        //Si el usuario desea salir del programa, solo debera escribir "salir"
        } else if (tipoUsuario == "salir") {
            cout<<"Saliendo del programa..."<<endl;
        } else {
        //Muestra mensaje si no ingresa la opcion valida
            cout<<"Opcion no valida. Por favor, seleccione 'usuario', 'administrador' o 'salir'."<<endl;
        }
    }

    //Reinicia el inventario y las ventas de ambos productos
    arroz.reiniciarInventario();
    arroz.reiniciarVentas();
    frijoles.reiniciarInventario();
    frijoles.reiniciarVentas();

    return 0;
}
