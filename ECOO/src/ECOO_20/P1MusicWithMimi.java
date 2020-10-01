// 05/02/2020
// https://dmoj.ca/problem/ecoo20p1
package ECOO_20;

import java.util.*;
import java.io.*;

public class P1MusicWithMimi {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        //C C# D D# E F F# G G# A A# B C
        int n = readInt(), MV = 12;
        String mus[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
        for (int T=0;T<n;T++) {
            String word[] = readLine().split("[ ]");
            int id[] = new int[4];
            for (int i=0;i<4;i++) {
                for (int j=0;j<MV;j++) if (word[i].equals(mus[j])) id[i] = j;
            }
            for (int i=0;i<4-1;i++) {
            }
            System.out.println(fun(id));
        }
    }
    static String fun(int id[]) {
        int a = Math.min(Math.abs(id[0]-id[0+1]), 12-Math.abs(id[0]-id[0+1]));
        int b = Math.min(Math.abs(id[1]-id[1+1]), 12-Math.abs(id[1]-id[1+1]));
        int c = Math.min(Math.abs(id[2]-id[2+1]), 12-Math.abs(id[2]-id[2+1]));
        
        if (a==4 && b==3 && c ==3) return "root";
        else if (a==3 && b==3 && c==2) return "first";
        else if (a==3 && b==2 && c==4) return "second";
        else if (a==2 && b==4 && c==3) return "third";
        else return "invalid";
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
