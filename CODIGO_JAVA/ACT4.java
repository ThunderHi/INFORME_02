public class Tienda {
    // Atributos
    private String nombre;
    private String direccion;
    private String tipo;

    // Constructor
    public Tienda(String nombre, String direccion, String tipo) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.tipo = tipo;
    }

    // Método para vender un producto
    public void venderProducto(String producto) {
        System.out.println("Se ha vendido el producto '" + producto + "' en la tienda " + nombre);
    }

    // Método para agregar un producto
    public void agregarProducto(String producto) {
        System.out.println("Se ha agregado el producto '" + producto + "' a la tienda " + nombre);
    }

    public static void main(String[] args) {
        // Crear objetos para representar diferentes tiendas
        Tienda tienda1 = new Tienda("Tienda A", "Calle Principal 123", "Electrónica");
        Tienda tienda2 = new Tienda("Tienda B", "Avenida Central 456", "Ropa");

        // Interactuar con las tiendas llamando a los métodos correspondientes
        tienda1.agregarProducto("Teléfono móvil");
        tienda1.venderProducto("Laptop");

        tienda2.agregarProducto("Camiseta");
        tienda2.venderProducto("Pantalón");
    }
}
