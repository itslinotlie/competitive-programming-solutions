// 09/04/20
// https://dmoj.ca/problem/ccc15j4
import java.io.*;
import java.util.*;

public class J4WaitTime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int M = in.nextInt();
        int rec [] = new int [101];
        int wait [] = new int[101];
        
        Arrays.fill(rec, -1);
        int t = 0;
        for(int i=0;i<M;i++ ) {
            String op = in.next(); int x = in.nextInt();
            if(op.equals("R")) rec[x] = t;
            else if (op.equals("S")) {
                wait[x] += t - rec[x]; rec[x] = -1;
            }
            else t += x - 2;
            t++;
        }
        for (int i=0;i<wait.length;i++) {
            if (rec[i] != -1) System.out.println(i + " "+ -1);
            else if (wait[i]>0) System.out.println(i + " "+ wait[i]);
        }
    }
}