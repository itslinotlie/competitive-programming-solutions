//3/25/20
//https://dmoj.ca/problem/dmpg17s2
package DMPG_17;

import java.util.*;
import java.io.*;

public class S2AnimeConventions {
    public static void main (String[] args) throws IOException {
        int k = readInt(), n = readInt();
        DS tree = new DS(k+1);
        for (int i=0;i<n;i++) {
            String l = read();
            int a = readInt(), b = readInt();
            switch (l) {
                case "A":
                    tree.union(a, b);
                    break;
                case "Q":
                    System.out.println(tree.find(a)==tree.find(b)? "Y":"N");
                    break;
            }
        }
    }
    static class DS {
        static int parent[], rank[];
        static int n;
        public DS(int n) {
            parent = new int[n];
            rank = new int[n];
            this.n = n;
            make();
        }
        public void make(){
            for (int i=0;i<n;i++) parent[i] = i;
        }
        public int find(int x) {
            if (parent[x]!=x) parent[x] = find(parent[x]);
            return parent[x];
        }
        public void union(int x, int y) {
            int rankX = find(x),rankY = find(y);
            
            if (rankX==rankY) return;
            if (rankX>rankY) {parent[rankY]=rankX;}
            else if (rankY>rankX) {parent[rankX]=rankY;}
            else {
                parent[rankY] = rankX;
                rank[rankX]++;
            }
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