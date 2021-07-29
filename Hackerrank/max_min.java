import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class max_min {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int k = scan.nextInt();

        ArrayList<Integer> arr = new ArrayList<Integer>(n);
        for(int i = 0; i < n; i++) {
            arr.add(scan.nextInt());
        }

        arr.sort(Comparator.naturalOrder());

        int minimum_unfairness = Integer.MAX_VALUE;
        k--;
        for(int i =0;i < n - k; i++) {
            int expected_minimum = arr.get(i+k) - arr.get(i);
            if(expected_minimum < minimum_unfairness) {
                minimum_unfairness = expected_minimum;
            }
        }

        System.out.println(minimum_unfairness);

        scan.close();
    }    
}
