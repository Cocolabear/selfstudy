import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(); 
		int cnt = sc.nextInt(); 

		int temp=0;
		
		int bu[] = new int[n]; 
		for(int i=0;i<bu.length;i++) {
			bu[i] = i+1;	
		}
		
		for(int i=0;i<cnt;i++) { 
			int a = sc.nextInt()-1; 
			int b = sc.nextInt()-1; 
			
			while(a<b) { 
				temp = bu[a]; 
				bu[a] = bu[b]; 
				bu[b] = temp; 
				a++;	
				b--;	
			}
		}
		sc.close();
		
		for(int i=0;i<bu.length;i++) {
			System.out.print(bu[i]+" ");
		}
		
		
	}
}