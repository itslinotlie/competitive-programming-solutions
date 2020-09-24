// 10/30/19
// https://dmoj.ca/problem/vmss7wc16c2p1
package VM7WC_16;

import java.util.*;
public class BronzeP2G {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        char arr[][] = {{'G','G','G','G','G'},{'G','.','.','.','.'},{'G','.','.','G','G'},{'G','.','.','.','G'},{'G','G','G','G','G'}};
        for (int j=0;j<5*n;j++) {
            for (int k=0;k<5*n;k++) {
                System.out.print(arr[j/n][k/n]);   
            }
            System.out.println();
        }
    }   
}