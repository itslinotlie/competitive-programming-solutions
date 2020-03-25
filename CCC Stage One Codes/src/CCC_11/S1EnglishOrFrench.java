//11/25/19
//https://dmoj.ca/problem/ccc11s1
package CCC_11;

import java.util.*;
public class S1EnglishOrFrench {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), t = 0, s = 0;
        
        for (int i=0;i<n+1;i++) {
            String temp = in.nextLine();
            for (int j=0;j<temp.length();j++) {
                if (temp.toLowerCase().charAt(j) == 't') t++;
                else if (temp.toLowerCase().charAt(j) == 's') s++;
            }
        }
        
        if (t>s) System.out.println("English");
        else if (s>t) System.out.println("French");
        else System.out.println("French");
    }
    
}
