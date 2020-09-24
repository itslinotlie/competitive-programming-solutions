// 11/08/2019
//https://dmoj.ca/problem/ics4p1
package pp7;

import java.util.*;
import java.io.*;

public class WordScrambler {
    static char temp[];
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        temp = in.nextLine().toCharArray();
        Arrays.sort(temp);
        for (int i=0;i<temp.length;i++) {
            fun (i, temp[i]+"");
        }
    }
    static void fun(int i, String ans) {
        if (ans.length()==temp.length) System.out.println(ans);
        
        for (int j=0;j<temp.length;j++) {
            if (!ans.contains(Character.toString(temp[j]))) fun (j, ans+temp[j]);
        }
     }
}