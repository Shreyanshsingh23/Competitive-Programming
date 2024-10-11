
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // YOUR CODE GOES HERE
        // Please take input and print output to standard input/output (stdin/stdout)
        // DO NOT USE ARGUMENTS FOR INPUTS
        // E.g. 'Scanner' for input & 'System.out' for output
          Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        double amount = 0;

        amount +=(double) Math.min(25,n/2);
        n-= 50;

        if(n > 0){
            amount += (double) Math.min(75,n * 0.75);
            n-= 100;
        }

        if(n > 0){
            amount += (double) Math.min(120, n * 1.20);
            n-= 100;
        }
        if(n>0){
            amount += (double)n*1.5;
        }

        amount += (double)(20*amount)/100;
        
    }
} 
    

