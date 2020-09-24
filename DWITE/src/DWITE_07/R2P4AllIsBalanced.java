// 12/16/2019
//https://dmoj.ca/problem/dwite07c2p4
package DWITE_07;

import java.util.*;
import java.io.*;

public class R2P4AllIsBalanced {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        for (int i=0;i<5;i++) {
            String word = in.nextLine();
            Stack<Character> st = new Stack<>();
            for (int j=0;j<word.length();j++) {
                Character letter = word.charAt(j);
                switch(letter) {
                    case '(': st.add(letter);break;
                    case '{': st.add(letter);break;
                    case '[': st.add(letter);break;
                    case ')': if (!st.empty()&&st.peek()=='(') st.pop(); 
                    else st.add(letter); break;
                    case '}': if (!st.empty()&&st.peek()=='{') st.pop(); 
                    else st.add(letter);break;
                    case ']': if (!st.empty()&&st.peek()=='[') st.pop(); 
                    else st.add(letter);break; 
                    default: break;
                }  
            }
            if (st.isEmpty()) System.out.println("balanced");
            else System.out.println("not balanced");            
        }
    }
}
