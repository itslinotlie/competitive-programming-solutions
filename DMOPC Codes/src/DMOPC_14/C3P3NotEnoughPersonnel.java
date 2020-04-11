// 11/28/2019
//https://dmoj.ca/problem/dmopc14c3p3
package DMOPC_14;

import java.io.*;
import java.util.*;

public class C3P3NotEnoughPersonnel {
    public static void main (String[] args) throws IOException{
        int n = readInt();
        Employee e[] = new Employee[n];
        for (int i=0;i<n;i++) e[i] = new Employee (read(),readInt(),i);
        Arrays.sort(e, new EmpolyeeComparator());
        int otherN = readInt();
        
        for (int i=0;i<otherN;i++) {
            int skill = readInt(), d = readInt();
            String Name = "";
            int temp = 0, maxTemp = Integer.MAX_VALUE;
            for (int j=0;j<n;j++) {
                if (e[j].skill>=skill&&e[j].skill<=(skill+d)) {
                    if (temp < maxTemp) {
                        Name = e[j].name;
                        temp = skill+d - e[j].skill;
                        maxTemp = temp;
                    }
                    
                }             
            }
            System.out.println(Name.equals("")? "No suitable teacher!":Name);
        }
    }
    static class Employee {
        String name;
        int skill, order;
        Employee(String n, int s, int o) {name = n; skill = s; order = o;};
    }
    static class EmpolyeeComparator implements Comparator<Employee> {
        public int compare(Employee a, Employee b) { 
            if (a.skill != b.skill) {
                return Integer.compare(a.skill, b.skill);
            } else {
                return Integer.compare(a.order,b.order);
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
