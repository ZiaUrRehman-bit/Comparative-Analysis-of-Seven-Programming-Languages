public class sum {
    public static void main(String[] args) {
        double rounds = 10000000;
        double x = 0;
        long starttime = System.nanoTime();
        for (double i = 0; i <= rounds; i++) {
            x = x + i;
        }
        long stoptime = System.nanoTime();
        long executiontime = stoptime - starttime; 
        System.out.println(x);
        System.out.println("Execution time in nanosecond"+ executiontime);
    }
}
