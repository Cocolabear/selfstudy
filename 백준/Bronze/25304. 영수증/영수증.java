import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int x = scn.nextInt(); 
        int n = scn.nextInt();
        int total = 0;

        for(int i = 0; i < n; i++){
            int a = scn.nextInt();
            int b = scn.nextInt();
            total += a * b;
        }
        if(total == x){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}