import java.util.*;

public class bear_and_big_brother_codeforces{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

//    int n = sc.nextInt();

//   for(int k = 0; k < n; k++){

int a = sc.nextInt();
int b = sc.nextInt();
  int years = 0;
while(a<=b){
  a *= 3;
  b *= 2;
  years ++;
}

System.out.println(years);

//  }//main loop
    sc.close();
    }
}


