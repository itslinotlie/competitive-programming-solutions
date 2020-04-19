// 02/15/2020
//https://dmoj.ca/problem/ccc07j5
package CCC_07;

import java.util.*;
import java.io.*;

public class J5KeepOnTruckin {
    public static void main (String[] args) {
    	Scanner in = new Scanner(System.in);
    	int min = in.nextInt(), max = in.nextInt(), n = in.nextInt();
    	Integer loc[] = {0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};
        
    	List<Integer> pos = new ArrayList(Arrays.asList(loc));
    	for(int i=0; i<n; i++) pos.add(in.nextInt());
    	Collections.sort(pos);
        
    	long ans[] = new long [pos.size()];  ans[0] = 1;
    	for(int i=1; i<pos.size(); i++){
            for(int j = 0; j<i; j++){
                int dis = pos.get(i) - pos.get(j);
                if(dis >= min && dis <= max) ans[i] += ans[j];
            }
    	}
    	System.out.println(ans[pos.size()-1]);
    }
}
