public class Animal {
    // Atributos
    private String nombre;
    private int edad;
    private String tipo;

    // Constructor
    public Animal(String nombre, int edad, String tipo) {
        this.nombre = nombre;
        this.edad = edad;
        this.tipo = tipo;
    }

    // Método para alimentar al animal
    public void alimentar() {
        System.out.println("El animal " + nombre + " está comiendo.");
    }

    // Método para hacer sonidos
    public void hacerSonido() {
        System.out.println("El animal " + nombre + " está haciendo un sonido.");
    }

    // Método principal para probar la clase
    public static void main(String[] args) {
        // Crear objetos para representar diferentes animales
        Animal perro = new Animal("Puchito", 7, "Perro");
        Animal pájaro = new Animal("Piquito", 2, "Pájaro");

        // Interactuar con los animales llamando a los métodos correspondientes
        perro.alimentar();
        perro.hacerSonido();
        System.out.println("La edad de " + perro.nombre + " es " + perro.edad + " años.");
        
        pájaro.alimentar();
        pájaro.hacerSonido();
        System.out.println("La edad de " + pájaro.nombre + " es " + pájaro.edad + " años.");
    }
}
