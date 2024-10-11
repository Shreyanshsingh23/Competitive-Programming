import java.util.*;

public class helpful_maths_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){
  
    String a = sc.next();
    int n = (a.length()/2)+1;
    int[] arr = new int[n];
   
    int j = 0;
    for(int i = 0; i < a.length(); i+= 2){
        char ch = a.charAt(i);
        arr[j++] = ch - '0';
        
    }
    
   Arrays.sort(arr);
    
  for(int i = 0; i < arr.length; i++){
    if(i == arr.length-1){
        System.out.print(arr[i]);
    }
  else{
    System.out.print(arr[i] + "+");
  }
  }
      
 


//  }//main loop
    sc.close();
    }
}


