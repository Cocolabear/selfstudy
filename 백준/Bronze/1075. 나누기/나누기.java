import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int s = Integer.parseInt(br.readLine());
        
        int t = (n/100)*100;
        while(true) {
            if(t%s == 0) {
                int res = t % 100;
                if(res < 10) System.out.println("0" + res);
                else System.out.println(res);
                return;
            }
            t=t+1;
        }
        
    }
}