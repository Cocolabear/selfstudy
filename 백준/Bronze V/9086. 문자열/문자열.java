import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		
		int n = s.nextInt(); 
		
		String name[] = new String[n];
		
		for(int i=0;i<n;i++) {
			String str = s.next();
			name[i] = str.substring(0,1)+ str.substring(str.length()-1,str.length());
		}
		
		s.close();
		
		for(int i=0;i<n;i++) {
			System.out.println(name[i]);
		}
		
	}
}