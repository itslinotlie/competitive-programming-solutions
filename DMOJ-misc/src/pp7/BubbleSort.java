//10/31/19
//https://dmoj.ca/problem/sort1
package pp7;

import java.util.*;
public class BubbleSort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int [n];   
        for (int i=0;i<n;i++) arr[i] = in.nextInt();
        
        for (int i=0;i<n;i++) {
            for(int j=0;j<n-1;j++){
                if (arr[j] > arr[j+1]) {
                    printArray(arr);
                    int temp = arr[j];
                    arr[j] = arr[j+1]; 
                    arr[j+1] = temp;
                }
            }
        }
         printArray(arr);  
    }
    
    public static void printArray(int arr[]) {
        for (int i=0;i<arr.length;i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
