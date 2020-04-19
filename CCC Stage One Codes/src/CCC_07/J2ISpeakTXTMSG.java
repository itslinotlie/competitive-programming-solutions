// 01/31/2020
//https://dmoj.ca/problem/ccc07j2
package CCC_07;

import java.util.*;
import java.io.*;

public class J2ISpeakTXTMSG {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String d[][] = {
            {"CU","see you"},
            {":-)","I'm happy"},
            {":-(","I'm unhappy"},
            {";-)","wink"},
            {":-P","stick out my tongue"},
            {"(~.~)","sleepy"},
            {"TA","totally awesome"},
            {"CCC","Canadian Computing Competition"},
            {"CUZ","because"},
            {"TY","thank-you"},
            {"YW","you're welcome"},
            {"TTYL","talk to you later"}
        };
        String word = in.nextLine();
        while (!word.equals("TTYL")) {
            boolean FLAG = true;
            for (int i=0;i<d.length && FLAG;i++) {
                if (word.equals(d[i][0])) {
                    System.out.println(d[i][1]);
                    FLAG = false;
                }
            }
            if (FLAG) System.out.println(word);
            word = in.nextLine();
        }
        System.out.println(d[11][1]);
    }
}
