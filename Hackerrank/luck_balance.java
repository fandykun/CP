import java.util.Arrays;
import java.util.Scanner;

public class luck_balance {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int k = scan.nextInt();
        
        int[][] lucks = new int[n + 1][2];
        for(int i = 0;i < n; i++) {
            int luck = scan.nextInt();
            int rating = scan.nextInt();
            lucks[i][0] = luck;
            lucks[i][1] = rating;
        }

        int result = 0;
        Arrays.sort(lucks, (a, b) -> Integer.compare(b[0], a[0]));

        for(int i = 0;i < n; i++) {
            if(k > 0 && lucks[i][1] == 1) {
                result += lucks[i][0];
                k--;
            } else if(lucks[i][1] == 0) {
                result += lucks[i][0];
            } else {
                result -= lucks[i][0];
            }
        }

        System.out.println(result);

        scan.close();
    }
}
