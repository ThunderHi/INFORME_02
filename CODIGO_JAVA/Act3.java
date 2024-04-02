public class Main {
    public static void main(String[] args) {
        // Crear un arreglo de objetos de la clase Ejemplo
        Ejemplo[] arreglo = new Ejemplo[3];

        // Agregar objetos al arreglo
        arreglo[0] = new Ejemplo("Juan", 25);
        arreglo[1] = new Ejemplo("María", 30);
        arreglo[2] = new Ejemplo("Pedro", 28);

        // Mostrar el arreglo antes de realizar operaciones
        System.out.println("Arreglo original:");
        mostrarArreglo(arreglo);

        // Agregar un nuevo objeto al arreglo
        Ejemplo[] nuevoArreglo = new Ejemplo[arreglo.length + 1];
        System.arraycopy(arreglo, 0, nuevoArreglo, 0, arreglo.length);
        nuevoArreglo[arreglo.length] = new Ejemplo("Laura", 35);
        arreglo = nuevoArreglo;
        System.out.println("\nDespués de agregar un nuevo objeto:");
        mostrarArreglo(arreglo);

        // Eliminar el segundo objeto del arreglo
        Ejemplo[] arregloSinSegundo = new Ejemplo[arreglo.length - 1];
        System.arraycopy(arreglo, 0, arregloSinSegundo, 0, 1);
        System.arraycopy(arreglo, 2, arregloSinSegundo, 1, arreglo.length - 2);
        arreglo = arregloSinSegundo;
        System.out.println("\nDespués de eliminar el segundo objeto:");
        mostrarArreglo(arreglo);

        // Modificar el primer objeto del arreglo
        arreglo[0].setEdad(40);
        System.out.println("\nDespués de modificar el primer objeto:");
        mostrarArreglo(arreglo);
    }

    // Método para mostrar los objetos en el arreglo
    public static void mostrarArreglo(Ejemplo[] arreglo) {
        for (Ejemplo ejemplo : arreglo) {
            System.out.println("Nombre: " + ejemplo.getNombre() + ", Edad: " + ejemplo.getEdad());
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
