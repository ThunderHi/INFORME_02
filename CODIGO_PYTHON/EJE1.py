class Auto {
    private String nombre;
    private int distanciaRecorrida;

    public Auto(String nombre) {
        this.nombre = nombre;
        this.distanciaRecorrida = 0;
    }

    public void avanzar() {
        int distanciaAvance = (int) (Math.random() * 10) + 1; // Avance aleatorio entre 1 y 10
        distanciaRecorrida += distanciaAvance;
    }

    public int getDistanciaRecorrida() {
        return distanciaRecorrida;
    }

    public String getNombre() {
        return nombre;
    }
}

class Carrera {
    private int distanciaTotal;
    private Auto jugador;
    private Auto computadora;

    public Carrera(int distanciaTotal, String nombreJugador) {
        this.distanciaTotal = distanciaTotal;
        this.jugador = new Auto(nombreJugador);
        this.computadora = new Auto("Computadora");
    }

    public void comenzarCarrera() {
        System.out.println("¡Comienza la carrera!");

        while (jugador.getDistanciaRecorrida() < distanciaTotal && computadora.getDistanciaRecorrida() < distanciaTotal) {
            jugador.avanzar();
            computadora.avanzar();

            System.out.println(jugador.getNombre() + " ha avanzado " + jugador.getDistanciaRecorrida() + " km.");
            System.out.println("La Computadora ha avanzado " + computadora.getDistanciaRecorrida() + " km.");
            System.out.println();
        }

        if (jugador.getDistanciaRecorrida() >= distanciaTotal && computadora.getDistanciaRecorrida() >= distanciaTotal) {
            System.out.println("¡Empate!");
        } else if (jugador.getDistanciaRecorrida() >= distanciaTotal) {
            System.out.println("¡Felicidades, has ganado la carrera!");
        } else {
            System.out.println("La Computadora ha ganado la carrera. ¡Inténtalo de nuevo!");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Carrera carrera = new Carrera(100, "Jugador");
        carrera.comenzarCarrera();
    }
}

