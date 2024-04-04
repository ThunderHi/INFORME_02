class Persona:
    def __init__(self, nombre, edad, genero):
        self.nombre = nombre
        self.edad = edad
        self.genero = genero

    def getNombre(self):
        return self.nombre

    def getEdad(self):
        return self.edad

    def getGenero(self):
        return self.genero

    def setNombre(self, nombre):
        self.nombre = nombre

    def setEdad(self, edad):
        self.edad = edad

    def setGenero(self, genero):
        self.genero = genero

if __name__ == "__main__":
    #Crear un objeto de persona
    persona = Persona(nombre="Juan", edad=25, genero="Masculino")

    #Utilizar metodos get para recuperar informacion
    print("Nombre:", persona.getNombre())
    print("Edad:", persona.getEdad())
    print("Género:", persona.getGenero())

    #Utilizar metodos set para actualizar información
    persona.setEdad(30)
    print("Nueva Edad:", persona.getEdad())
