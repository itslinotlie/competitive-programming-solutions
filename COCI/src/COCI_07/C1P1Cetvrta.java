// 11/19/2019
// https://dmoj.ca/problem/coci07c1p1
package COCI_07;

import java.util.*;
import java.io.*;

public class C1P1Cetvrta {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        HashSet<Integer> X = new HashSet(), Y = new HashSet();
        for (int i=0;i<3;i++) {
            int tempx = in.nextInt(), tempy = in.nextInt();
            if (X.contains(tempx)) X.remove(tempx);
            else X.add(tempx);
            if (Y.contains(tempy)) Y.remove(tempy);
            else Y.add(tempy);            
        }
        Iterator<Integer> itr = X.iterator();
        while (itr.hasNext()) System.out.print(itr.next()+" ");
        itr = Y.iterator();
        while (itr.hasNext()) System.out.println(itr.next());
    }
}