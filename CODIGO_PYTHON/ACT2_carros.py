class Coche:
    def __init__(self, modelo, año):
        self.modelo = modelo
        self.año = año
        self.velocidad = 0

    def acelerar(self, incremento):
        self.velocidad += incremento
        print("El coche", self.modelo, "acelera. Velocidad actual:", self.velocidad, "km/h")

    def frenar(self, decremento):
        self.velocidad -= decremento
        if self.velocidad < 0:
            self.velocidad = 0
        print("El coche", self.modelo, "frena. Velocidad actual:", self.velocidad, "km/h")

    def mostrar_año(self):
        print("El coche", self.modelo, "es del año", self.año)


toyota = Coche("Toyota", 2022)
ford = Coche("Ford", 2019)
mercedes = Coche("Mercedes", 2020)

toyota.acelerar(50)
toyota.frenar(20)
toyota.mostrar_año()

ford.acelerar(30)
ford.frenar(10)
ford.mostrar_año()

mercedes.acelerar(40)
mercedes.frenar(15)
mercedes.mostrar_año()
