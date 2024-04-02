public class Libro {
    // Atributos
    private String titulo;
    private String autor;
    private String genero;

    // Constructor
    public Libro(String titulo, String autor, String genero) {
        this.titulo = titulo;
        this.autor = autor;
        this.genero = genero;
    }

    // Métodos getter y setter para el atributo titulo
    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    // Métodos getter y setter para el atributo autor
    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    // Métodos getter y setter para el atributo genero
    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public static void main(String[] args) {
        // Crear objetos para representar diferentes libros
        Libro libro1 = new Libro("El código Da Vinci", "Dan Brown", "Ficción");
        Libro libro2 = new Libro("Cien años de soledad", "Gabriel García Márquez", "Realismo mágico");

        // Usar los métodos getter y setter para actualizar y recuperar información
        libro1.setGenero("Misterio"); // Actualizar el género del libro1
        System.out.println("Género del libro1: " + libro1.getGenero());

        System.out.println("Autor del libro2: " + libro2.getAutor()); // Recuperar el autor del libro2
    }
}
