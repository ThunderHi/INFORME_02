public class Coche {
    // Atributos
    private String modelo;
    private int año;
    private int velocidad;
    // Constructor
    public Coche(String modelo, int año) {
        this.modelo = modelo;
        this.año = año;
        this.velocidad = 0; // Inicialmente el coche está detenido
    }
    // Método para acelerar el coche
    public void acelerar() {
        this.velocidad += 10; // Incrementa la velocidad en 10 km/h
        System.out.println("El coche " + modelo + " ha acelerado. Velocidad actual: " + velocidad + " km/h");
    }
    // Método para frenar el coche
    public void frenar() {
        if (this.velocidad > 0) {
            this.velocidad -= 10; // Disminuye la velocidad en 10 km/h
            System.out.println("El coche " + modelo + " ha frenado. Velocidad actual: " + velocidad + " km/h");
        } else {
            System.out.println("El coche " + modelo + " ya está detenido.");
        }
    }
    public static void main(String[] args) {
        // Crear objetos para representar diferentes coches
        Coche coche1 = new Coche("Toyota", 2020);
        Coche coche2 = new Coche("Ford", 2019);

        // Interactuar con los coches llamando a los métodos correspondientes
        coche1.acelerar();
        coche1.acelerar();
        coche1.frenar();

        coche2.acelerar();
        coche2.frenar();
    }
}
