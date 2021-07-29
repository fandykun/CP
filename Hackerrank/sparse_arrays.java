import java.util.Scanner;
import java.util.HashMap;

public class sparse_arrays {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        HashMap<String, Integer> hashed_strings = new HashMap<String, Integer>();
        for(int i = 1;i <= n; i++) {
            String input = scan.next();
            if(hashed_strings.containsKey(input)) {
                Integer frequency = hashed_strings.get(input);
                hashed_strings.put(input, ++frequency);
            } else {
                hashed_strings.put(input, 1);
            }
        }

        int q = scan.nextInt();
        for(int i = 1;i <= q; i++) {
            String query = scan.next();
            if(hashed_strings.containsKey(query))
                System.out.println(hashed_strings.get(query));
            else
                System.out.println(0);
        }

        scan.close();
    }
}
