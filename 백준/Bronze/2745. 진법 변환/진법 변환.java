import java.util.*;
public class Main {
	public static void main(String[] args) {

		Scanner num = new Scanner(System.in);

		String s = num.next();
		int N = num.nextInt();
		int t = 1;
		int an = 0;
		
		for (int i = s.length()-1; i >= 0; i--) {
			char c = s.charAt(i);
			
			if('A'<= c && c <= 'Z') {
				an += (c-'A'+10)*t;
			}else {
				an += (c-'0')*t;
			}
			t *= N;
		}
		
		System.out.println(an);
		
	}
}