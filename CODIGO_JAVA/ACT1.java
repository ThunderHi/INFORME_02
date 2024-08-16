class Dado {
    public static void main(String[] args) {
        int[] frecuencias = new int[6];

        int lanzamientos = 20000;

        for (int i = 0; i < lanzamientos; i++) {
            int resultado = (int)(Math.random() * 6) + 1;
            frecuencias[resultado - 1]++;
        }

        for (int i = 0; i < frecuencias.length; i++) {
            System.out.println("Cara " + (i + 1) + ": " + frecuencias[i] + " veces");
        }
    }
}
