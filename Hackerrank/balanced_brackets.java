import java.util.Scanner;
import java.util.Stack;

public class balanced_brackets {

    static String isBalanced(String s) {
        Stack<Character> st = new Stack<Character>();
            
        for(int i = 0;i < s.length(); i++) {
            Character bracket = s.charAt(i);
            switch (bracket) {
                case '{':
                case '[':
                case '(':
                    st.push(bracket);
                    break; 
                case '}':
                    if(st.empty() || st.pop() != '{')
                        return "NO";
                    break;
                case ']':
                    if(st.empty() || st.pop() != '[')
                        return "NO";
                    break;
                case ')':
                    if(st.empty() || st.pop() != '(')
                        return "NO";
                    break;
            }
        }

        return st.empty() ? "YES" : "NO";
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int tc = scan.nextInt();

        while(tc-- > 0) {
            String brackets = scan.next();
            
            String answer = isBalanced(brackets);

            System.out.println(answer);

        }

        scan.close();
    }
}