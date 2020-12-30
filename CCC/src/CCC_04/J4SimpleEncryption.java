// 02/16/2020
// https://dmoj.ca/problem/ccc04j4
package CCC_04;

import java.util.*;
import java.io.*;

public class J4SimpleEncryption {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        char key[] = in.nextLine().toCharArray(), word[] = in.nextLine().toCharArray();
        String ans = "";
        int count = 0;
        for (int i=0;i<word.length;i++) {
            if (word[i]>=65 && word[i]<=90) {
                ans+=Character.toString((char)((key[count%key.length]+word[i])%65%26+65));
                count++;
            }
        }
        System.out.println(ans);
    }
}
