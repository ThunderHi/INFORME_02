public class Estudiante {
    // Atributos
    private String nombre;
    private int edad;
    private String grado;
    private double nota; // Nota del estudiante en el examen
    // Constructor
    public Estudiante(String nombre, int edad, String grado) {
        this.nombre = nombre;
        this.edad = edad;
        this.grado = grado;
    }
    // Método para tomar el examen
    public void tomarExamen(double nota) {
        this.nota = nota;
        System.out.println(nombre + " ha tomado el examen y ha obtenido una nota de " + nota);
    }
    // Método para calificar al estudiante
    public void calificar() {
        if (nota >= 6.0) {
            System.out.println(nombre + " ha aprobado el examen!");
        } else {
            System.out.println(nombre + " ha reprobado el examen.");
        }
    }
    public static void main(String[] args) {
        // Crear objetos para representar diferentes estudiantes
        Estudiante estudiante1 = new Estudiante("Juan", 20, "2do año");
        Estudiante estudiante2 = new Estudiante("María", 21, "3er año");
        // Interactuar con los estudiantes llamando a los métodos correspondientes
        estudiante1.tomarExamen(7.5);
        estudiante1.calificar();

        estudiante2.tomarExamen(4.0);
        estudiante2.calificar();
    }
}

