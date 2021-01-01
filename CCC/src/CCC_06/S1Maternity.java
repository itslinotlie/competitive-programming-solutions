// 02/11/2020
// https://dmoj.ca/problem/ccc06s1
package CCC_06;

import java.util.*;
import java.io.*;

public class S1Maternity {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        char a1[] = in.nextLine().toCharArray();
        char b1[] = in.nextLine().toCharArray();
        int n = in.nextInt(); in.nextLine();
        char arr[][] = new char[n][1];
        for (int i=0;i<n;i++) {
            arr[i] = in.nextLine().toCharArray();
            boolean FLAG = false;
            for (int j=0;j<a1.length;j+=2) {    
                if ((int)arr[i][j/2] < 97) { //UPPER
                    if ((int)a1[j]>97&&(int)a1[j+1]>97 && (int)b1[j]>97&&(int)b1[j+1]>97) FLAG = true;
                }
                else { //LOWER
                    if ((int)a1[j]<97&&(int)a1[j+1]<97 || (int)b1[j]<97&&(int)b1[j+1]<97) FLAG = true;
                }
                if (FLAG) {
                    System.out.println("Not their baby!");
                    break;
                }
            }
            if (!FLAG) System.out.println("Possible baby.");
        }
    }
}
