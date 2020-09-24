// 09/21/19
// https://dmoj.ca/problem/stnbd1
package pp3;

import java.io.*;
import java.util.*;

public class RenAshbell {
    static Scanner input=new Scanner(System.in);
    static boolean fun(int r, int n){
        for(int i=0;i<n-1;i++)if(r<=input.nextInt()) return false;
        return true;
    }
    public static void main(String[] args) {
        int n=input.nextInt(),r=input.nextInt();
        if(fun(r,n))System.out.println("YES");
        else System.out.println("NO");
    }
}