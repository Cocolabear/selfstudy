import java.util.*;
import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
        String s=bf.readLine();
        int in=Integer.parseInt(bf.readLine())-1;
        System.out.println(s.charAt(in));
        }
    }