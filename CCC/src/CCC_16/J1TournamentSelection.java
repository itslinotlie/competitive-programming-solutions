// 12/27/2019
//https://dmoj.ca/problem/ccc16j1
package CCC_16;

import java.util.*;
import java.io.*;

public class J1TournamentSelection {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int count = 0;
        for (int i=0;i<6;i++) {
            String temp = in.next();
            if (temp.equals("W")) count++;
        }
        switch (count) {
            case 1:
            case 2: System.out.println("3"); break;
            case 3:
            case 4: System.out.println("2"); break;
            case 5:
            case 6: System.out.println("1"); break;
            default: System.out.println("-1"); break;
        }   
    }
}
