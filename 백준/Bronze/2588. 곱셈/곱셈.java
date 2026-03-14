import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner kb=new Scanner(System.in);
    
        int n=kb.nextInt();
        int b=kb.nextInt();
    
        System.out.println(n*(b%10));
        System.out.println(n*(b%100/10));
        System.out.println(n*(b/100));
        System.out.println(n*b);

            kb.close();
    }
}