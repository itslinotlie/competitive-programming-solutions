//10/29/19
//https://dmoj.ca/problem/ccc13j2
package CCC_13;

import java.util.*;
public class J2RotatingLetters {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String temp = in.nextLine();
        boolean word = true;
        for (int i=0;i<temp.length();i++) {
            if (temp.charAt(i)=='I' || temp.charAt(i)=='O' || temp.charAt(i)=='S' || temp.charAt(i)=='H' || temp.charAt(i)=='Z' || temp.charAt(i)=='X' || temp.charAt(i)=='N') word = true; 
            else word = false;
        }
        if (word == true) System.out.println("YES");
        else System.out.println("NO");
    }
    
}
