public class Factura {
    // Atributos
    private int numeroFactura;
    private String fechaEmision;
    private double monto;

    // Constructor
    public Factura(int numeroFactura, String fechaEmision, double monto) {
        this.numeroFactura = numeroFactura;
        this.fechaEmision = fechaEmision;
        this.monto = monto;
    }

    // Métodos get y set para numeroFactura
    public int getNumeroFactura() {
        return numeroFactura;
    }

    public void setNumeroFactura(int numeroFactura) {
        this.numeroFactura = numeroFactura;
    }

    // Métodos get y set para fechaEmision
    public String getFechaEmision() {
        return fechaEmision;
    }

    public void setFechaEmision(String fechaEmision) {
        this.fechaEmision = fechaEmision;
    }

    // Métodos get y set para monto
    public double getMonto() {
        return monto;
    }

    public void setMonto(double monto) {
        this.monto = monto;
    }

    public static void main(String[] args) {
        // Crear objetos para representar diferentes facturas
        Factura factura1 = new Factura(001, "2024-03-21", 150.75);
        Factura factura2 = new Factura(002, "2024-03-22", 200.50);

        // Acceder a los atributos de las facturas utilizando los métodos get
        System.out.println("Factura 1 - Número: " + factura1.getNumeroFactura() + ", Fecha de Emisión: "
                + factura1.getFechaEmision() + ", Monto: $" + factura1.getMonto());
        System.out.println("Factura 2 - Número: " + factura2.getNumeroFactura() + ", Fecha de Emisión: "
                + factura2.getFechaEmision() + ", Monto: $" + factura2.getMonto());

        // Actualizar los valores de los atributos utilizando los métodos set
        factura1.setMonto(175.25);
        factura2.setFechaEmision("2022-03-23");

        // Mostrar las facturas actualizadas
        System.out.println("Factura 1 (actualizada) - Número: " + factura1.getNumeroFactura() + ", Fecha de Emisión: "
                + factura1.getFechaEmision() + ", Monto: $" + factura1.getMonto());
        System.out.println("Factura 2 (actualizada) - Número: " + factura2.getNumeroFactura() + ", Fecha de Emisión: "
                + factura2.getFechaEmision() + ", Monto: $" + factura2.getMonto());
    }
}
