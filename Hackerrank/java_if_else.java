import java.util.Scanner;

public class java_if_else {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();

        String answer;
        if(n % 2 == 1)
            answer = "Weird";
        else if(2 <= n && n <= 5 || n > 20)
            answer = "Not Weird";
        else
            answer = "Weird";

        System.out.println(answer);
    }
}