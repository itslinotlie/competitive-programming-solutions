// 02/16/2020
//https://dmoj.ca/problem/ccc12j4
package CCC_12;

import java.util.*;
import java.io.*;

public class J4BigBangSecrets {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(); in.nextLine();
        String word = in.nextLine(), ans = "";
        for (int i=0;i<word.length();i++) {
            int tmp = (word.charAt(i)%64-3*(i+1)-a);
            if (tmp<=0) tmp+=26;
            ans+=Character.toString((char)(tmp+64));
        }
        System.out.println(ans);
    }
}
