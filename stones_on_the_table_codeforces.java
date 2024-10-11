import java.util.*;

public class stones_on_the_table_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){

int n = sc.nextInt();
String s = sc.next();


int count = 0;

for(int i= 0; i < n-1; i++){
    if(s.charAt(i) == s.charAt(i+1)){
        count ++;
    }
}

System.out.println(count);

//  }//main loop
    sc.close();
    }
}


