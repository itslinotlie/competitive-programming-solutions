// 11/11/2019
// https://dmoj.ca/problem/ccc19j3
package CCC_19;

import java.util.*;
import java.io.*;

public class J3ColdCompress {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=0;i<n;i++) {
            String temp = in.next()+" ";
            char letter = temp.charAt(0);
            int counter = 1;
            for (int j=0;j<temp.length()-1;j++) {
                if (counter == 1 && j==temp.length()) {
                    System.out.print("1 "+letter);
                    break;
                }
                if (j==temp.length()) {
                    System.out.print(counter+" "+letter);
                    break;
                }    
                if (letter == temp.charAt(j+1)) counter++;
                else {
                    System.out.print(counter+" "+letter+" ");
                    letter = temp.charAt(j+1);
                    counter = 1;
                }
            }
            System.out.println();
        }
    }
}
