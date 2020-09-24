// 11/19/2019
// https://dmoj.ca/problem/dmopc15c4p2
package DMOPC_15;

import java.util.*;
import java.io.*;

public class C4P2TheBigClock {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();
        int temp = a*60+b+c;
        if (temp > 24*60) temp %= 24*60;
        System.out.println(temp/60+" "+(temp-(temp/60)*60));
    }
}