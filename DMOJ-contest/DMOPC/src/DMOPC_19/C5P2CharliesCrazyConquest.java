// 02/29/2020
// https://dmoj.ca/problem/dmopc19c5p2
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C5P2 {
    public static void main (String[] args) throws IOException{
        int n = readInt(), HP1 = readInt(), HP2 = HP1;
        boolean FLAG = true;
        String c[][] = new String[n][2], o[][] = new String[n][2];
        for (int i=0;i<n;i++) c[i] = readLine().split("[ ]");
        for (int i=0;i<n;i++) o[i] = readLine().split("[ ]");
        for (int i=0;i<n;i++) {
            switch (c[i][0]) {
                case "A":             
                    if (i==0) HP2-=Integer.parseInt(c[i][1]);
                    else if (o[i-1][0].equals("A")) HP2-=Integer.parseInt(c[i][1]);
                    break;
                case "D":
                    if (i==n-1) HP1-=Integer.parseInt(c[i][1]);
                    else if (o[i][0].equals("D")) HP1-=Integer.parseInt(c[i][1]);            
                    break;
            }
            if (isLoser(HP1, HP2) == 1) {System.out.println("DEFEAT"); FLAG = false; break;}
            if (isLoser(HP1, HP2) == 2) {System.out.println("VICTORY"); FLAG = false; break;}
            switch (o[i][0]) {
                case "A":
                    if (c[i][0].equals("A")) HP1-=Integer.parseInt(o[i][1]);
                    break;
                case "D":
                    if (i==n-1) HP2-=Integer.parseInt(o[i][1]);
                    else if (c[i+1][0].equals("D")) HP2-=Integer.parseInt(o[i][1]);             
                    break;
            }
            
            if (isLoser(HP1, HP2) == 1) {System.out.println("DEFEAT"); FLAG = false; break;}
            if (isLoser(HP1, HP2) == 2) {System.out.println("VICTORY"); FLAG = false; break;}
        }
        if (FLAG) System.out.println("TIE");
    }
    static int isLoser(int a, int b) {
        if (a<=0) return 1;
        if (b<=0) return 2;
        return 0;
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