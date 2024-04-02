public class Persona {
    private String nombre;
    private int edad;

    public Persona(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public void compararCon(Persona otraPersona) {
        // Comparar los atributos de los objetos y mostrar el resultado
        if (this.nombre.equals(otraPersona.nombre) && this.edad == otraPersona.edad) {
            System.out.println("Las personas son iguales.");
        } else {
            System.out.println("Las personas son diferentes.");
        }
    }
}

