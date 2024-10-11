// import java.util.*;

// public class boy_or_girl_codeforces{
//     public static void main(String[] args){
//    Scanner sc = new Scanner(System.in);

// //    int n = sc.nextInt();

// //   for(int k = 0; k < n; k++){
  
//     String a = sc.next();

//     char ch = a.charAt(0);
//     int count = 0;
    

//     for(int i = 0; i < a.length(); i++){
//       boolean  bool = false;
//         for(int j = i+1 ; j < a.length();j ++){
//             if(a.charAt(i) == a.charAt(j)){
//                 bool = true;
//                 break;
//             }
           
            
//         }
//         if(!bool) count++;
//     }
//     // System.out.println(count);
//     if((count & 1) == 1)  System.out.println("IGNORE HIM!");
//     else System.out.println("CHAT WITH HER!");

// //  }//main loop
//     sc.close();
//     }
// }


//MORE OPTIMIZED APPROACH O(N)
import java.util.*;

public class boy_or_girl_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){
  
    String a = sc.next();

    Set<Character> distinctChars = new HashSet<Character>() ;  

    for(int i = 0; i < a.length(); i++){
        distinctChars.add(a.charAt(i));    // because bydefault duplicate characters are ignored in HashSet
    }

    // System.out.println(count);
    if((distinctChars.size() & 1) == 1)  System.out.println("IGNORE HIM!");
    else System.out.println("CHAT WITH HER!");

//  }//main loop
    sc.close();
    }
}


