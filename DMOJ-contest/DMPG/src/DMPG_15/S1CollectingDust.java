// 11/18/2019
// https://dmoj.ca/problem/dmpg15s1
package DMPG_15;

import java.util.*;
import java.io.*;

public class S1CollectingDust {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int total = in.nextInt(), cars = 0;
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt(), d = in.nextInt(), e = in.nextInt();
        cars += a/4 + (a%4==0? 0:1);
        cars += b/5 + (b%5==0? 0:1);
        cars += c/4 + (c%4==0? 0:1);
        cars += d/3 + (d%3==0? 0:1);
        cars += e/6 + (e%6==0? 0:1);
        System.out.println(total-cars>=0? total-cars : 0);
    }
}