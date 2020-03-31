// 10/06/18
//https://dmoj.ca/problem/ccc10j3
package CCC_10;

import java.util.*;
import java.io.*;

public class J3Punchy {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int A = 0, B = 0, X;
    
        for (String line = readLine(); !line.isEmpty(); line = readLine()) {    
            String[] Magic = line.split("\\s+");
            X = Integer.parseInt(Magic[0]);  
                
            if (X==7) break;
            
            switch (X) {
                
                case 1:
                    if (Magic[1].compareTo("A")==0) A = Integer.parseInt(Magic[2]);
                    else if (Magic[1].compareTo("B")==0) B = Integer.parseInt(Magic[2]);
                        break;
                case 2:
                   if (Magic[1].compareTo("A")==0) System.out.println(A);
                    else if (Magic[1].compareTo("B")==0) System.out.println(B);
                        break;
                case 3:
                    if (Magic[1].compareTo("A")==0) A = A+B;
                    else if (Magic[1].compareTo("B")==0) B = B+A;
                        break;
                case 4:
                    if (Magic[1].compareTo("A")==0) A = A*B;
                    else if (Magic[1].compareTo("B")==0) B = B*A;
                        break;
                case 5:    
                    if (Magic[1].compareTo("A")==0) A = A-B;
                    else if (Magic[1].compareTo("B")==0) B = B-A;
                        break;
                case 6:    
                    if (Magic[1].compareTo("A")==0) A = A/B;
                    else if (Magic[1].compareTo("B")==0) B = B/A;
                        break;
            }
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
