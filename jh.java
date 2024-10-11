import java.util.Scanner;

public class jh{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
       int count = 1;
       for(int i = n; i> 0; i--){
        for(int j = 0; j < n-i;j++ ){
               
            System.out.print(" ");
            
        }
        System.out.print("*");
        for(int j = 1; j < i;j++ ){
               
            System.out.print("_ ");
            
        }
        for(int j = 0; j < n-i;j++ ){
               
            System.out.print(" ");
            
        }
          
            System.out.print("*");
        for(int j = 1; j < i;j++ ){
               
                System.out.print("_ ");
                
            }
            System.out.print("*");
        System.out.println();
       
       }

    }
}
