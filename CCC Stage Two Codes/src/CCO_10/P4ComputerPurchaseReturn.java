// 03/14/2020
// https://dmoj.ca/problem/cco10p4
package CCO_10;

import java.util.*;
import java.io.*;

public class P4ComputerPurchaseReturn {
    static int max = 3000;
    public static void main (String[] args) throws IOException {
        int T = readInt(), N = readInt(), value[][] = new int[T+1][max+1];
        for (int i=0,c,v,t;i<N;i++) { //cost, value, type
            c = readInt(); v = readInt(); t = readInt();
            value[t][c] = v;
        }
        int B = readInt(), dp[] = new int[B+1];
        for (int i=1;i<=T;i++) { //making sure value is always increasing
            for (int j=1;j<=B;j++) {
                value[i][j] = Math.max(value[i][j], value[i][j-1]);
            }
        }
        for (int i=1;i<=T;i++) {
            if (i==1) { //default
                for (int j=1;j<=B;j++) dp[j] = value[1][j]; 
            }
            else {
                int tmp[] = new int[B+1];
                for (int j=1;j<B;j++) {
                    for (int k=1;j+k<=B;k++) {
                        tmp[j+k] = Math.max(tmp[j+k], dp[j] + value[i][k]);
                    }
                }
                dp = tmp;
            }
        }
        System.out.println(dp[B]);
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
