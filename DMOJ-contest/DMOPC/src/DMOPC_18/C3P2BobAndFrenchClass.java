// 03/14/2020
// https://dmoj.ca/problem/dmopc18c3p2
package DMOPC_18;

import java.util.*;
import java.io.*;

public class C3P2BobAndFrenchClass {
    static long f[], e[], dp[];
    public static void main (String[] args) throws IOException{
        int n = readInt(), f[] = new int[n+1], e[] = new int[n+1], dp[][] = new int[3][n+1];
        for (int i=1;i<=n;i++) f[i] = readInt();
        for (int i=1;i<=n;i++) e[i] = readInt();
        for (int i=1;i<=n;i++) dp[0][i] = dp[0][i-1] + e[i];
        if (n==1) System.out.println(Math.max(e[1],f[1]));
        else if (n==2) {
            System.out.println(Math.max(e[1],f[1])+Math.max(e[2],f[2]));
        }
        else {
            dp[1][1] = Math.max(e[1], f[1]);
            for (int i=2;i<=n;i++) {
                int p = dp[1][i-1]; 
                int p2 = dp[1][i-2]; int tp = dp[0][i-1]-dp[0][i-2];
                dp[1][i] = Math.max(p2+tp+f[i], p+e[i]);
            }
            dp[2][1] = Math.max(e[1],f[1]); dp[2][2] = dp[2][1] + Math.max(e[2],f[2]);
            for (int i=3;i<=n;i++) {
                int p = dp[2][i-1];
                int p2 = dp[2][i-2]; int ttp2 = dp[0][i-1]-dp[0][i-2];
                int p3 = dp[2][i-3]; int ttp3 = dp[0][i-2]-dp[0][i-3]; int m1 = Math.max(e[i-1],f[i-1]); int m2 = Math.max(e[i], f[i]);
                dp[2][i] = Math.max(Math.max(p+e[i],p3+ttp3+m1+m2), p2+ttp2+m2);
            }
            System.out.println(Math.max(Math.max(dp[0][n],dp[1][n]),dp[2][n]));
        }
    }
    final private static int BUFFER_SIZE = 1 << 16;
    private static DataInputStream din = new DataInputStream(System.in);
    private static byte[] buffer = new byte[BUFFER_SIZE];
    private static int bufferPointer = 0, bytesRead = 0;
    static PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    public static String readLine() throws IOException {
        byte[] buf = new byte[64]; // line length
        int cnt = 0, c;
        while ((c = Read()) != -1) {
            if (c == '\n') break;
            buf[cnt++] = (byte) c;
        }
        return new String(buf, 0, cnt);
    }

    public static String read() throws IOException {
        byte[] ret = new byte[1024];
        int idx = 0;
        byte c = Read();
        while (c <= ' ') {c = Read();}
        do {
            ret[idx++] = c;
            c = Read();
        } while (c != -1 && c != ' ' && c != '\n' && c != '\r');
        return new String(ret, 0, idx);
    }

    public static int readInt() throws IOException {
        int ret = 0;
        byte c = Read();
        while (c <= ' ') {c = Read();}
        boolean neg = (c == '-');
        if (neg) {c = Read();}
        do {ret = ret * 10 + c - '0';
        } while ((c = Read()) >= '0' && c <= '9');
        if (neg) {return -ret;}
        return ret;
    }

    public static long readLong() throws IOException {
        long ret = 0;
        byte c = Read();
        while (c <= ' ') {c = Read();}
        boolean neg = (c == '-');
        if (neg) {c = Read();}
        do {ret = ret * 10 + c - '0';
        } while ((c = Read()) >= '0' && c <= '9');
        if (neg) {return -ret;}
        return ret;
    }

    public static double readDouble() throws IOException {
        double ret = 0, div = 1;
        byte c = Read();
        while (c <= ' ') {c = Read();}
        boolean neg = (c == '-');
        if (neg) {c = Read();}
        do {ret = ret * 10 + c - '0';
        } while ((c = Read()) >= '0' && c <= '9');
        if (c == '.') {
            while ((c = Read()) >= '0' && c <= '9') {ret += (c - '0') / (div *= 10);}
        }
        if (neg) {return -ret;}
        return ret;
    }

    private static void fillBuffer() throws IOException {
        bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
        if (bytesRead == -1) {buffer[0] = -1;}
    }

    private static byte Read() throws IOException {
        if (bufferPointer == bytesRead) {fillBuffer();}
        return buffer[bufferPointer++];
    }

    static void flush() {
        out.flush();
    }

    static void exit() throws IOException {
        din.close();
        out.close();
        System.exit(0);
    }
}