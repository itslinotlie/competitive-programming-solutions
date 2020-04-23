// 02/17/2020
//https://dmoj.ca/problem/tle16c6s1
package TLE_16;

import java.util.*;
import java.io.*;

public class C6S1WritingTheCCC {
    public static void main (String[] args) throws IOException{
        int n = readInt(); Order order[] = new Order[n]; 
        LinkedList list[] = new LinkedList[n];
        for (int i=0;i<n;i++) {
            order[i] = new Order(readLine(), i);
            list[i] = new LinkedList();
        }
        Arrays.sort(order, new OrderComparator());
        
        int k = readInt(); Order name[] = new Order[k];
        for (int i=0;i<k;i++) {
            name[i] = new Order(readLine(), i);
            int min = 0, max = n, cur = (max+min)/2;
            while (!name[i].name.equals(order[cur].name)) {
                if (name[i].name.compareTo(order[cur].name)>0) {
                    min = cur; cur = (max+min)/2;
                }
                else {
                    max = cur; cur = (max+min)/2;
                }
            }
            list[order[cur].index].add(i+1);
        }
        for (int i=0;i<n;i++) {
            Iterator itr = list[i].iterator();
            while (itr.hasNext()) System.out.println(itr.next());
        }
    }
    static class Order {
        String name;
        int index;
        Order (String n, int i) {name = n; index = i;}
    }
    static class OrderComparator implements Comparator<Order> {
        public int compare (Order a, Order b) {
            return a.name.compareTo(b.name);
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
