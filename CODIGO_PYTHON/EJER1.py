import random
class Auto:
    def __init__(self, nombre):
        self.nombre = nombre
        self.velocidad = 0

    def acelerar(self, incremento):
        self.velocidad += incremento

    def get_velocidad(self):
        return self.velocidad

class Carrera:
    def __init__(self, distancia_total, dificultad_oponente, jugador):
        self.distancia_total = distancia_total
        self.dificultad_oponente = dificultad_oponente
        self.jugador = jugador
        self.oponente = Auto("Computadora")

    def simular_carrera(self):
        while self.jugador.get_velocidad() < self.distancia_total and self.oponente.get_velocidad() < self.distancia_total:
            self.jugador.acelerar(random.randint(1, 10))  #Incremento de velocidad aleatorio para el jugador
            self.oponente.acelerar(random.randint(1, self.dificultad_oponente))  #Incremento de vel. aleatorio para la computadora
        
        print("Velocidad del jugador:", self.jugador.get_velocidad(), "km/h")
        print("Velocidad del oponente:", self.oponente.get_velocidad(), "km/h")

        if self.jugador.get_velocidad() >= self.distancia_total and self.oponente.get_velocidad() >= self.distancia_total:
            print("¡Empate!")
        elif self.jugador.get_velocidad() >= self.distancia_total:
            print("¡El jugador ha ganado!")
        else:
            print("¡La computadora ha ganado!")


if __name__ == "__main__":
    jugador = Auto("Jugador")
    carrera = Carrera(100, 5, jugador)
    carrera.simular_carrera()
