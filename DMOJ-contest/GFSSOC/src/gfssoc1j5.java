// 01/24/2020
// https://dmoj.ca/problem/gfssoc1j5

import java.util.*;
import java.io.*;

public class PursuitOfKnowledge {
    public static void main (String[] args) throws IOException {
        int n = readInt(), m = readInt(), t = readInt();
        List<Integer> adj[] = new LinkedList[n+1];
        
        for (int i=1;i<=n;i++) adj[i] = new LinkedList();
        for (int i=0;i<m;i++) adj[readInt()].add(readInt());
        
        int q = readInt(), arr[][] = new int[n+1][n+1];
        for (int i=1;i<=n;i++) {
            Queue<Integer> qu = new LinkedList();
            boolean vis[] = new boolean[n+1];
            int dis[] = new int [n+1];
            qu.add(i); vis[i] = true; dis[i] = 0;
            while (!qu.isEmpty()) {
                int cur = qu.poll();
                for (int nxt : adj[cur]) {
                    if (!vis[nxt]) {
                        vis[nxt] = true; dis[nxt] = dis[cur] + 1; qu.add(nxt);
                    }
                }
            }
            for (int j=1;j<=n;j++) {
                arr[i][j] = dis[j];
            }
        }
        
        for (int i=0;i<q;i++) {
            int a = readInt(), b = readInt();
            if (arr[a][b]==0) System.out.println("Not enough hallways!");
            else System.out.println(arr[a][b]*t);
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
