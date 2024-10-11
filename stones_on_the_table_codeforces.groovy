import java.util.*;

public class stones_on_the_table_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){

int n = sc.nextInt();
String s = sc.next();

int count = 0;

for(int i = 0; i < n; ){
  if(s.charAt(i) == 'R'){
    for(int j = i+1; j < n;j++){
      if(s.charAt(j) == 'R'){
        count ++;
      }
      else{
        i =j;
         break;}
    }
  }
  if(s.charAt(i) == 'G'){
    for(int j = i+1; j < n;j++){
      if(s.charAt(j) == 'G'){
        count ++;
      }
      else{
        i =j;
         break;}
    }
  }
  if(s.charAt(i) == 'B'){
    for(int j = i+1; j < n;j++){
      if(s.charAt(j) == 'B'){
        count ++;
      }
      else{
        i =j;
         break;}
    }
  }
}

System.out.println(count);

//  }//main loop
    sc.close();
    }
}


