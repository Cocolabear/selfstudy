import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb=new StringBuilder();
		
		int n=Integer.parseInt(br.readLine());
		
		for(int i=0;i<n;i++) {
			StringTokenizer st=new StringTokenizer(br.readLine());
			int n1=Integer.parseInt(st.nextToken());
			int n2=Integer.parseInt(st.nextToken());
			
			sb.append(n1*n2/gcd(n1,n2)).append("\n");
		}
		System.out.println(sb);
		
	}
	 public static int gcd(int n1, int n2) {
	        if (n1 % n2 == 0) {
	            return n2;
	        }
	        return gcd(n2, n1%n2);
	    }

}
