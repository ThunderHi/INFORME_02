class Producto:
    #Definiremos los objetos dentro del "private"
    def __init__(self, nombre, inventario, precio):
        self.nombre = nombre
        self.inventario = inventario
        self.ventas_directas = 0
        self.ventas_pedidos = 0
        self.precio = precio

    #Haremos un método de "mostrarinventario"
    def mostrar_inventario(self):
        print("Inventario de", self.nombre + ":", self.inventario)

    #Haremos un método "venderproducto"
    def vender_producto(self, cantidad):
        if self.inventario > cantidad:
            self.inventario -= cantidad
            self.ventas_directas += cantidad
            print("Venta realizada:", cantidad, "unidades de", self.nombre)
        else:
            print("No hay suficiente inventario de", self.nombre)

    def hacer_pedido(self, cliente, cantidad):
        if self.inventario > cantidad:
            self.inventario -= cantidad
            self.ventas_pedidos += cantidad
            print("Pedido realizado para:", cliente + ", Cantidad:", cantidad)
        else:
            print("No hay suficiente inventario de", self.nombre, "para completar el pedido")

    def get_ventas_directas(self):
        return self.ventas_directas

    def get_ventas_pedidos(self):
        return self.ventas_pedidos

    def get_precio(self):
        return self.precio

    def reiniciar_ventas(self):
        self.ventas_directas = 0
        self.ventas_pedidos = 0

    def reiniciar_inventario(self):
        self.inventario = 50

#Reinicia el inventario a su valor inicial

if __name__ == "__main__":
    arroz = Producto("Arroz", 50, 8.0) #La cantidad del producto y el precio
    frijoles = Producto("Frijoles", 20, 5.0) # La cantidad del producto y el precio
    tipo_usuario = ""
    while tipo_usuario != "salir":
        print("Eres usuario, administrador o salir del programa? (usuario/administrador/salir): ")
        tipo_usuario = input()
        if tipo_usuario == "usuario":
            print("Opciones para usuario:")
            print("1. Comprar producto")
            print("2. Hacer pedido")
            opcion = int(input())
            if opcion == 1:
                print("Productos disponibles:")
                print("1. Arroz Precio:", arroz.get_precio())
                print("2. Frijoles Precio:", frijoles.get_precio())
                print("Seleccione el producto a comprar (1 o 2):")
                producto_seleccionado = int(input())
                print("Ingrese la cantidad a comprar:")
                cantidad_compra = int(input())
                if producto_seleccionado == 1:
                    arroz.vender_producto(cantidad_compra)
                elif producto_seleccionado == 2:
                    frijoles.vender_producto(cantidad_compra)
            elif opcion == 2:
                print("Productos disponibles para pedido:")
                print("1. Arroz")
                print("2. Frijoles")
                print("Seleccione el producto a pedir (1 o 2):")
                producto_seleccionado = int(input())
                print("Ingrese su nombre para el pedido:")
                cliente_pedido = input()
                print("Ingrese la cantidad deseada:")
                cantidad_pedido = int(input())
                if producto_seleccionado == 1:
                    arroz.hacer_pedido(cliente_pedido, cantidad_pedido)
                elif producto_seleccionado == 2:
                    frijoles.hacer_pedido(cliente_pedido, cantidad_pedido)
        elif tipo_usuario == "administrador":
            print("Opciones para administrador:")
            print("1. Ver inventario")
            print("2. Ver ventas totales")
            opcion_admin = int(input())
            if opcion_admin == 1:
                arroz.mostrar_inventario()
                frijoles.mostrar_inventario()
            elif opcion_admin == 2:
                print("Ventas totales de Arroz por compras directas:", arroz.get_ventas_directas(), "Ganancia:", arroz.get_ventas_directas() * arroz.get_precio())
                print("Ventas totales de Frijoles por compras directas:", frijoles.get_ventas_directas(), "Ganancia:", frijoles.get_ventas_directas() * frijoles.get_precio())
                print("Ventas totales de Arroz por pedidos:", arroz.get_ventas_pedidos(), "Ganancia:", arroz.get_ventas_pedidos() * arroz.get_precio())
                print("Ventas totales de Frijoles por pedidos:", frijoles.get_ventas_pedidos(), "Ganancia:", frijoles.get_ventas_pedidos() * frijoles.get_precio())
        elif tipo_usuario == "salir":
            print("Saliendo del programa...")
        else:
            print("Opción no válida. Por favor, seleccione 'usuario', 'administrador' o 'salir'.")
        arroz.reiniciar_inventario()
        arroz.reiniciar_ventas()
        frijoles.reiniciar_inventario()
        frijoles.reiniciar_ventas()
