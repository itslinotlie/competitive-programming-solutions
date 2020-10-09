// 05/02/2020
// https://dmoj.ca/problem/gfssoc2j5
package pp10;

import java.util.*;
import java.io.*;

public class NightmareAThon {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), q = readInt(), MV = -1;
        int a[] = new int[n+1];
        pair pMax[] = new pair[n+2], sMax[] = new pair[n+2];
        for (int i=0;i<=n+1;i++) {
            pMax[i] = new pair(0, 1);
            sMax[i] = new pair(0, 1);
        }
        for (int i=1;i<=n;i++) {
            a[i] = readInt(); MV = Math.max(MV, a[i]);
            pMax[i].val = a[i]; sMax[i].val = a[i];
        }
        for (int i=1;i<=n;i++) {
            if (pMax[i].val > pMax[i-1].val) pMax[i].frq = 1;
            else if (pMax[i].val == pMax[i-1].val) pMax[i].frq = pMax[i-1].frq + 1;
            else {pMax[i].val = pMax[i-1].val; pMax[i].frq = pMax[i-1].frq;}
        }
        for (int i=n;i>=1;i--) {
            if (sMax[i].val > sMax[i+1].val) sMax[i].frq = 1;
            else if (sMax[i].val == sMax[i+1].val) sMax[i].frq = sMax[i+1].frq + 1;
            else {sMax[i].val = sMax[i+1].val; sMax[i].frq = sMax[i+1].frq;}
        }
        for (int i=1;i<=q;i++) {
            int L = readInt(), R = readInt();
            int x1 = pMax[L-1].val, y1 = sMax[R+1].val;
            int x2 = pMax[L-1].frq, y2 = sMax[R+1].frq;
            if (x1==y1) System.out.println(x1+" "+(x2+y2));
            else if (x1 > y1) System.out.println(x1+" "+x2);
            else System.out.println(y1+" "+y2);
            
        }
    }
    static class pair {
        int val, frq;
        public pair (int val, int frq) {this.val=val;this.frq=frq;}
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
