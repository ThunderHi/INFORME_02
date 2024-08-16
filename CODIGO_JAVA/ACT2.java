public class Main {
    public static void main(String[] args) {
        double a = 3.5;
        double b = 2.7;
        double c = 4.1;

        double menorValor = menor(a, b, c);
        System.out.println("El menor valor es: " + menorValor);
    }

    public static double menor(double num1, double num2, double num3) {
        double menor = num1; // Asumimos que el primer número es el menor inicialmente

        if (num2 < menor) {
            menor = num2; // Si el segundo número es menor, lo actualizamos
        }
        if (num3 < menor) {
            menor = num3; // Si el tercer número es menor, lo actualizamos
        }

        return menor; // Devolvemos el menor número encontrado
    }
}
