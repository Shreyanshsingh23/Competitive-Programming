import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i =2;
        while(i*i <= n){
            if(n%i == 0){
               System.out.println("NOT PRIME");
               return;
            }
            i++;
        }
        System.out.println("PRIME");
    }
}
