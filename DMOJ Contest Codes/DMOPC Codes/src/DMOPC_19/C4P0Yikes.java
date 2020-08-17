// 12/30/2019
// https://dmoj.ca/problem/dmopc19c4p0
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C4P0Yikes {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.nextLine(), b = in.nextLine();
        int count = 0;
        for (int i=0;i<a.length();i++) {
            if (!(a.charAt(i)==b.charAt(i))) count++;
        }
        System.out.println(count==1? "LARRY IS SAVED!":"LARRY IS DEAD!")
    }
}
