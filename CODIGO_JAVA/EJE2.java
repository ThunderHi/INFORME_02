class Producto {
    private String nombre;
    private int cantidad;

    public Producto(String nombre, int cantidad) {
        this.nombre = nombre;
        this.cantidad = cantidad;
    }

    public String getNombre() {
        return nombre;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }
}

class Inventario {
    private Producto[] productosDisponibles;
    private Producto[] productosAgotados;
    private int numProductosDisponibles;
    private int numProductosAgotados;
    private final int CAPACIDAD_MAXIMA = 100;

    public Inventario() {
        this.productosDisponibles = new Producto[CAPACIDAD_MAXIMA];
        this.productosAgotados = new Producto[CAPACIDAD_MAXIMA];
        this.numProductosDisponibles = 0;
        this.numProductosAgotados = 0;
    }

    public void agregarProducto(String nombre, int cantidad) {
        if (numProductosDisponibles < CAPACIDAD_MAXIMA) {
            productosDisponibles[numProductosDisponibles] = new Producto(nombre, cantidad);
            numProductosDisponibles++;
            System.out.println("Producto agregado al inventario: " + nombre);
        } else {
            System.out.println("El inventario está lleno. No se puede agregar más productos.");
        }
    }

    public void realizarPedido(String nombreProducto, int cantidad) {
        for (int i = 0; i < numProductosDisponibles; i++) {
            if (productosDisponibles[i].getNombre().equals(nombreProducto)) {
                if (productosDisponibles[i].getCantidad() >= cantidad) {
                    productosDisponibles[i].setCantidad(productosDisponibles[i].getCantidad() - cantidad);
                    System.out.println("Pedido realizado: " + cantidad + " unidades de " + nombreProducto);
                    return;
                } else {
                    System.out.println("No hay suficientes existencias de " + nombreProducto);
                    return;
                }
            }
        }
        System.out.println("El producto " + nombreProducto + " no está disponible en el inventario.");
    }
}

public class Main {
    public static void main(String[] args) {
        Inventario inventario = new Inventario();
        inventario.agregarProducto("Camisa", 50);
        inventario.agregarProducto("Pantalón", 30);

        inventario.realizarPedido("Camisa", 20); // Se realiza un pedido de 20 camisas
        inventario.realizarPedido("Pantalón", 40); // No hay suficientes existencias de pantalones
        inventario.realizarPedido("Zapatos", 10); // El producto "Zapatos" no está disponible en el inventario
    }
}


