import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class greedy_florist {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int total_flower = scan.nextInt();
        int total_group = scan.nextInt();

        ArrayList<Integer> flowers = new ArrayList<Integer>(total_flower);
        for(int i = 0; i < total_flower; i++) {
            flowers.add(scan.nextInt());
        }

        flowers.sort(Comparator.reverseOrder());
        int minimum_cost = 0;
        for(int i = 0;i < total_flower; i++) {
            int multiplier = i / total_group + 1;
            minimum_cost += flowers.get(i) * multiplier; 
        }

        System.out.println(minimum_cost);

        scan.close();
    }
}
