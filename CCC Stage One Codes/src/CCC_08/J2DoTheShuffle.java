// 12/16/2019
//https://dmoj.ca/problem/ccc08j2
package CCC_08;

import java.util.*;
import java.io.*;

public class J2DoTheShuffle {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        Deque<Character> dq = new LinkedList<>();
        dq.add('A');dq.add('B');dq.add('C');dq.add('D');dq.add('E');
        int a = in.nextInt(), b = in.nextInt();
        while (a!=4) {
            switch(a) {
                case 1: 
                    for (int i=0;i<b;i++) {
                        Character temp = dq.pollFirst();
                        dq.add(temp);
                    }
                    break;
                case 2:
                    for (int i=0;i<b;i++) {
                        Character temp = dq.pollLast();
                        dq.addFirst(temp);
                    }
                    break;
                case 3:
                    for (int i=0;i<b;i++) {
                        Character f = dq.pollFirst(), s = dq.pollFirst();
                        dq.addFirst(f); dq.addFirst(s);  
                    }
                    break;
            }
            a = in.nextInt(); b = in.nextInt();
        }
        while (!dq.isEmpty()) System.out.print(dq.pollFirst()+" ");
    }
}
