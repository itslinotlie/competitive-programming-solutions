// 03/14/2020
// http://www.usaco.org/index.php?page=viewproblem2&cpid=1015
package Feb_2020;

import java.util.*;
import java.io.*;

public class SilverP2Triangles {
    static int n, mod = (int)1e9 + 7; static List<pt> p = new ArrayList(); static long ans = 0;
    public static void main (String[] args) throws IOException {
        n = readInt();
        for (int i=0;i<n;i++) p.add(new pt(readInt(), readInt()));
        for (int k=0;k<4;k++) {work(); rot();}
        System.out.println(ans);
    }
    static void work() {
        Collections.sort(p); int mv = 10003;
        long sx[] = new long[2*mv], sy[] = new long[2*mv], cx[] = new long[2*mv], cy[] = new long[2*mv];
        long lx[] = new long[2*mv], ly[] = new long[2*mv];
        for (pt e : p) {
            int x = e.x + mv, y = e.y + mv;
            sx[x] = (sx[x] + (y-lx[x])*cx[x]) % mod;
            sy[y] = (sy[y] + (x-ly[y])*cy[y]) % mod;
            cx[x]++; cy[y]++; lx[x] = y; ly[y] = x;
            ans = (ans + sx[x]*sy[y])%mod;
        }
    }
    static void rot() {
        for (int i=0;i<p.size();i++) {
            int x = p.get(i).x, y = p.get(i).y;
            p.set(i, new pt(y, -x));
        }
    }
    static class pt implements Comparable<pt>{
        int x, y;
        pt (int x0, int y0) {x=x0;y=y0;}
        public int compareTo(pt a) {
            if (x != a.x) return x-a.x;
            return y - a.y;
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

