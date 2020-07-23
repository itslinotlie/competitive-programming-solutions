// 11/11/2019
// https://dmoj.ca/problem/ccc02j1
package CCC_02;

import java.util.*;
import java.io.*;

public class J10123456789 {
    public static void main (String[] args){
        Scanner in = new Scanner(System.in);
        String topStar = " * * *\n", leftStar = "*\n*\n*\n", rightStar = "      *\n      *\n      *\n", sideStar = "*     *\n*     *\n*     *\n";
        int n = in.nextInt();
        switch (n){
           case 0: System.out.print(topStar+sideStar+"\n"+sideStar+topStar);break;
           case 1: System.out.print(rightStar+"\n"+rightStar);break;
           case 2: System.out.print(topStar+rightStar+topStar+leftStar+topStar);break;
           case 3: System.out.print(topStar+rightStar+topStar+rightStar+topStar);break;
           case 4: System.out.print(sideStar+topStar+rightStar);break;
           case 5: System.out.print(topStar+leftStar+topStar+rightStar+topStar);break;
           case 6: System.out.print(topStar+leftStar+topStar+sideStar+topStar);break;
           case 7: System.out.print(topStar+rightStar+"\n"+rightStar);break;
           case 8: System.out.print(topStar+sideStar+topStar+sideStar+topStar);break;
           case 9: System.out.print(topStar+sideStar+topStar+rightStar+topStar);break;
        }           
    }
 }    