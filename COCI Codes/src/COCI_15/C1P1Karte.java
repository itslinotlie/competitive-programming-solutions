// 12/27/2019
// https://dmoj.ca/problem/coci15c1p1
package COCI_15;

import java.util.*;
import java.io.*;

public class C1P1Karte {
    static int arrP[] = new int[13], arrK[] = new int[13];
    static int arrH[] = new int[13], arrT[] = new int[13];
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        for (int i=0;i<line.length();i+=3) {
            String temp = line.substring(i+1, i+3);
            int value = Integer.parseInt(temp);
            switch (line.charAt(i)) {
                case 'P': arrP[value-1]++; break;
                case 'K': arrK[value-1]++; break;
                case 'H': arrH[value-1]++; break;
                case 'T': arrT[value-1]++; break;
            }
        }
        
        boolean out = true;
        int countA=13,countB=13,countC=13,countD=13;
        for (int i=0;i<13;i++) {
            if (arrP[i]==1) countA--;
            else if (arrP[i]>1) {out = false;break;}
            if (arrK[i]==1) countB--;
            else if (arrK[i]>1) {out = false;break;}
            if (arrH[i]==1) countC--;
            else if (arrH[i]>1) {out = false;break;}
            if (arrT[i]==1) countD--;
            else if (arrT[i]>1) {out = false;break;}
        }
        if (out) System.out.println(countA+" "+countB+" "+countC+" "+countD);
        else System.out.println("GRESKA");   
    }
}
