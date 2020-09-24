// 01/21/2020
//https://dmoj.ca/problem/ccc12s2
package CCC_12;

import java.util.*;
import java.io.*;

public class S2AromaticNumbers {
    static int getValue(char n) {
        switch(n) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        int total = 0, arr[] = new int[line.length()/2], factor[] = new int[line.length()/2];
        for (int i=0;i<line.length()/2;i++) {
            factor[i] = Integer.parseInt(Character.toString(line.charAt(2*i)));
            arr[i] = getValue(line.charAt(2*i+1));           
        }
        
        for (int i=0;i<arr.length-1;i++) {
            if (arr[i]<arr[i+1]) total-=arr[i]*factor[i];
            else total+=arr[i]*factor[i];
        }
        
        total+=arr[arr.length-1]*factor[arr.length-1];
        System.out.println(total);

    }
}
