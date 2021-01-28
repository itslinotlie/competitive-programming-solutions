// 12/07/2019
// https://dmoj.ca/problem/ccc19s1
package CCC_19;

import java.util.*;
import java.io.*;

public class S1Flipper {
    public static void main (String[] args) throws IOException{
        String temp = readLine();
        int v=0,h=0;
        for (int i=0;i<temp.length();i++) {
            if (temp.charAt(i)=='V')v++;
            else h++;
        }
        if (v%2==0&&h%2==0) System.out.println("1 2\n3 4");                        
        else if (v%2==0) System.out.println("3 4\n1 2");
        else if (h%2==0) System.out.println("2 1\n4 3");
        else System.out.println("4 3\n2 1");   
        
    }
    final private static int BUFFER_SIZE = 1 << 16;
    private static DataInputStream din = new DataInputStream(System.in);
    private static byte[] buffer = new byte[BUFFER_SIZE];
    private static int bufferPointer = 0, bytesRead = 0;
    static PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    public static String readLine() throws IOException {
        byte[] buf = new byte[1000000]; // line length
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
