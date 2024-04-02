public class Main {
    public static void main(String[] args) {
        // Crear un arreglo de objetos de la clase Ejemplo
        Ejemplo[] arreglo = new Ejemplo[3];

        // Agregar objetos al arreglo
        arreglo[0] = new Ejemplo("Juan", 25);
        arreglo[1] = new Ejemplo("María", 30);
        arreglo[2] = new Ejemplo("Pedro", 28);

        // Recorrer los objetos en el arreglo
        for (int i = 0; i < arreglo.length; i++) {
            System.out.println("Nombre: " + arreglo[i].getNombre());
            System.out.println("Edad: " + arreglo[i].getEdad());
            System.out.println();
        }
    }
}

class Ejemplo {
    // Atributos
    private String nombre;
    private int edad;

    // Constructor
    public Ejemplo(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    // Métodos getter y setter para el atributo "nombre"
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    // Métodos getter y setter para el atributo "edad"
    public int getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }
}
