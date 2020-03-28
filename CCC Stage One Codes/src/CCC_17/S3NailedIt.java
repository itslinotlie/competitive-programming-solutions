// 02/11/2020
//https://dmoj.ca/problem/ccc17s3
package CCC_17;

import java.util.*;
import java.io.*;

public class S3NailedIt {
    
    public static void main (String[] args) throws IOException {
        int size = 2000, n = readInt(), arr[] = new int[size+2];
        for (int i=0;i<n;i++) arr[readInt()-1]++;
        int info[] = new int[2*size+2];
        for (int i=0;i<size;i++) {
            info[2*i] += arr[i]/2;
            for (int j=i+1;j<size;j++) {
                info[i+j] += Math.min(arr[i], arr[j]);
            }
        }

        int max = 0, frq = 0;
        for (int i=0;i<2*size;i++) {
            if (info[i]!=0) {
                if (info[i]>max) {
                    max = info[i];
                    frq = 1;
                }
                else if (info[i]==max) {
                    frq++;
                }
            }
        }
        System.out.println(max+" "+frq);
    }
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }    
    static long readLong() throws IOException {
        return Long.parseLong(next());
    }
    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
    static char readCharacter() throws IOException {
        return next().charAt(0);
    }
    static String readLine() throws IOException {
        return br.readLine().trim();
    }
}
