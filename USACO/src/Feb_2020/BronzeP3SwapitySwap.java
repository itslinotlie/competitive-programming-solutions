// 03/14/2020
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1013
package Feb_2020;

import java.util.*;
import java.io.*;

public class BronzeP3SwapitySwap {
    public static void main (String[] args) throws IOException {
        int n = readInt(), k = readInt(), ans[] = new int[n+1];
        int a1 = readInt(), a2 = readInt(), b1 = readInt(), b2 = readInt();
        for (int i=1;i<=n;i++) {
            if ((a1 <= i && i <= a2) || (b1 <= i && i <= b2)) {
                List<Integer> list = new ArrayList(); int cur = i;
                while (list.isEmpty() || cur != i) {
                    list.add(cur);
                    if (a1 <= cur && cur <= a2) cur = a1 + a2 - cur;
                    if (b1 <= cur && cur <= b2) cur = b1 + b2 - cur;
                }
                int rem = k % list.size(), pos = list.get(rem);
                ans[pos] = i;
//                for (int x : list) System.out.print(x+" ");
//                System.out.println();
            } else ans[i] = i;
        }
        for (int i=1;i<=n;i++) System.out.println(ans[i]);
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
