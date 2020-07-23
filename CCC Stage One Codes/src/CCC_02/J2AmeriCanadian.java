// 10/09/19
// https://dmoj.ca/problem/ccc02j2
package CCC_02;

import java.util.*;
public class J2AmeriCanadian {
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       String text = in.next();
        while (!"quit!".equals(text.toLowerCase())) {
        boolean spelling = false;
            if (text.length()>4) {
                if (text.charAt(text.length()-1)=='r' && text.charAt(text.length()-2)=='o') {
                    if (text.charAt(text.length()-3)!='a' && text.charAt(text.length()-3)!='e' && text.charAt(text.length()-3)!='i' &&text.charAt(text.length()-3)!='o' && text.charAt(text.length()-3)!='u' && text.charAt(text.length()-3)!='y')
                            for (int j=0;j<text.length()+1;j++) {
                                if (j==text.length()-1) {
                                    System.out.print("u");
                                } else if (j==text.length()){
                                    System.out.print("r"); 
                                    System.out.println();
                                } else {
                                    System.out.print(text.charAt(j));
                                }
                             spelling = true;
                            }
                       }
                   }
        if (spelling == false) System.out.println(text);
        text = in.next();
        }
    }
}