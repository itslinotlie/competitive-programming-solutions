// 10/23/19
//https://dmoj.ca/problem/bf1hard
package pp5;

import java.util.*;
import java.io.*;
public class ListMinimumHard {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        Integer arr[] = new Integer[N];
        for (int i=0;i<N;i++) arr[i] = Integer.parseInt(br.readLine());
        Arrays.sort(arr);
        for (int i=0;i<N;i++) System.out.println(arr[i]);
    }
    
}
