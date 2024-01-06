import java.util.Scanner;
 
public class Main {
	public static void main(String args[]) {
 
		Scanner in = new Scanner(System.in);
 
		int k = in.nextInt();
		int arr[] = new int[k];
 
		for (int i = 0; i < k; i++) {
			int a = in.nextInt();
			int b = in.nextInt();
			arr[i] = a + b;
		}
		in.close();
 
		for (int num : arr) {
			System.out.println(num);
		}
	}
 
}