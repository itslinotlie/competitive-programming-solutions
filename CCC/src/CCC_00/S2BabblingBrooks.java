// 01/21/2020
//https://dmoj.ca/problem/ccc00j4
package CCC_00;

import java.util.*;
import java.io.*;

public class S2BabblingBrooks {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        LinkedList<Double> list = new LinkedList<>();
        int n = in.nextInt();
        for (int i=0;i<n;i++) list.add(in.nextDouble());
        int next = in.nextInt();
        while (next!=77) {
            switch (next) {
                case 99: 
                    int first = in.nextInt()-1, left = in.nextInt();
                    double value = list.get(first);
                    list.remove(first);
                    list.add(first, value*left/100);
                    list.add(first+1, value*(100-left)/100);
                    break;
                case 88:
                    int join = in.nextInt()-1;
                    double value2 = list.get(join), value3 = list.get(join+1);
                    list.remove(join);
                    list.remove(join);
                    list.add(join, (value2+value3));
                    break;
            }
            next=in.nextInt();
        }
        Iterator itr = list.iterator();
        while (itr.hasNext()) {System.out.printf("%.0f", itr.next()); System.out.print(" ");}
    }
}
