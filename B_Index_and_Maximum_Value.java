import java.util.*;
public class B_Index_and_Maximum_Value {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
           
            int n = sc.nextInt();
            int m = sc.nextInt();
           int[]arr = new int[n];
           
            for(int i = 0; i < n; i++){
                arr[i] = sc.nextInt();
            }
            //array is created
    
            for(int i = 0; i < m;i++){
                
                char s = sc.next().charAt(0); 
              
                int l = sc.nextInt();
                int r = sc.nextInt();
                if(s == '+'){
                  
                    
                  for(int j = 0; j < n;j++){
                     if(l <=arr[j] && r>=arr[j]){
                            arr[j]++;
                        }
                  }
                }
                else{
                     
                    
                    for(int j = 0; j < n;j++){
                     if(l <=arr[j] && r>=arr[j]){
                            arr[j]--;
                        }
                    }
                }
                int max = Integer.MIN_VALUE;
                for(int k = 0; k < n; k++){
                    if(arr[k] > max){
                        max = arr[k];
                    }
                }
                System.out.print(max + " ");
                
               
               
              
            }    
             System.out.println();
            t--;
           
        } // main loop
    }
}
