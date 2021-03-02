import java.util.Scanner;

public class java_data_types {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int tc = scan.nextInt();
        while(tc-- > 0) {
            try {
                long n = scan.nextLong();
                System.out.println(n + " can be fitted in:");
                if(-Math.pow(2, 7) <= n && n <= Math.pow(2, 7) - 1)
                    System.out.println("* byte");
                if(-Math.pow(2, 15) <= n && n <= Math.pow(2, 15) - 1)
                    System.out.println("* short");
                if(-Math.pow(2, 31) <= n && n <= Math.pow(2, 31) - 1)
                    System.out.println("* int");
                if(-Math.pow(2, 63) <= n && n <= Math.pow(2, 63) - 1)
                    System.out.println("* long");
            } catch(Exception e) {
                System.out.println(scan.next() + " can't be fitted anywhere.");
            }
        }

        scan.close();
    }
}