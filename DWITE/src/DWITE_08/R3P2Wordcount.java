// 10/04/19
//https://dmoj.ca/problem/dwite08c3p2
package DWITE_08;

import java.util.Scanner;
public class R3P2Wordcount {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        for (int i=0;i<5;i++) {
            String wording = in.nextLine();
            wording=wording.toLowerCase();
            int counter = 0;
            int word = 0;
            for (int j=0;j<wording.length();j++) {
                if (wording.charAt(j)!=' '&& wording.charAt(j)>=97 && wording.charAt(j)<=122){
                    counter++;                 
                }
                else counter=0;
                if (counter == 4) word++;
            }
            System.out.println(word);
        }
    }
    
}
