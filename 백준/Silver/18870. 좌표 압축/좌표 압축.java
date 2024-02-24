import java.util.Scanner;
import java.util.HashMap;
import java.util.Arrays;
 
 
public class Main {
 
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		
		int[] origin = new int[n];
		int[] sorted = new int[n];	
		HashMap<Integer, Integer> rankingMap = new HashMap<Integer, Integer>();
 
		
		for(int i = 0; i < n; i++) {
			sorted[i] = origin[i] = in.nextInt();
		}
		
		Arrays.sort(sorted);
		
		
		int rank = 0;
		for(int v : sorted) {
			if(!rankingMap.containsKey(v)) {
				rankingMap.put(v, rank);
				rank++;		
			}
		}
		
		StringBuilder sb = new StringBuilder();
		for(int key : origin) {
			int ranking = rankingMap.get(key);
			sb.append(ranking).append(' ');
		}
		
		System.out.println(sb);
		
		
 
	}
}