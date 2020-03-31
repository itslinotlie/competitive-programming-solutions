//10/01/18
//https://dmoj.ca/problem/ccc10j2
package CCC_10;

import java.util.*;
import java.io.*;

public class J2UpAndDown {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
       int a = readInt(), b = readInt(), c = readInt(), d = readInt(), s = readInt();
       int tempA = a,tempB = b,tempC = c,tempD = d;
       int Nikky,Byron; Nikky=Byron=0;

        
        for (int i=0;i<s;i++) {
            if (tempA>0) {
                tempA--;
                Nikky++;
            } 
            else if (tempB>0) {
                tempB--;
                Nikky--;
                
                if (tempB==0) {
                    tempA=a;
                    tempB=b;
                }
            }
            if (tempC>0) {
                tempC--;
                Byron++;
            }
            else if (tempD>0) {
                tempD--;
                Byron--;
                if (tempD==0) {
                    tempC=c;
                    tempD=d;
                }
            }     
        }
        if (Nikky>Byron) System.out.println("Nikky");
        else if (Byron>Nikky) System.out.println("Byron");
        else System.out.println("Tied");
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
