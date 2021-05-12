// 04/25/2020
// https://dmoj.ca/problem/ccc97s3
package CCC_97;

import java.util.*;
import java.io.*;

public class S3DoubleKnockoutCompetition {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int T = readInt();
        for (int t=0;t<T;t++) {
            int n = readInt(), und = n, one = 0, eli = 0, rnd = 0;
            while (true) {
                System.out.printf("Round %d: %d undefeated, %d one-loss, %d eliminated\n", rnd, und, one, eli);
                if (und==0 && one==1) break;
                if (und==1 && one==1) {und=0; one = 2;}
                else {
                    eli+=one/2;
                    one = one - one/2 + und/2;
                    und = und - und/2;
                }
                rnd++;
            }
            System.out.println("There are "+rnd+" rounds.");
        }
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
