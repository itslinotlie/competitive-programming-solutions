// 11/16/2019
//https://dmoj.ca/problem/ccc07s1
package CCC_07;

import java.io.*;
import java.util.*;

public class S1FederalVotingAge {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        for (int i=0;i<n;i++) {
            int year = readInt(), month = readInt(), day = readInt();
            if (year > 1989) System.out.println("No");
            else if (year < 1989) System.out.println("Yes");
            else {
                if (month > 2) System.out.println("No");
                else if (month < 2) System.out.println("Yes");
                else {
                    if (day < 28) System.out.println("Yes");
                    else System.out.println("No");
                }
            }
        }
    }
    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }
}
