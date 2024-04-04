# Definimos la clase Animal
class Animal:
    # Constructor de la clase Animal que inicializa con los atributos
    def __init__(self, nombre, edad, tipo):
        self.nombre = nombre
        self.edad = edad
        self.tipo = tipo

    # Método para alimentar
    def alimentar(self):
        print(self.nombre, "está siendo alimentado.")

    # Método para hacer un sonido
    def hacer_sonido(self):
        print(self.nombre, "hace un sonido característico.")

    # Método para mostrar la edad que tiene el animal
    def mostrar_edad(self):
        print(self.nombre, "tiene", self.edad, "años.")


# Creación de objetos de la clase Animal
perro = Animal("Puchito", 7, "Perro")
gato = Animal("Dieguito", 4, "Gato")
pajaro = Animal("Piquito", 2, "Pájaro")

# Interacción con el perro
perro.alimentar()
perro.hacer_sonido()
perro.mostrar_edad()

# Interacción con el gato
gato.alimentar()
gato.hacer_sonido()
gato.mostrar_edad()

# Interacción con el pájaro
pajaro.alimentar()
pajaro.hacer_sonido()
pajaro.mostrar_edad()
