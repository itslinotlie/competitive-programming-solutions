//11/30/19
//https://dmoj.ca/problem/ccc17s2
package CCC_17;

import java.util.*;
public class S2HighTideLowTide {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n], arrOdd[] = new int[n/2], arrEven[] = new int[n/2 +1];
        for (int i=0;i<n;i++) arr[i] = in.nextInt();
        Arrays.sort(arr);
        if (n%2==0) { 
            for (int i=0;i<n/2;i++) arrEven[i] = arr[i];
            for (int i=n/2;i<n;i++) arrOdd[i - n/2] = arr[i];        
        }
        else {
            for (int i=0;i<n/2 + 1;i++) arrEven[i] = arr[i];
            for (int i=n/2 + 1;i<n;i++) arrOdd[i - n/2 - 1] = arr[i];
        }
        Arrays.sort(arrEven); Arrays.sort(arrOdd);
        int arrNewEven[] = new int[arrEven.length];
        for (int i=0;i<arrEven.length;i++) arrNewEven[arrEven.length-i-1] = arrEven[i];
        boolean counter = true;
        for (int i=0;i<n;i++) {
            if (counter) {
                System.out.print(arrNewEven[i/2]+" ");
                counter = false;
            }
            else {
                System.out.print(arrOdd[i/2]+" ");
                counter = true;
            }
        }
        
    }
}