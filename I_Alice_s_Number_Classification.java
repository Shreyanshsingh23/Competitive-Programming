import java.util.Scanner;

public class I_Alice_s_Number_Classification {
   public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
     
    if(n>0){
       if((n&1 )!= 1){  //even
        
        if(n%4== 0){
           System.out.println("Special Even");
        }
        else if(n<10){
            System.out.println("Small Even");
        }
        else{
            System.out.println("Large Even");
            
        }
    }
    else if((n&1) == 1){ //odd
         if(n%3==0){
            System.out.println("Special Odd");
          
        }
          else if(n<10){
            System.out.println("Small Odd");
        }
        else{
            System.out.println("Large Odd");
        }
    }
    }
    else if(n == 0){
        System.out.println("Zero");
    }
    else{
         if((n&1 )!= 1){  //even
        
        if((n%4)== 0){
            System.out.println("Special Negative Even");
          
        }
        else if(n> -10){
            System.out.println("Small Negative Even");
            
        }
        else{
            System.out.println("Large Negative Even");
           
        }
    }
    else if((n&1) == 1){ //odd
         if(n%3== 0){
            System.out.println("Special Negative Odd");
           
        }
          else if(n> -10){
            System.out.println("Small Negative Odd");
           
        }
        else{
            System.out.println("Large Negative Odd");
              
        }
    }
    }
    
       

   }


   

}
