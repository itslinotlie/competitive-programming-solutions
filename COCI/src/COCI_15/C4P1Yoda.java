// 12/27/2019
// https://dmoj.ca/problem/coci15c4p1
package COCI_15;

import java.util.*;
import java.io.*;

public class C4P1Yoda {
    static LinkedList<String> a = new LinkedList<>();
    static LinkedList<String> b = new LinkedList<>();
    
    static LinkedList<String> aP = new LinkedList<>();
    static LinkedList<String> bP = new LinkedList<>();
    
    public static void makeSame () {
        int x = a.size(), y = b.size();
        if (x>y) {     
            for (int i=0;i<x-y;i++) b.addFirst("0");
        }
        else if (y>x) {
            for (int i=0;i<y-x;i++) a.addFirst("0");
        }
    }
    
    public static void checkDigit () {
        for (int i=0;i<a.size();i++) {
            int x = Integer.parseInt(a.pollFirst());
            int y = Integer.parseInt(b.pollFirst());
            
            if (x>y) aP.add(Integer.toString(x));
            else if (y>x) bP.add(Integer.toString(y));
            else {
                aP.add(Integer.toString(x));
                bP.add(Integer.toString(y));
            }
         }        
    }
    
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String x = in.nextLine(); for (int i=0;i<x.length();i++) a.add(Character.toString(x.charAt(i)));
        String y = in.nextLine(); for (int i=0;i<y.length();i++) b.add(Character.toString(y.charAt(i)));
        makeSame();
        int size = a.size();
        for (int i=0;i<size;i++) checkDigit();
        String aNew="",bNew="";
        final int aPsize = aP.size(), bPsize = bP.size();
        for (int i=0;i<aPsize;i++) {
            String temp = aP.removeFirst();
            aNew+=temp;
        }
        for (int i=0;i<bPsize;i++) {
            String temp = bP.removeFirst();
            bNew+=temp;
        }
        if (aNew=="") System.out.println("YODA");
        else System.out.println(Integer.parseInt(aNew));
        
        if (bNew=="") System.out.println("YODA");
        else System.out.println(Integer.parseInt(bNew));
    }   
}
