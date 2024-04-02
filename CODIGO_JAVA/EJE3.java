class Avion {
    private String destino;
    private int duracion;
    private int combustible;
    private int tripulacionNecesaria;

    public Avion(String destino, int duracion, int combustible, int tripulacionNecesaria) {
        this.destino = destino;
        this.duracion = duracion;
        this.combustible = combustible;
        this.tripulacionNecesaria = tripulacionNecesaria;
    }

    public void simularMision() {
        int consumoCombustible = duracion * 2; // Suponiendo un consumo constante de combustible por hora de vuelo
        if (combustible >= consumoCombustible && tripulacionNecesaria > 0) {
            System.out.println("La misión hacia " + destino + " se ha completado con éxito.");
        } else {
            System.out.println("No hay suficiente combustible o tripulación para completar la misión hacia " + destino + ".");

