import java.util.Scanner;

public class Main {	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int count = 0;
		int[] arr = new int[n];
		for(int i = 0; i<arr.length; i++) {
			arr[i] = sc.nextInt();
		}
		for(int i = 0; i<arr.length; i++) {
			if(check(arr[i])) {
				count++;
			}
		}
		System.out.println(count);
	}
	static boolean check(int a) {
		int checkCount = 0;
		for(int i = 1; i<=a; i++) {
			if(a%i ==0) {
				checkCount++;
			}
		}
		if(checkCount == 2) {
			return true;
		}
		return false;
	}
}