// 02/23/2020
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1012
package Feb_2020;

import java.util.*;
import java.io.*;

public class BronzeP2MadScientist {
    public static void main (String[] args) throws IOException{
//        Scanner in = new Scanner(new File("breedflip.in"));
//        PrintWriter pr = new PrintWriter(new File("breedflip.out"));
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); in.nextLine();
        String a = in.nextLine(), b = in.nextLine();
        int cnt = 0;
        for (int i=0;i<n;i++) {
            int tmp = 0;
            if (a.charAt(i)!=b.charAt(i)) {
                for (int j=i+1;j<n;j++) {
                    if (a.charAt(j)==b.charAt(j)) {tmp = j; break;}
                    else {tmp = j;}
                }
                i=tmp;
                cnt++;
            }
        }
        System.out.println(cnt);
//        pr.println(cnt);
//        pr.close();
    }
}
