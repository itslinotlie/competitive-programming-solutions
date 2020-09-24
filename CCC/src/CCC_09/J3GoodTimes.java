// 11/18/2019
// https://dmoj.ca/problem/ccc09j3
package CCC_09;

import java.util.*;
import java.io.*;

public class J3GoodTimes {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int temp = in.nextInt(), v = temp-300, e = temp-200, w = temp-100, t=temp,h=temp+100,s=temp+130;
        System.out.println(temp+" in Ottawa");
        if (v%100 > 59) v+=40; if (v>2359) v-=2400; if (v<0) v=2400+v; System.out.println(v+" in Victoria");
        if (e%100 > 59) e+=40; if (e>2359) e-=2400; if (e<0) e=2400+e; System.out.println(e+" in Edmonton");
        if (w%100 > 59) w+=40; if (w>2359) w-=2400; if (w<0) w=2400+w; System.out.println(w+" in Winnipeg");
        if (t%100 > 59) t+=40; if (t>2359) t-=2400; if (t<0) t=2400+t; System.out.println(t+" in Toronto");
        if (h%100 > 59) h+=40; if (h>2359) h-=2400; if (h<0) h=2400+h; System.out.println(h+" in Halifax");
        if (s%100 > 59) s+=40; if (s>2359) s-=2400; if (s<0) s=2400+s; System.out.println(s+" in St. John's");
    }
}