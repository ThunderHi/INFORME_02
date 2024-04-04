class Libro:
    def __init__(self, titulo):
        self.titulo = titulo
        self.prestado = False

    def marcar_prestado(self):
        self.prestado = True

    def marcar_devuelto(self):
        self.prestado = False

    def esta_prestado(self):
        return self.prestado

    def obtener_titulo(self):
        return self.titulo


class Biblioteca:
    def prestar_libro(self, libro):
        if not libro.esta_prestado():
            libro.marcar_prestado()
            print("Se ha prestado el libro:", libro.obtener_titulo())
        else:
            print("El libro", libro.obtener_titulo(), "ya está prestado.")

    def devolver_libro(self, libro):
        if libro.esta_prestado():
            libro.marcar_devuelto()
            print("Se ha devuelto el libro:", libro.obtener_titulo())
        else:
            print("El libro", libro.obtener_titulo(), "no estaba prestado.")


if __name__ == "__main__":
    #Creacion de objetos de la clase Libro
    libro1 = Libro("El Principito")
    libro2 = Libro("Don Quijote")

    #Creacion de objeto de la clase Biblioteca
    biblioteca = Biblioteca()

    #Prestamo y devolucion de libros
    biblioteca.prestar_libro(libro1)
    biblioteca.prestar_libro(libro2)
    biblioteca.devolver_libro(libro1)
    biblioteca.devolver_libro(libro2)
