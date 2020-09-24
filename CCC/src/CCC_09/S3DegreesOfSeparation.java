// 01/23/2020
// https://dmoj.ca/problem/ccc09s3
package CCC_09;

import java.util.*;
import java.io.*;

public class S3DegreesOfSeparation {
    public static void main (String[] args) throws IOException {
        List<Integer> adj[] = new ArrayList[50+1];
        for (int i=1;i<=50;i++) adj[i] = new ArrayList();
        adj[1].add(6);adj[2].add(6);adj[3].add(4);adj[3].add(5);adj[3].add(6);
        adj[3].add(15);adj[4].add(3);adj[4].add(5);adj[4].add(6);adj[5].add(3);
        adj[5].add(3);adj[5].add(4);adj[5].add(6);adj[6].add(1);adj[6].add(2);
        adj[6].add(3);adj[6].add(4);adj[6].add(5);adj[6].add(7);adj[7].add(6);
        adj[7].add(8);adj[8].add(7);adj[8].add(9);adj[9].add(8);adj[9].add(10);
        adj[9].add(12);adj[10].add(9);adj[10].add(11);adj[11].add(10);
        adj[11].add(12);adj[12].add(9);adj[12].add(11);adj[12].add(13);
        adj[13].add(12);adj[13].add(14);adj[13].add(15);adj[14].add(13);
        adj[15].add(3);adj[15].add(13);adj[16].add(17);adj[16].add(18);
        adj[17].add(16);adj[17].add(18);adj[18].add(16);adj[18].add(17);

        String letter = readLine();
        while (!letter.equals("q")) {
            int x = readInt(), count = 0;
            int dis[] = new int[50+1];
            boolean vis[] = new boolean[50+1];
            Queue<Integer> q = new LinkedList();
            HashSet<Integer> h = new HashSet<>();
            
            switch (letter) {
                case "i": 
                    int y = readInt();
                    adj[x].add(y); adj[y].add(x);
                    break;
                case "d":
                    int d = readInt();
                    adj[x].remove(new Integer(d));
                    adj[d].remove(new Integer(x));
                    break;
                case "n":
                    System.out.println(adj[x].size());
                    break;
                case "f":
                    q.add(x); vis[x] = true; dis[x] = 0;
                    while (!q.isEmpty()) {
                        int cur = q.poll();
                        for (int nxt : adj[cur]) {
                            if (!vis[nxt]) { 
                                vis[nxt] = true; dis[nxt] = dis[cur]+1; q.add(nxt);
                            }
                        }
                    }
                    for (int i=0;i<dis.length;i++) if (dis[i]==2) count++;
                    System.out.println(count);
                    break;
                case "s":
                    int b = readInt();
                    q.add(x); vis[x] = true; dis[x] = 0;
                    while (!q.isEmpty()) {
                        int cur = q.poll();
                        for (int nxt : adj[cur]) {
                            if (dis[b]!=0) {
                                q.clear();
                                break;
                            }
                            if (!vis[nxt] && dis[b]==0) {
                                vis[nxt] = true; dis[nxt] = dis[cur]+1; q.add(nxt);
                            }
                        }
                    }
                    System.out.println(dis[b]==0? "Not connected" : dis[b]);
                    break;
            }
            letter = readLine();
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

