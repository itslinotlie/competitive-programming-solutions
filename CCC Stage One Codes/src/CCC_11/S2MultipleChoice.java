//11/25/19
//https://dmoj.ca/problem/ccc11s2
package CCC_11;

import java.util.Scanner;
public class S2MultipleChoice {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String arr[] = new String[n], arr2[] = new String[n];
        int counter=0;
        for (int i=0;i<n;i++) arr[i] = in.next();
        for (int i=0;i<n;i++) arr2[i] = in.next();
        for (int i=0;i<n;i++) if (arr[i].equals(arr2[i])) counter++;
        System.out.println(counter);
    }
    
}

