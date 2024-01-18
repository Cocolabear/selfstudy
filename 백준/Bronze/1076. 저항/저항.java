import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String f = br.readLine();
        String s = br.readLine();
        String t = br.readLine();

        ArrayList<String> color = new ArrayList<>();
        color.add("black");
        color.add("brown");
        color.add("red");
        color.add("orange");
        color.add("yellow");
        color.add("green");
        color.add("blue");
        color.add("violet");
        color.add("grey");
        color.add("white");

        long an = 0L;
        an += color.indexOf(f)*10;
        an += color.indexOf(s);
        an *= Math.pow(10, color.indexOf(t));

        System.out.println(an);
    }
}