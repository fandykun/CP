import java.util.Scanner;

public class java_string_introduction {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String A = scan.next();
        String B = scan.next();

        int total_length = A.length() + B.length();

        String sorted_answer;
        sorted_answer = (A.compareTo(B) > 0) ? "Yes" : "No";

        String capitalize_answer = A.substring(0,1).toUpperCase() + A.substring(1)
                            + " " + B.substring(0,1).toUpperCase() + B.substring(1);

        System.out.println(total_length);
        System.out.println(sorted_answer);
        System.out.println(capitalize_answer);
    }
}