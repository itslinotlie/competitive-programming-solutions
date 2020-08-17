// 12/30/2019
// https://dmoj.ca/problem/dmopc19c4p1
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C4P1ValidStrings {
    static boolean isNumber(char n) {
        return (n=='1'||n=='2'||n=='3'||n=='4'||n=='5'||n=='6'||n=='7'||n=='8'|n=='9'||n=='0');
    }
    
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); 
        for (int i=0;i<n;i++) {
            Deque<Character> deque = new LinkedList();
            String line = in.next();
            for (int j=0;j<line.length();j++) {
                if (!isNumber(line.charAt(j))) {
                    if (!deque.isEmpty()) {
                        char temp = deque.pop();
                        if (temp=='('&&line.charAt(j)==')') continue;
                        else {
                            deque.addFirst(temp);
                            deque.addFirst(line.charAt(j));
                        }
                    }
                    else deque.addFirst(line.charAt(j));
                }
            }
            System.out.println(deque.isEmpty()? "YES":"NO");
        }
    }
}
