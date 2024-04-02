public class Persona {
    // Atributos
    private String nombre;
    private int edad;
    private String genero;

    // Constructor
    public Persona(String nombre, int edad, String genero) {
        this.nombre = nombre;
        this.edad = edad;
        this.genero = genero;
    }

    // Métodos getter y setter para el atributo nombre
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    // Métodos getter y setter para el atributo edad
    public int getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    // Métodos getter y setter para el atributo genero
    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public static void main(String[] args) {
        // Crear objetos para representar diferentes personas
        Persona persona1 = new Persona("Juan", 30, "Masculino");
        Persona persona2 = new Persona("María", 25, "Femenino");

        // Usar los métodos getter y setter para actualizar y recuperar información
        System.out.println("Nombre de persona1: " + persona1.getNombre());
        System.out.println("Edad de persona1: " + persona1.getEdad());
        System.out.println("Género de persona1: " + persona1.getGenero());

        persona2.setEdad(26); // Actualizar la edad de persona2
        System.out.println("Nueva edad de persona2: " + persona2.getEdad());
    }
}

