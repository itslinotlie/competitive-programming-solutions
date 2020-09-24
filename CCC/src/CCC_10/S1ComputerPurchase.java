// 11/09/2019
//https://dmoj.ca/problem/ccc10s1
package CCC_10;

import java.util.*;
import java.io.*;

public class S1ComputerPurchase {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Computer a[] = new Computer [n];
        
        for (int i=0;i<n;i++) a[i] = new Computer (in.next(), 2*in.nextInt()+3*in.nextInt()+in.nextInt());
        
        Arrays.sort(a);
        
        if (n==0) System.out.println();
        else if (n==1) {
            System.out.println(a[0].name);
        }
        else if (a[0].total==a[1].total) {
            if (a[0].name.compareTo(a[1].name)>0) {
                System.out.println(a[1].name);
                System.out.println(a[0].name);
            }
            else {
                System.out.println(a[0].name);   
                System.out.println(a[1].name);        
            }
        }
        else {
            System.out.println(a[0].name);
            System.out.println(a[1].name);
        }
    }
}
class Computer implements Comparable<Computer>{
    String name;
    int total;
    Computer (String n, int t) {name = n; total = t;};
    public int compareTo(Computer a) {return -Integer.compare(a.total, total);}
}
