import java.util.Scanner;

public class Repetitions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int maxLength = 1, currentLength = 1;
        char prevChar = s.charAt(0);
        for(int i = 1; i < s.length(); i++) {
            if(s.charAt(i) == prevChar) {
                currentLength += 1;
                maxLength = Math.max(maxLength, currentLength);
            }
            else {
                currentLength = 1;
            }
            prevChar = s.charAt(i);
        }
        System.out.println(maxLength);
    }
}
