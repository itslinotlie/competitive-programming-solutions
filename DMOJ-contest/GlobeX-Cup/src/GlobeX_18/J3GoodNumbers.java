// 11/28/2019
// https://dmoj.ca/problem/globexcup18j3
package GlobeX_18;

import java.util.*;
import java.io.*;

public class J3GoodNumbers {
    
    public static boolean isPrime (int n) { 
        int root = (int)Math.sqrt(n);
        if (n==1) return false;
        if (n==2) return true;
        if (n%2==0) return false;
        for (int i=3;i<=root;i+=2) {
            if (n%i==0) return false;
        }
        return true;
    }    
    public static boolean sumPrime (int n) {
        String temp = Integer.toString(n);
        int counter = 0;
        for (int i=0;i<temp.length();i++) counter += Integer.parseInt(Character.toString(temp.charAt(i)));
        return isPrime(counter);
    }
    public static void main (String[] args) throws IOException {
        int n = readInt();
        long counter=0;
        for (int i=0;i<n;i++) {
            int temp = readInt();
            if (isPrime(temp)&&sumPrime(temp)) counter++;
        }
        System.out.println(counter);
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
