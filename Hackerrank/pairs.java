import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class pairs {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int k = scan.nextInt();

        ArrayList<Integer> arr = new ArrayList<Integer>(n);
        for(int i = 0;i < n; i++)
            arr.add(scan.nextInt());

        arr.sort(Comparator.naturalOrder());

        int total_pairs = 0;
        int compare = 0, start = 1, end = n ;
        while(start < end) {
            int diff = arr.get(start) - arr.get(compare);

            if (diff == k) {
                total_pairs++;
                start++;
            } else if(diff > k) {
                compare++;
            } else if(diff < k) {
                start++;
            }
        }

        System.out.println(total_pairs);
        scan.close();
    }
}
