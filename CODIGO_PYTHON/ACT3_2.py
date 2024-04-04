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
    # Creacion de objetos de la clase Animal
    perro = Animal("Puchito", 7, "Perro")
    gato = Animal("Dieguito", 4, "Gato")
    pajaro = Animal("Piquito", 2, "Pájaro")

    #Creacion de una lista de objetos de la clase Animal
    animales = [perro, gato, pajaro]

    #Utilizar un bucle para recorrer y manipular los objetos en la lista
    print("Interaccion con los animales en la lista:")
    for animal in animales:
        animal.alimentar()
        animal.hacer_sonido()
        animal.mostrar_edad()
        animal.mostrar_tipo()
        print()
