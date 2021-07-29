import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class ice_cream_parlor {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int trips = scan.nextInt();

        while(trips-- > 0) {
            int money = scan.nextInt();
            int size = scan.nextInt();
            ArrayList<Integer> costs = new ArrayList<Integer>(size);
            HashMap<Integer, Integer> hash = new HashMap<Integer, Integer>();

            for(int i = 0;i < size; i++)
                costs.add(scan.nextInt());

            for(int i = 0;i < size; i++) {
                int key = money - costs.get(i);

                if(hash.containsKey(key)) {
                    System.out.printf("%d %d\n", hash.get(key)+1, i + 1);
                    break;
                }

                hash.put(costs.get(i), i);
            }
        }

        scan.close();
    }

}
