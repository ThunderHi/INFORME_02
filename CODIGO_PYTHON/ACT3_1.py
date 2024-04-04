class Animal:
    def __init__(self, nombre, edad, tipo):
        self.nombre = nombre
        self.edad = edad
        self.tipo = tipo

    def alimentar(self):
        print(self.nombre, "está siendo alimentado.")

    def hacer_sonido(self):
        print(self.nombre, "hace un sonido característico.")

    def mostrar_edad(self):
        print(self.nombre, "tiene", self.edad, "años.")

    def mostrar_tipo(self):
        print(self.nombre, "es un", self.tipo + ".")


if __name__ == "__main__":
    #Creacion de objetos de la clase Animal
    perro = Animal("Puchito", 7, "Perro")
    gato = Animal("Dieguito", 4, "Gato")
    pajaro = Animal("Piquito", 2, "Pájaro")

    #Interaccion con el perro
    perro.alimentar()
    perro.hacer_sonido()
    perro.mostrar_edad()
    perro.mostrar_tipo()

    #Interaccion con el gato
    gato.alimentar()
    gato.hacer_sonido()
    gato.mostrar_edad()
    gato.mostrar_tipo()

    #Interaccion con el pájaro
    pajaro.alimentar()
    pajaro.hacer_sonido()
    pajaro.mostrar_edad()
    pajaro.mostrar_tipo()
