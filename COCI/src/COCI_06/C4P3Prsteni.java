// 12/27/2019
// https://dmoj.ca/problem/coci06c4p3
package COCI_06;

import java.util.*;
import java.io.*;

public class C4P3Prsteni {
    static int gcd(int a, int b)  {  
        if (b == 0) return a;  
        return gcd(b, a % b);  
    } 
    
    static void reduce (int x, int y) {
        if (x%y==0) System.out.println(x/y+"/1");
        else {
            int d = gcd(x, y);
            x/=d;
            y/=d;
            System.out.println(x+"/"+y);            
        }
    }
    
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n-1];
        int first = in.nextInt();
        for (int i=0;i<n-1;i++) {
            arr[i] = in.nextInt();
            reduce (first, arr[i]);
        }
    }   
}
