import java.util.Scanner;

public class java_anagrams {

    static boolean isAnagram(String a, String b) {
        a = a.toLowerCase();
        b = b.toLowerCase();

        if(a.length() != b.length()) return false;

        java.util.HashMap<Character, Integer> hash = new java.util.HashMap<>();

        for(int i = 0;i < a.length(); i++) {
            char key = a.charAt(i);

            if(hash.containsKey(key)) {
                Integer frequency = hash.get(key);
                hash.put(key, ++frequency);
            } else {
                hash.put(key, 1);
            }
        }

        for(int i = 0;i < b.length(); i++) {
            char key = b.charAt(i);

            if(hash.containsKey(key)) {
                Integer frequency = hash.get(key);

                if(frequency == 0)
                    return false;

                hash.put(key, --frequency);
            } else {
                return false;
            }
        }

        return true;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
