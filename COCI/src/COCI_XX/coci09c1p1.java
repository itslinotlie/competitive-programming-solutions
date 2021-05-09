// 11/16/2019
// https://dmoj.ca/problem/coci09c1p1
package COCI_XX;

import java.util.*;
import java.io.*;

public class C1P1Note {
final private static int BUFFER_SIZE = 1 << 16;
    private static DataInputStream din = new DataInputStream(System.in);
    private static byte[] buffer = new byte[BUFFER_SIZE];
    private static int bufferPointer = 0, bytesRead = 0;
    static PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    public static void main (String[] args) throws IOException {
        String temp = readLine();
        switch (temp) {
            case "8 7 6 5 4 3 2 1":
                out.println("descending");
                break;            
            case "1 2 3 4 5 6 7 8":
                out.println("ascending");
                break;
            default:
                out.println("mixed");
                break;
        }
        exit();
    }
    public static String read() throws IOException {
            byte[] ret = new byte[1024];
            int idx = 0;
            byte c = Read();
            while (c <= ' ') {
                    c = Read();
            }
            do {
                    ret[idx++] = c;
                    c = Read();
            } while (c != -1 && c != ' ' && c != '\n' && c != '\r');
            return new String(ret, 0, idx);
    }
    public static String readLine() throws IOException {
            byte[] buf = new byte[64]; // line length
            int cnt = 0, c;
            while ((c = Read()) != -1) {
                    if (c == '\n') {
                            break;
                    }
                    buf[cnt++] = (byte) c;
            }
            return new String(buf, 0, cnt);
    }
    public static int readInt() throws IOException {
            int ret = 0;
            byte c = Read();
            while (c <= ' ') {
                    c = Read();
            }
            boolean neg = (c == '-');
            if (neg) {
                    c = Read();
            }
            do {
                    ret = ret * 10 + c - '0';
            } while ((c = Read()) >= '0' && c <= '9');

            if (neg) {
                    return -ret;
            }
            return ret;
    }

    public static long readLong() throws IOException {
            long ret = 0;
            byte c = Read();
            while (c <= ' ') {
                    c = Read();
            }
            boolean neg = (c == '-');
            if (neg) {
                    c = Read();
            }
            do {
                    ret = ret * 10 + c - '0';
            } while ((c = Read()) >= '0' && c <= '9');
            if (neg) {
                    return -ret;
            }
            return ret;
    }

    public static double readDouble() throws IOException {
            double ret = 0, div = 1;
            byte c = Read();
            while (c <= ' ') {
                    c = Read();
            }
            boolean neg = (c == '-');
            if (neg) {
                    c = Read();
            }

            do {
                    ret = ret * 10 + c - '0';
            } while ((c = Read()) >= '0' && c <= '9');

            if (c == '.') {
                     while ((c = Read()) >= '0' && c <= '9') {
                            ret += (c - '0') / (div *= 10);
                    }
            }

            if (neg) {
                    return -ret;
            }
            return ret;
    }

    private static void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1) {
                    buffer[0] = -1;
            }
    }

    private static byte Read() throws IOException {
            if (bufferPointer == bytesRead) {
                    fillBuffer();
            }
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
