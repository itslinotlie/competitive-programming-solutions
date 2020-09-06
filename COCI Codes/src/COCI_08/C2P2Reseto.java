// 12/09/2019
// https://dmoj.ca/problem/coci08c2p2
package COCI_08;

import java.util.*;
import java.io.*;

public class C2P2Reseto {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), k = in.nextInt();
        LinkedList <Integer> list = new LinkedList<>();
        boolean arr[] = new boolean[n+1];
        Arrays.fill(arr, true);
        arr[0]=arr[1]=false;
        for (int i=2;i<=n;i++) {
            if (arr[i]) {
                for (int j=i;j<=n;j+=i) {
                    if (arr[j]) {
                        arr[j] = false;
                        list.add(j);                        
                    }
                }
            }
        }
        Iterator itr = list.iterator();
        int counter = 1;
        while (itr.hasNext()) {
            if (counter==k) {
                System.out.println(itr.next());
                break;
            }
            else {
                counter++;
                itr.next();
            }
        }
    }
}
