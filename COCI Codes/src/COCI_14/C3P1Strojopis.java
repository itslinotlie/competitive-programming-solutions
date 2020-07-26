// 11/18/2019
// https://dmoj.ca/problem/coci14c3p1
package COCI_14;

import java.util.*;
import java.io.*;

public class C3P1Strojopis {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main (String[] args) throws IOException {
        String temp = readLine();
        int counter1=0, counter2=0, counter3=0, counter4=0, counter5=0, counter6=0, counter7=0, counter8=0;
        for (int i=0;i<temp.length();i++) {
            switch (temp.toLowerCase().charAt(i)) {
                case 'q':case'a':case'z':case'1': counter1++;break;
                case 'w':case's':case'x':case'2': counter2++;break;
                case 'e':case'd':case'c':case'3': counter3++;break;
                case 'r':case'f':case'v':case'4': case 't':case'g':case'b':case'5': counter4++;break;
                case 'y':case'h':case'n':case'6': case 'u':case'j':case'm':case'7': counter5++;break;
                case 'i':case'k':case',':case'8': counter6++;break;
                case 'o':case'l':case'.':case'9': counter7++;break;
                case '0':case'p':case';':case'/': case '-':case'[':case'\'':case'=': case']':counter8++;break;                             
            }           
        }
        System.out.println(counter1);
        System.out.println(counter2);
        System.out.println(counter3);
        System.out.println(counter4);
        System.out.println(counter5);
        System.out.println(counter6);
        System.out.println(counter7);
        System.out.println(counter8);
    }
    static String readLine() throws IOException {
        return br.readLine().trim();
    }    
}