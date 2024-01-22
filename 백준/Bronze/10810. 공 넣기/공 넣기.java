import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner ac = new Scanner(System.in);

        int d = ac.nextInt();
        int[] arr = new int[d];
        int u = ac.nextInt();

        for(int i = 0; i < u; i++) {
            int I = ac.nextInt();
            int J = ac.nextInt();
            int K = ac.nextInt();

            for(int j = I - 1; j < J; j++) {
                arr[j] = K;
            }
        }
        for(int k = 0; k < arr.length; k++) {
            System.out.print(arr[k] + " ");
        }
    }
}