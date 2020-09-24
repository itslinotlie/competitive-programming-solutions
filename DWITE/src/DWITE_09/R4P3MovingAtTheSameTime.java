// 10/31/19
//https://dmoj.ca/problem/dwite09c4p3
package DWITE_09;

import java.util.*;
public class R4P3MovingAtTheSameTime {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        for (int t=1;t<=5;t++) {
            String s = in.nextLine();
            System.out.println(s);
            List<Integer> num = new ArrayList(), pos = new ArrayList();
            for (int i=0;i<s.length();i++) {
                if (s.charAt(i)!='.') {
                    num.add(s.charAt(i) - '0'); pos.add(i);
                }
            }
            for (int k=1;k<=4;k++) {
                int [] board = new int[s.length()];
                Arrays.fill(board, -1);
                for (int i=0;i<num.size();i++) {
                    int newpos = num.get(i) + pos.get(i);
                    if (newpos < board.length) {
                        if (board[newpos] == -1) board[newpos] = num.get(i);
                        else board[newpos] += num.get(i);
                    }
                    pos.set(i,newpos);
                }
                for (int i=0;i<board.length;i++)
                    if (board[i] == -1) System.out.print(".");
                    else System.out.print(board[i]);
                System.out.println();
            }
        }
   }
    
}
