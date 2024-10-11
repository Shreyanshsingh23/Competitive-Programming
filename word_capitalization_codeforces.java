import java.util.*;

public class word_capitalization_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){
  
    String a = sc.next();

    char ch = a.charAt(0);

    if(Character.isUpperCase(ch)){
        System.out.println(a);
        
    }
    else{
        ch = Character.toUpperCase(ch);
        System.out.println(ch + a.substring(1));
    }
 


//  }//main loop
    sc.close();
    }
}


