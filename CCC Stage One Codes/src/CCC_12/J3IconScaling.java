//10/22/19
//https://dmoj.ca/problem/ccc12j3
package CCC_12;

import java.util.Scanner;
public class J3IconScaling {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char arr[][] = {{'*','x','*'},{' ','x','x'},{'*',' ','*'}};
        int N = in.nextInt();
            for (int i=0;i<3*N;i++) {
                for (int j=0;j<3*N+1;j++) {
                    if (j!=3*N) System.out.print(arr[i/N][j/N]);
                    else System.out.println();    
                }
            }
        }
    }
    
