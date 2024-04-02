public class CuentaBancaria {
    // Atributos
    private double saldo;
    private String numeroCuenta;

    // Constructor
    public CuentaBancaria(String numeroCuenta) {
        this.numeroCuenta = numeroCuenta;
        this.saldo = 0; // Inicialmente el saldo es cero
    }

    // Métodos getter y setter para el atributo saldo
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    // Métodos getter y setter para el atributo numeroCuenta
    public String getNumeroCuenta() {
        return numeroCuenta;
    }

    public void setNumeroCuenta(String numeroCuenta) {
        this.numeroCuenta = numeroCuenta;
    }

    public static void main(String[] args) {
        // Crear objetos para representar diferentes cuentas bancarias
        CuentaBancaria cuenta1 = new CuentaBancaria("123456789");
        CuentaBancaria cuenta2 = new CuentaBancaria("987654321");

        // Usar los métodos getter y setter para actualizar y recuperar información
        cuenta1.setSaldo(1000); // Establecer saldo para cuenta1
        System.out.println("Saldo de cuenta1: " + cuenta1.getSaldo());

        cuenta2.setSaldo(500); // Establecer saldo para cuenta2
        System.out.println("Saldo de cuenta2: " + cuenta2.getSaldo());
    }
}

