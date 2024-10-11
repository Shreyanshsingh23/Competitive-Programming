import java.util.*;

public class petya_and_strings_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){
  
    String a = sc.next();
    String b = sc.next();
    
    a = a.toLowerCase();
    b = b.toLowerCase();

    if(a.equals(b)){
        System.out.println(0);
        return;
    }
  
  for(int i = 0; i < a.length(); i++){
    if(a.charAt(i) != b.charAt(i)){
        if(a.charAt(i) > b.charAt(i)){
            System.out.println(1);
            return;
        }
        else{
            System.out.println(-1);
            return;
        }
    }
  }
      
 


//  }//main loop
    sc.close();
    
    }
}


