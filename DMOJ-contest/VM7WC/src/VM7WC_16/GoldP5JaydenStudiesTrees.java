// 01/21/2020
// https://dmoj.ca/problem/vmss7wc16c5p3
package VM7WC_16;

import java.util.*;
import java.io.*;

public class GoldP5JaydenStudiesTrees {
    public static void main (String[] args) throws IOException{
        int n = readInt();
        List<Integer>[] adj = new ArrayList[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=0;i<n-1;i++) {
            int a = readInt(), b = readInt();
            adj[a].add(b); adj[b].add(a);
        }
        
        int dis[] = new int[n+1];
        boolean vis[] = new boolean[n+1];
        Queue<Integer> q = new LinkedList<>();
        q.add(1); vis[1] = true; dis[1] = 1;
        while (!q.isEmpty()) {
            int cur = q.poll();
            for (int nxt : adj[cur]) {
                if (!vis[nxt]) {
                    vis[nxt] = true; dis[nxt] = dis[cur]+1; q.add(nxt);
                }
            }
        }
        int max = 0;
        int index = 0;
        for (int i=0;i<dis.length;i++) {
            if (dis[i]>max) {
                max = dis[i];
                index = i;
            }
        }
        int dis2[] = new int[n+1];
        boolean vis2[] = new boolean[n+1];
        Queue<Integer> q2 = new LinkedList<>();
        q2.add(index); vis2[index] = true; dis2[index] = 1;
        while (!q2.isEmpty()) {
            int cur = q2.poll();
            for (int nxt : adj[cur]) {
                if (!vis2[nxt]) {
                    vis2[nxt] = true; dis2[nxt] = dis2[cur]+1; q2.add(nxt);
                }
            }
        }
        Arrays.sort(dis2);
        System.out.println(dis2[dis2.length-1]-1);
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
