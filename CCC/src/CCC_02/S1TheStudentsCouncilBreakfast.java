// 02/14/2020
// https://dmoj.ca/problem/ccc02s1
package CCC_02;

import java.util.*;
import java.io.*;

public class S1TheStudentsCouncilBreakfast {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int p = in.nextInt(), g = in.nextInt(), r = in.nextInt(), o = in.nextInt(), total = in.nextInt();
        int k = Math.max(Math.max(total/p, total/g), Math.max(total/r, total/o));
        LinkedList<String> list = new LinkedList();
        int min = Integer.MAX_VALUE;
        
        for (int a=0;a<=k;a++) {
            for (int b=0;b<=k;b++) {
                for (int c=0;c<=k;c++) {
                    for (int d=0;d<=k;d++) {
                        if (p*a + g*b + r*c + o*d == total) {
                            list.add("# of PINK is "+a+" # of GREEN is "+b+" # of RED is "+c+" # of ORANGE is "+d);
                            min = Math.min(min, a+b+c+d);
                        }
                    }
                }
            }
        }
        Iterator itr = list.iterator();
        while (itr.hasNext()) System.out.println(itr.next());
        System.out.println("Total combinations is "+list.size()+".");
        System.out.println("Minimum number of tickets to print is "+min+".");
    }
}