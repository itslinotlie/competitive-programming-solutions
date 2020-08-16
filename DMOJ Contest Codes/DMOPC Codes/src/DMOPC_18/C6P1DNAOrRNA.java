// 01/13/2020
// https://dmoj.ca/problem/dmopc18c6p1
package DMOPC_18;

import java.util.*;
import java.io.*;

public class C6P1DNAOrRNA {
    public static void main (String[] args) throws IOException{
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); in.nextLine();
        String line = in.nextLine();
        boolean a = false, c = false, g = false, t = false, u = false, out = false;
        for (int i=0;i<n;i++) {
            switch (line.charAt(i)) {
                case 'A': a = true; break;
                case 'C': c = true; break;
                case 'G': g = true; break;
                case 'T': t = true; break;
                case 'U': u = true; break;
                default: out = true; break;
            }
        }
        if (out) System.out.println("neither");
        else {
            if (t&&u) System.out.println("neither");
            else if (t) System.out.println("DNA");
            else if (u) System.out.println("RNA");
            else if (a||c||g) System.out.println("both");
            else System.out.println("neither");    
        }
    }
}