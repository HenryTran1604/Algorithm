import java.util.Scanner;

public class NumberSpiral {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_case = sc.nextInt();
        while(test_case-- > 0) {
            int i = sc.nextInt(), j = sc.nextInt();
            int ans = 0;
            if(i > j) {
                ans = i % 2 == 0 ? i * i - j + 1 : (i - 1)*(i - 1) + j;
            } else {
                ans = j % 2 == 0 ? (j - 1)*(j - 1) + i : j*j - i + 1;
            }
            System.out.println(ans);
        }
    }
}
