// 04/19/2020
//https://dmoj.ca/problem/ccc07j4
package CCC_07;

import java.util.*;
import java.io.*;

public class J4AnagramChecker {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String s = readLine(), t = readLine();
        s = s.replaceAll(" ", ""); t = t.replaceAll(" ", "");
        String arr[] = s.split(""), arr2[] = t.split("");
        Arrays.sort(arr); Arrays.sort(arr2);
	boolean FLAG = true;
        for (int i=0;i<arr.length && FLAG;i++) {
            if (!arr[i].equals(arr2[i])) FLAG = false;
        }
	System.out.println(FLAG? "Is an anagram. ":"Is not an anagram.");
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {return br.readLine().trim();}      
    static int readInt() throws IOException {return Integer.parseInt(next());}    
    static long readLong() throws IOException {return Long.parseLong(next());}
    static double readDouble() throws IOException {return Double.parseDouble(next());}
}
