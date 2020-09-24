// 12/24/2019
//https://dmoj.ca/problem/gfsspc1p4
package pp7;

import java.util.*;
import java.io.*;

public class BrunoAndFibonacci {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in); in.nextInt();
        int arr[] = new int[16]; in.nextLine();
        String line = in.nextLine();
        
        int a=0,b=0, c=1;
        for (int i=0;i<16;i++) {
            a=b;
            b=c;
            c=a+b;
            arr[i]=a;    
        }
        
        int count=2;
        boolean out = false;
        for (int i=0;i<line.length();i++) {
            if (i==arr[count]-1 && line.charAt(arr[count]-1)=='A') {}
            else {
                if (line.charAt(i)=='A') {
                    out = true;
                    break;
                }
                else if (line.charAt(i)!='A'&& i+1==arr[count]) {
                    out = true;
                    break;
                }
                else count--;   
            }
            count++;
        }
        if (out) System.out.println("Bruno, GO TO SLEEP");
        else System.out.println("That's quite the observation!");  
    }
}