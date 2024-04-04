class Avion:
    #Constructor
    def __init__(self, destino, duracion_mision, combustible_actual, combustible_por_hora, tripulacion_necesaria):
        self.destino = destino
        self.duracion_mision = duracion_mision
        self.combustible_actual = combustible_actual
        self.combustible_por_hora = combustible_por_hora
        self.tripulacion_necesaria = tripulacion_necesaria

    #Metodo para simular la mision
    def simular_mision(self):
        #Verificar si hay suficiente combustible para completar la mision
        combustible_requerido = self.duracion_mision * self.combustible_por_hora
        if self.combustible_actual >= combustible_requerido:
            print("La misión a", self.destino, "ha sido completada con éxito.")
        else:
            print("No hay suficiente combustible para completar la misión a", self.destino)

    #Metodo para verificar si se cuenta con la tripulacion necesaria
    def verificar_tripulacion(self, tripulacion_disponible):
        if tripulacion_disponible > self.tripulacion_necesaria:
            print("Se cuenta con la tripulación necesaria.")
        else:
            print("No se cuenta con la tripulación necesaria para realizar la misión.")


#Clase Mision
class Mision:
    #Metodo principal para probar las clases
    @staticmethod
    def main():
        #Crear un avión para una mision
        avion = Avion(destino="Ciudad X", duracion_mision=4, combustible_actual=1000, combustible_por_hora=200, tripulacion_necesaria=3)
        #Simular la mision
        avion.simular_mision()
        #Simular la mision
        avion.simular_mision()
        #Verificar si hay suficiente tripulacion
        tripulacion_disponible = 4  # Ejemplo: 4 tripulantes disponibles
        avion.verificar_tripulacion(tripulacion_disponible)


#Llamada al metodo principal
Mision.main()
