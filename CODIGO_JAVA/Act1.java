public class Main {
    public static void main(String[] args) {
        // Crear un objeto de la clase Ejemplo
        Ejemplo objeto = new Ejemplo();

        // Establecer valores de atributos utilizando métodos setter
        objeto.setNombre("Juan");
        objeto.setEdad(25);

        // Recuperar valores de atributos utilizando métodos getter
        String nombre = objeto.getNombre();
        int edad = objeto.getEdad();

        // Imprimir los valores recuperados
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
    }
}

class Ejemplo {
    // Atributos
    private String nombre;
    private int edad;

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

