class Factura:
    MAX_PRODUCTOS = 10

    def __init__(self):
        self.lista_productos = [None] * Factura.MAX_PRODUCTOS
        self.num_productos = 0

    def agregar_producto(self, producto):
        if self.num_productos < Factura.MAX_PRODUCTOS:
            self.lista_productos[self.num_productos] = producto
            print("Producto agregado a la factura:", producto.obtener_nombre())
            self.num_productos += 1
        else:
            print("No se pueden agregar más productos, límite alcanzado.")

class Producto:
    def __init__(self, nombre):
        self.nombre = nombre
        self.precio = 0.0
        self.cantidad = 0

    def obtener_nombre(self):
        return self.nombre

    def establecer_precio(self, precio):
        self.precio = precio

    def establecer_cantidad(self, cantidad):
        self.cantidad = cantidad


if __name__ == "__main__":
    #Creacion de objetos de la clase Producto
    producto1 = Producto("Laptop")
    producto2 = Producto("Mouse")

    #Establecer precio y cantidad de los productos
    producto1.establecer_precio(1200.50)
    producto1.establecer_cantidad(2)
    producto2.establecer_precio(25.75)
    producto2.establecer_cantidad(5)

    #Creacion de objeto de la clase Factura
    factura = Factura()

    #Agregar productos a la factura
    factura.agregar_producto(producto1)
    factura.agregar_producto(producto2)
