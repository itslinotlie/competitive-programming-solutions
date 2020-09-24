// 12/24/2019
//https://dmoj.ca/problem/ccc11s4
package CCC_11;

import java.util.*;
import java.io.*;

public class S4BloodDistribution {
    static int donor[] = new int[8], patient[] = new int[8];
    static int counter = 0;
    
    static void getBlood (int a, int b) {
        int t = Math.min(donor[a], patient[b]);
        counter+=t;
        donor[a]-=t;
        patient[b]-=t;
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        for (int i=0;i<8;i++) donor[i] = in.nextInt();
        for (int i=0;i<8;i++) patient[i] = in.nextInt();


        for (int i=0;i<8;i++) {
            switch (i) {
                case 1: 
                    getBlood(1, i);
                    break;
                case 2:
                    getBlood(2, i);
                    break;
                case 3:
                    getBlood(3, i);
                    getBlood(2, i);
                    getBlood(1, i);
                    break;
                case 4:
                    getBlood(4, i);
                    break;
                case 5:
                    getBlood(5, i);
                    getBlood(4, i);
                    getBlood(1, i);
                    break;
                case 6:
                    getBlood(6, i);
                    getBlood(4, i);
                    getBlood(2, i);
                    break;
                case 7:
                    getBlood(7, i);
                    getBlood(6, i);
                    getBlood(5, i);
                    getBlood(4, i);
                    getBlood(3, i);
                    getBlood(2, i);
                    getBlood(1, i);
                    break;
            }
            getBlood(0, i);
        }
        System.out.println(counter);
    }
}