import java.util.*;

public class scaler_food_packets_distribution{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

 
  
      
 
  
    int[] a = {2,9,5,4};
    int b = 13;
    int [] noOfOffices = new int[a.length];
    for(int i = 0; i < a.length; i++){
        noOfOffices[i] = 1;
        b--;
    }

    while(b > 0){
        int max = Integer.MIN_VALUE;
        int maxi = 0;
        for (int i = 0; i < a.length;i++){
           if(a[i] > max){
            max = a[i];
            
            maxi = i;
           }
          
        }
        noOfOffices[maxi] ++;
        a[maxi] /= noOfOffices[maxi];
        b--;
    }

   
   int ans = Integer.MAX_VALUE;
   for (int i = 0; i < a.length; i++) {
       ans = Math.min(ans, a[i]);
   }

    
    

    
   

  System.out.println();
     

      

  


//  }//main loop
    sc.close();
    }
}


