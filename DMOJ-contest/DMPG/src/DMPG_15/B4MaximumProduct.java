// 11/20/2019
// https://dmoj.ca/problem/dmpg15b4
package DMPG_15;

import java.util.*;
import java.io.*;

public class B4MaximumProduct {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(),counter=1,temp1=0,temp2=0;
        Integer arr[] = new Integer[n]; 
        boolean zero = false, haszero=false;
        for (int i=0;i<n;i++) arr[i] = in.nextInt();
        Arrays.sort(arr, (a,b)-> (Integer.compare(Math.abs(a), Math.abs(b))));
        
        for (int i=n-1;i>=0;i--) {
            if (arr[i]==0) {temp2=0; haszero=true;}
            if (arr[i]>0) counter*=arr[i];
            else if (arr[i]<0) {
                if (zero==false) {
                    temp1=arr[i];
                    zero=true;
                }
                else {
                    counter*=arr[i];
                    counter*=temp1;
                    temp1=0;
                    zero=false;
                }
            }
        }
        Arrays.sort(arr);
        if (arr.length==1) System.out.println(arr[0]);
        else if (arr[arr.length-1]==0 && counter==1) System.out.println("0");
        else System.out.println(counter);
    }
}
