// 02/11/2020
// https://dmoj.ca/problem/ccc06s2
package CCC_06;

import java.util.*;
import java.io.*;

public class S2AttackOfTheCipherTexts {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        char one[] = in.nextLine().toCharArray();
        char two[] = in.nextLine().toCharArray();
        List<Character> adj[] = new List[90+2];
        for (int i=0;i<92;i++) adj[i] = new ArrayList();
        for (int i=0;i<two.length;i++) {
            adj[(int)two[i]].add(one[i]);
        }
        String three = in.nextLine();
        for (int i=0;i<three.length();i++) {
            if (adj[(int)three.charAt(i)].isEmpty()) System.out.print(".");
            else {
                Iterator itr = adj[(int)three.charAt(i)].iterator();
                System.out.print(itr.next());
            }
        }
    }
}
